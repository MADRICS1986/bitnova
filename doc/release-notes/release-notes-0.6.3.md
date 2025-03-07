<<<<<<< HEAD
Bitcoin version 0.6.3 is now available for download at:
  http://sourceforge.net/projects/bitcoin/files/Bitcoin/bitcoin-0.6.3/
=======
BitNova version 0.6.3 is now available for download at:
  http://sourceforge.net/projects/bitnova/files/BitNova/bitnova-0.6.3/
>>>>>>> 5360f2baff (Initialized BitNova project)

This is a bug-fix release, with no new features.

Please report bugs using the issue tracker at github:
<<<<<<< HEAD
  https://github.com/bitcoin/bitcoin/issues
=======
  https://github.com/bitnova/bitnova/issues
>>>>>>> 5360f2baff (Initialized BitNova project)

CHANGE SUMMARY

Fixed a serious denial-of-service attack that could cause the
<<<<<<< HEAD
bitcoin process to become unresponsive. Thanks to Sergio Lerner
=======
bitnova process to become unresponsive. Thanks to Sergio Lerner
>>>>>>> 5360f2baff (Initialized BitNova project)
for finding and responsibly reporting the problem. (CVE-2012-3789)

Optimized the process of checking transaction signatures, to
speed up processing of new block messages and make propagating
blocks across the network faster.

<<<<<<< HEAD
Fixed an obscure bug that could cause the bitcoin process to get
stuck on an invalid block-chain, if the invalid chain was
hundreds of blocks long.

Bitcoin-Qt no longer automatically selects the first address
in the address book (Issue #1384).

Fixed minimize-to-dock behavior of Bitcoin-Qt on the Mac.
=======
Fixed an obscure bug that could cause the bitnova process to get
stuck on an invalid block-chain, if the invalid chain was
hundreds of blocks long.

BitNova-Qt no longer automatically selects the first address
in the address book (Issue #1384).

Fixed minimize-to-dock behavior of BitNova-Qt on the Mac.
>>>>>>> 5360f2baff (Initialized BitNova project)

Added a block checkpoint at block 185,333 to speed up initial
blockchain download.
