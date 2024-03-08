template<typename T>
struct instance_counter {
    static int instances;

    instance_counter() { ++instances; }
    instance_counter(const instance_counter&) { ++instances; }
    instance_counter(instance_counter&&) noexcept { ++instances; }
    instance_counter& operator=(const instance_counter&) {
        ++instances;
        return *this;
    }
    instance_counter& operator=(instance_counter&&) noexcept {
        ++instances;
        return *this;
    }
    ~instance_counter() { --instances; }
};

template<typename T>
int instance_counter<T>::instances = 0;


struct example : instance_counter<example> {
    int a;
    int b;
};