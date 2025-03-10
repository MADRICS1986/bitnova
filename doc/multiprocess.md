<<<<<<< HEAD
# Multiprocess Bitcoin
=======
# Multiprocess BitNova
>>>>>>> 5360f2baff (Initialized BitNova project)

_This document describes usage of the multiprocess feature. For design information, see the [design/multiprocess.md](design/multiprocess.md) file._

## Build Option

<<<<<<< HEAD
On Unix systems, the `-DWITH_MULTIPROCESS=ON` build option can be passed to build the supplemental `bitcoin-node` and `bitcoin-gui` multiprocess executables.
=======
On Unix systems, the `-DWITH_MULTIPROCESS=ON` build option can be passed to build the supplemental `bitnova-node` and `bitnova-gui` multiprocess executables.
>>>>>>> 5360f2baff (Initialized BitNova project)

## Debugging

The `-debug=ipc` command line option can be used to see requests and responses between processes.

## Installation

<<<<<<< HEAD
The multiprocess feature requires [Cap'n Proto](https://capnproto.org/) and [libmultiprocess](https://github.com/bitcoin-core/libmultiprocess) as dependencies. A simple way to get started using it without installing these dependencies manually is to use the [depends system](../depends) with the `MULTIPROCESS=1` [dependency option](../depends#dependency-options) passed to make:
=======
The multiprocess feature requires [Cap'n Proto](https://capnproto.org/) and [libmultiprocess](https://github.com/bitnova-core/libmultiprocess) as dependencies. A simple way to get started using it without installing these dependencies manually is to use the [depends system](../depends) with the `MULTIPROCESS=1` [dependency option](../depends#dependency-options) passed to make:
>>>>>>> 5360f2baff (Initialized BitNova project)

```
cd <BITCOIN_SOURCE_DIRECTORY>
make -C depends NO_QT=1 MULTIPROCESS=1
# Set host platform to output of gcc -dumpmachine or clang -dumpmachine or check the depends/ directory for the generated subdirectory name
HOST_PLATFORM="x86_64-pc-linux-gnu"
cmake -B build --toolchain=depends/$HOST_PLATFORM/toolchain.cmake
cmake --build build
<<<<<<< HEAD
build/src/bitcoin-node -regtest -printtoconsole -debug=ipc
BITCOIND=$(pwd)/build/src/bitcoin-node build/test/functional/test_runner.py
=======
build/src/bitnova-node -regtest -printtoconsole -debug=ipc
BITCOIND=$(pwd)/build/src/bitnova-node build/test/functional/test_runner.py
>>>>>>> 5360f2baff (Initialized BitNova project)
```

The `cmake` build will pick up settings and library locations from the depends directory, so there is no need to pass `-DWITH_MULTIPROCESS=ON` as a separate flag when using the depends system (it's controlled by the `MULTIPROCESS=1` option).

<<<<<<< HEAD
Alternately, you can install [Cap'n Proto](https://capnproto.org/) and [libmultiprocess](https://github.com/bitcoin-core/libmultiprocess) packages on your system, and just run `cmake -B build -DWITH_MULTIPROCESS=ON` without using the depends system. The `cmake` build will be able to locate the installed packages via [pkg-config](https://www.freedesktop.org/wiki/Software/pkg-config/). See [Installation](https://github.com/bitcoin-core/libmultiprocess/blob/master/doc/install.md) section of the libmultiprocess readme for install steps. See [build-unix.md](build-unix.md) and [build-osx.md](build-osx.md) for information about installing dependencies in general.

## Usage

`bitcoin-node` is a drop-in replacement for `bitcoind`, and `bitcoin-gui` is a drop-in replacement for `bitcoin-qt`, and there are no differences in use or external behavior between the new and old executables. But internally after [#10102](https://github.com/bitcoin/bitcoin/pull/10102), `bitcoin-gui` will spawn a `bitcoin-node` process to run P2P and RPC code, communicating with it across a socket pair, and `bitcoin-node` will spawn `bitcoin-wallet` to run wallet code, also communicating over a socket pair. This will let node, wallet, and GUI code run in separate address spaces for better isolation, and allow future improvements like being able to start and stop components independently on different machines and environments.
[#19460](https://github.com/bitcoin/bitcoin/pull/19460) also adds a new `bitcoin-node` `-ipcbind` option and an `bitcoind-wallet` `-ipcconnect` option to allow new wallet processes to connect to an existing node process.
And [#19461](https://github.com/bitcoin/bitcoin/pull/19461) adds a new `bitcoin-gui` `-ipcconnect` option to allow new GUI processes to connect to an existing node process.
=======
Alternately, you can install [Cap'n Proto](https://capnproto.org/) and [libmultiprocess](https://github.com/bitnova-core/libmultiprocess) packages on your system, and just run `cmake -B build -DWITH_MULTIPROCESS=ON` without using the depends system. The `cmake` build will be able to locate the installed packages via [pkg-config](https://www.freedesktop.org/wiki/Software/pkg-config/). See [Installation](https://github.com/bitnova-core/libmultiprocess/blob/master/doc/install.md) section of the libmultiprocess readme for install steps. See [build-unix.md](build-unix.md) and [build-osx.md](build-osx.md) for information about installing dependencies in general.

## Usage

`bitnova-node` is a drop-in replacement for `bitnovad`, and `bitnova-gui` is a drop-in replacement for `bitnova-qt`, and there are no differences in use or external behavior between the new and old executables. But internally after [#10102](https://github.com/bitnova/bitnova/pull/10102), `bitnova-gui` will spawn a `bitnova-node` process to run P2P and RPC code, communicating with it across a socket pair, and `bitnova-node` will spawn `bitnova-wallet` to run wallet code, also communicating over a socket pair. This will let node, wallet, and GUI code run in separate address spaces for better isolation, and allow future improvements like being able to start and stop components independently on different machines and environments.
[#19460](https://github.com/bitnova/bitnova/pull/19460) also adds a new `bitnova-node` `-ipcbind` option and an `bitnovad-wallet` `-ipcconnect` option to allow new wallet processes to connect to an existing node process.
And [#19461](https://github.com/bitnova/bitnova/pull/19461) adds a new `bitnova-gui` `-ipcconnect` option to allow new GUI processes to connect to an existing node process.
>>>>>>> 5360f2baff (Initialized BitNova project)
