# Getting started

In am empty directory of your choice do:
```bash
git clone https://github.com/LuckeTech/Urban_VitalControl
```

## Getting the Toolchain
### Acquire vcpkg
#### Windows PowerShell
```bash
iex (iwr -useb https://aka.ms/vcpkg-init.ps1)
```

#### Windows CMD Shell
```bash
curl -LO https://aka.ms/vcpkg-init.cmd && .\vcpkg-init.cmd
```

#### Linux/MacOS
```bash
. <(curl https://aka.ms/vcpkg-init.sh -L)
```

### Download requirements
From the repo's root do:
```bash
vcpkg activate --downloads-root="../vcpkg/artifacts"
vcpkg install --downloads-root="../vcpkg/ports"
```

## Configure

From the repo's root do:
```bash
cmake --preset <preset_name>
```
Replace `<preset_name>` with the name of the build preset you want to use.

Hint: For a list of available presets do:
```bash
cmake --list-presets
```

## Build
From the repo's root do:
```bash
cmake --preset <preset_name> --build
```
