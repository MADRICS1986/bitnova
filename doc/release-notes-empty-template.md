*The release notes draft is a temporary file that can be added to by anyone. See
[/doc/developer-notes.md#release-notes](/doc/developer-notes.md#release-notes)
for the process.*

*version* Release Notes Draft
===============================

<<<<<<< HEAD
Bitcoin Core version *version* is now available from:

  <https://bitcoincore.org/bin/bitcoin-core-*version*/>
=======
BitNova Core version *version* is now available from:

  <https://bitnovacore.org/bin/bitnova-core-*version*/>
>>>>>>> 5360f2baff (Initialized BitNova project)

This release includes new features, various bug fixes and performance
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
Bitcoin Core is supported and tested on operating systems using the
Linux Kernel 3.17+, macOS 13+, and Windows 10+. Bitcoin
Core should also work on most other Unix-like systems but is not as
frequently tested on them. It is not recommended to use Bitcoin Core on
=======
BitNova Core is supported and tested on operating systems using the
Linux Kernel 3.17+, macOS 13+, and Windows 10+. BitNova
Core should also work on most other Unix-like systems but is not as
frequently tested on them. It is not recommended to use BitNova Core on
>>>>>>> 5360f2baff (Initialized BitNova project)
unsupported systems.

Notable changes
===============

P2P and network changes
-----------------------

Updated RPCs
------------


Changes to wallet related RPCs can be found in the Wallet section below.

New RPCs
--------

Build System
------------

Updated settings
----------------


Changes to GUI or wallet related settings can be found in the GUI or Wallet section below.

New settings
------------

Tools and Utilities
-------------------

Wallet
------

GUI changes
-----------

Low-level changes
=================

RPC
---

Tests
-----

*version* change log
====================

Credits
=======

Thanks to everyone who directly contributed to this release:


As well as to everyone that helped with translations on
<<<<<<< HEAD
[Transifex](https://www.transifex.com/bitcoin/bitcoin/).
=======
[Transifex](https://www.transifex.com/bitnova/bitnova/).
>>>>>>> 5360f2baff (Initialized BitNova project)
