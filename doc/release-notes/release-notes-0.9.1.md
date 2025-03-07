<<<<<<< HEAD
Bitcoin Core version 0.9.1 is now available from:

  https://bitcoin.org/bin/0.9.1/
=======
BitNova Core version 0.9.1 is now available from:

  https://bitnova.org/bin/0.9.1/
>>>>>>> 5360f2baff (Initialized BitNova project)

This is a security update. It is recommended to upgrade to this release
as soon as possible.

It is especially important to upgrade if you currently have version
0.9.0 installed and are using the graphical interface OR you are using
<<<<<<< HEAD
bitcoind from any pre-0.9.1 version, and have enabled SSL for RPC and
=======
bitnovad from any pre-0.9.1 version, and have enabled SSL for RPC and
>>>>>>> 5360f2baff (Initialized BitNova project)
have configured allowip to allow rpc connections from potentially
hostile hosts.

Please report bugs using the issue tracker at github:

<<<<<<< HEAD
  https://github.com/bitcoin/bitcoin/issues
=======
  https://github.com/bitnova/bitnova/issues
>>>>>>> 5360f2baff (Initialized BitNova project)

How to Upgrade
--------------

If you are running an older version, shut it down. Wait until it has completely
shut down (which might take a few minutes for older versions), then run the
<<<<<<< HEAD
installer (on Windows) or just copy over /Applications/Bitcoin-Qt (on Mac) or
bitcoind/bitcoin-qt (on Linux).
=======
installer (on Windows) or just copy over /Applications/BitNova-Qt (on Mac) or
bitnovad/bitnova-qt (on Linux).
>>>>>>> 5360f2baff (Initialized BitNova project)

If you are upgrading from version 0.7.2 or earlier, the first time you run
0.9.1 your blockchain files will be re-indexed, which will take anywhere from 
30 minutes to several hours, depending on the speed of your machine.

0.9.1 Release notes
=======================

No code changes were made between 0.9.0 and 0.9.1. Only the dependencies were changed.

- Upgrade OpenSSL to 1.0.1g. This release fixes the following vulnerabilities which can
<<<<<<< HEAD
  affect the Bitcoin Core software:
=======
  affect the BitNova Core software:
>>>>>>> 5360f2baff (Initialized BitNova project)

  - CVE-2014-0160 ("heartbleed")
    A missing bounds check in the handling of the TLS heartbeat extension can
    be used to reveal up to 64k of memory to a connected client or server.

  - CVE-2014-0076
    The Montgomery ladder implementation in OpenSSL does not ensure that
    certain swap operations have a constant-time behavior, which makes it
    easier for local users to obtain ECDSA nonces via a FLUSH+RELOAD cache
    side-channel attack.

- Add statically built executables to Linux build

Credits
--------

Credits go to the OpenSSL team for fixing the vulnerabilities quickly.
