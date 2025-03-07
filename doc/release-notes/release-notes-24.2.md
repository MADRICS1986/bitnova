24.2 Release Notes
==================

<<<<<<< HEAD
Bitcoin Core version 24.2 is now available from:

  <https://bitcoincore.org/bin/bitcoin-core-24.2/>
=======
BitNova Core version 24.2 is now available from:

  <https://bitnovacore.org/bin/bitnova-core-24.2/>
>>>>>>> 5360f2baff (Initialized BitNova project)

This release includes various bug fixes and performance
improvements, as well as updated translations.

Please report bugs using the issue tracker at GitHub:

<<<<<<< HEAD
  <https://github.com/bitcoin/bitcoin/issues>

To receive security and update notifications, please subscribe to:

  <https://bitcoincore.org/en/list/announcements/join/>
=======
  <https://github.com/bitnova/bitnova/issues>

To receive security and update notifications, please subscribe to:

  <https://bitnovacore.org/en/list/announcements/join/>
>>>>>>> 5360f2baff (Initialized BitNova project)

How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely
shut down (which might take a few minutes in some cases), then run the
<<<<<<< HEAD
installer (on Windows) or just copy over `/Applications/Bitcoin-Qt` (on macOS)
or `bitcoind`/`bitcoin-qt` (on Linux).

Upgrading directly from a version of Bitcoin Core that has reached its EOL is
possible, but it might take some time if the data directory needs to be migrated. Old
wallet versions of Bitcoin Core are generally supported.
=======
installer (on Windows) or just copy over `/Applications/BitNova-Qt` (on macOS)
or `bitnovad`/`bitnova-qt` (on Linux).

Upgrading directly from a version of BitNova Core that has reached its EOL is
possible, but it might take some time if the data directory needs to be migrated. Old
wallet versions of BitNova Core are generally supported.
>>>>>>> 5360f2baff (Initialized BitNova project)

Compatibility
==============

<<<<<<< HEAD
Bitcoin Core is supported and extensively tested on operating systems
using the Linux kernel, macOS 10.15+, and Windows 7 and newer.  Bitcoin
Core should also work on most other Unix-like systems but is not as
frequently tested on them.  It is not recommended to use Bitcoin Core on
=======
BitNova Core is supported and extensively tested on operating systems
using the Linux kernel, macOS 10.15+, and Windows 7 and newer.  BitNova
Core should also work on most other Unix-like systems but is not as
frequently tested on them.  It is not recommended to use BitNova Core on
>>>>>>> 5360f2baff (Initialized BitNova project)
unsupported systems.

### Fees

- #27622 Fee estimation: avoid serving stale fee estimate

### RPC and other APIs

- #27727 rpc: Fix invalid bech32 address handling

### Build System

- #28097 depends: xcb-proto 1.15.2
- #28543 build, macos: Fix qt package build with new Xcode 15 linker
- #28571 depends: fix unusable memory_resource in macos qt build

### CI

- #27777 ci: Prune dangling images on RESTART_CI_DOCKER_BEFORE_RUN
- #27834 ci: Nuke Android APK task, Use credits for tsan
- #27844 ci: Use podman stop over podman kill
- #27886 ci: Switch to amd64 container in "ARM" task

### Miscellaneous
- #28452 Do not use std::vector = {} to release memory

Credits
=======

Thanks to everyone who directly contributed to this release:

- Abubakar Sadiq Ismail
- Hennadii Stepanov
- Marco Falke
- Michael Ford
- Pieter Wuille

As well as to everyone that helped with translations on
<<<<<<< HEAD
[Transifex](https://www.transifex.com/bitcoin/bitcoin/).
=======
[Transifex](https://www.transifex.com/bitnova/bitnova/).
>>>>>>> 5360f2baff (Initialized BitNova project)
