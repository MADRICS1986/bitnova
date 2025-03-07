# macOS Build Guide

**Updated for MacOS [15](https://www.apple.com/macos/macos-sequoia/)**

<<<<<<< HEAD
This guide describes how to build bitcoind, command-line utilities, and GUI on macOS.
=======
This guide describes how to build bitnovad, command-line utilities, and GUI on macOS.
>>>>>>> 5360f2baff (Initialized BitNova project)

## Preparation

The commands in this guide should be executed in a Terminal application.
macOS comes with a built-in Terminal located in:

```bash
/Applications/Utilities/Terminal.app
```

### 1. Xcode Command Line Tools

The Xcode Command Line Tools are a collection of build tools for macOS.
<<<<<<< HEAD
These tools must be installed in order to build Bitcoin Core from source.
=======
These tools must be installed in order to build BitNova Core from source.
>>>>>>> 5360f2baff (Initialized BitNova project)

To install, run the following command from your terminal:

``` bash
xcode-select --install
```

Upon running the command, you should see a popup appear.
Click on `Install` to continue the installation process.

### 2. Homebrew Package Manager

Homebrew is a package manager for macOS that allows one to install packages from the command line easily.
While several package managers are available for macOS, this guide will focus on Homebrew as it is the most popular.
Since the examples in this guide which walk through the installation of a package will use Homebrew, it is recommended that you install it to follow along.
Otherwise, you can adapt the commands to your package manager of choice.

To install the Homebrew package manager, see: https://brew.sh

Note: If you run into issues while installing Homebrew or pulling packages, refer to [Homebrew's troubleshooting page](https://docs.brew.sh/Troubleshooting).

### 3. Install Required Dependencies

The first step is to download the required dependencies.
These dependencies represent the packages required to get a barebones installation up and running.

See [dependencies.md](dependencies.md) for a complete overview.

To install, run the following from your terminal:

``` bash
brew install cmake boost pkgconf libevent
```

<<<<<<< HEAD
### 4. Clone Bitcoin repository

`git` should already be installed by default on your system.
Now that all the required dependencies are installed, let's clone the Bitcoin Core repository to a directory.
All build scripts and commands will run from this directory.

``` bash
git clone https://github.com/bitcoin/bitcoin.git
=======
### 4. Clone BitNova repository

`git` should already be installed by default on your system.
Now that all the required dependencies are installed, let's clone the BitNova Core repository to a directory.
All build scripts and commands will run from this directory.

``` bash
git clone https://github.com/bitnova/bitnova.git
>>>>>>> 5360f2baff (Initialized BitNova project)
```

### 5. Install Optional Dependencies

#### Wallet Dependencies

<<<<<<< HEAD
It is not necessary to build wallet functionality to run `bitcoind` or  `bitcoin-qt`.
=======
It is not necessary to build wallet functionality to run `bitnovad` or  `bitnova-qt`.
>>>>>>> 5360f2baff (Initialized BitNova project)

###### Descriptor Wallet Support

`sqlite` is required to support for descriptor wallets.

macOS ships with a useable `sqlite` package, meaning you don't need to
install anything.

###### Legacy Wallet Support

`berkeley-db@4` is only required to support for legacy wallets.
Skip if you don't intend to use legacy wallets.

``` bash
brew install berkeley-db@4
```
---

#### GUI Dependencies

###### Qt

<<<<<<< HEAD
Bitcoin Core includes a GUI built with the cross-platform Qt Framework. To compile the GUI, we need to install
=======
BitNova Core includes a GUI built with the cross-platform Qt Framework. To compile the GUI, we need to install
>>>>>>> 5360f2baff (Initialized BitNova project)
Qt, libqrencode and pass `-DBUILD_GUI=ON`. Skip if you don't intend to use the GUI.

``` bash
brew install qt@5
```

Note: Building with Qt binaries downloaded from the Qt website is not officially supported.
<<<<<<< HEAD
See the notes in [#7714](https://github.com/bitcoin/bitcoin/issues/7714).
=======
See the notes in [#7714](https://github.com/bitnova/bitnova/issues/7714).
>>>>>>> 5360f2baff (Initialized BitNova project)

###### libqrencode

The GUI will be able to encode addresses in QR codes unless this feature is explicitly disabled. To install libqrencode, run:

``` bash
brew install qrencode
```

Otherwise, if you don't need QR encoding support, you can pass `-DWITH_QRENCODE=OFF` to disable this feature.

---

#### ZMQ Dependencies

Support for ZMQ notifications requires the following dependency.
Skip if you do not need ZMQ functionality.

``` bash
brew install zeromq
```

Check out the [further configuration](#further-configuration) section for more information.

For more information on ZMQ, see: [zmq.md](zmq.md)

---

#### Test Suite Dependencies

There is an included test suite that is useful for testing code changes when developing.
To run the test suite (recommended), you will need to have Python 3 installed:

``` bash
brew install python
```

---

#### Deploy Dependencies

<<<<<<< HEAD
You can [deploy](#3-deploy-optional) a `.zip` containing the Bitcoin Core application.
It is required that you have `python` installed.

## Building Bitcoin Core

### 1. Configuration

There are many ways to configure Bitcoin Core, here are a few common examples:
=======
You can [deploy](#3-deploy-optional) a `.zip` containing the BitNova Core application.
It is required that you have `python` installed.

## Building BitNova Core

### 1. Configuration

There are many ways to configure BitNova Core, here are a few common examples:
>>>>>>> 5360f2baff (Initialized BitNova project)

##### Wallet (BDB + SQlite) Support, No GUI:

If `berkeley-db@4` or `sqlite` are not installed, this will throw an error.

``` bash
cmake -B build -DWITH_BDB=ON
```

##### Wallet (only SQlite) and GUI Support:

This enables the GUI.
If `sqlite` or `qt` are not installed, this will throw an error.

``` bash
cmake -B build -DBUILD_GUI=ON
```

##### No Wallet or GUI

``` bash
cmake -B build -DENABLE_WALLET=OFF
```

##### Further Configuration

You may want to dig deeper into the configuration options to achieve your desired behavior.
Examine the output of the following command for a full list of configuration options:

``` bash
cmake -B build -LH
```

### 2. Compile

After configuration, you are ready to compile.
<<<<<<< HEAD
Run the following in your terminal to compile Bitcoin Core:
=======
Run the following in your terminal to compile BitNova Core:
>>>>>>> 5360f2baff (Initialized BitNova project)

``` bash
cmake --build build     # Use "-j N" here for N parallel jobs.
ctest --test-dir build  # Use "-j N" for N parallel tests. Some tests are disabled if Python 3 is not available.
```

### 3. Deploy (optional)

You can also create a  `.zip` containing the `.app` bundle by running the following command:

``` bash
cmake --build build --target deploy
```

<<<<<<< HEAD
## Running Bitcoin Core

Bitcoin Core should now be available at `./build/src/bitcoind`.
If you compiled support for the GUI, it should be available at `./build/src/qt/bitcoin-qt`.

The first time you run `bitcoind` or `bitcoin-qt`, it will start downloading the blockchain.
=======
## Running BitNova Core

BitNova Core should now be available at `./build/src/bitnovad`.
If you compiled support for the GUI, it should be available at `./build/src/qt/bitnova-qt`.

The first time you run `bitnovad` or `bitnova-qt`, it will start downloading the blockchain.
>>>>>>> 5360f2baff (Initialized BitNova project)
This process could take many hours, or even days on slower than average systems.

By default, blockchain and wallet data files will be stored in:

``` bash
<<<<<<< HEAD
/Users/${USER}/Library/Application Support/Bitcoin/
=======
/Users/${USER}/Library/Application Support/BitNova/
>>>>>>> 5360f2baff (Initialized BitNova project)
```

Before running, you may create an empty configuration file:

```shell
<<<<<<< HEAD
mkdir -p "/Users/${USER}/Library/Application Support/Bitcoin"

touch "/Users/${USER}/Library/Application Support/Bitcoin/bitcoin.conf"

chmod 600 "/Users/${USER}/Library/Application Support/Bitcoin/bitcoin.conf"
=======
mkdir -p "/Users/${USER}/Library/Application Support/BitNova"

touch "/Users/${USER}/Library/Application Support/BitNova/bitnova.conf"

chmod 600 "/Users/${USER}/Library/Application Support/BitNova/bitnova.conf"
>>>>>>> 5360f2baff (Initialized BitNova project)
```

You can monitor the download process by looking at the debug.log file:

```shell
<<<<<<< HEAD
tail -f $HOME/Library/Application\ Support/Bitcoin/debug.log
=======
tail -f $HOME/Library/Application\ Support/BitNova/debug.log
>>>>>>> 5360f2baff (Initialized BitNova project)
```

## Other commands:

```shell
<<<<<<< HEAD
./build/src/bitcoind -daemon      # Starts the bitcoin daemon.
./build/src/bitcoin-cli --help    # Outputs a list of command-line options.
./build/src/bitcoin-cli help      # Outputs a list of RPC commands when the daemon is running.
./build/src/qt/bitcoin-qt -server # Starts the bitcoin-qt server mode, allows bitcoin-cli control
=======
./build/src/bitnovad -daemon      # Starts the bitnova daemon.
./build/src/bitnova-cli --help    # Outputs a list of command-line options.
./build/src/bitnova-cli help      # Outputs a list of RPC commands when the daemon is running.
./build/src/qt/bitnova-qt -server # Starts the bitnova-qt server mode, allows bitnova-cli control
>>>>>>> 5360f2baff (Initialized BitNova project)
```
