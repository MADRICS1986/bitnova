<<<<<<< HEAD
Bitcoin version 0.5.1 is now available for download at:
http://sourceforge.net/projects/bitcoin/files/Bitcoin/bitcoin-0.5.1/
=======
BitNova version 0.5.1 is now available for download at:
http://sourceforge.net/projects/bitnova/files/BitNova/bitnova-0.5.1/
>>>>>>> 5360f2baff (Initialized BitNova project)

This is a bugfix-only release.

This release includes 13 translations, including 5 new translations:
Italian, Hungarian, Ukranian, Portuguese (Brazilian) and Simplified Chinese.
More translations are welcome; join the project at Transifex if you can help:
<<<<<<< HEAD
https://www.transifex.net/projects/p/bitcoin/

Please report bugs using the issue tracker at github:
https://github.com/bitcoin/bitcoin/issues
=======
https://www.transifex.net/projects/p/bitnova/

Please report bugs using the issue tracker at github:
https://github.com/bitnova/bitnova/issues
>>>>>>> 5360f2baff (Initialized BitNova project)

Project source code is hosted at github; we are no longer
distributing .tar.gz files here, you can get them
directly from github:
<<<<<<< HEAD
https://github.com/bitcoin/bitcoin/tarball/v0.5.1  # .tar.gz
https://github.com/bitcoin/bitcoin/zipball/v0.5.1  # .zip

For Ubuntu users, there is a new ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
bitcoin up-to-date.  Just type
sudo apt-add-repository ppa:bitcoin/bitcoin
in your terminal, then install the bitcoin-qt package.
=======
https://github.com/bitnova/bitnova/tarball/v0.5.1  # .tar.gz
https://github.com/bitnova/bitnova/zipball/v0.5.1  # .zip

For Ubuntu users, there is a new ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
bitnova up-to-date.  Just type
sudo apt-add-repository ppa:bitnova/bitnova
in your terminal, then install the bitnova-qt package.
>>>>>>> 5360f2baff (Initialized BitNova project)


BUG FIXES

Re-enable SSL support for the JSON-RPC interface (it was unintentionally
disabled for the 0.5.0 release binaries).

<<<<<<< HEAD
The code that finds peers via "dns seeds" no longer stops bitcoin startup
=======
The code that finds peers via "dns seeds" no longer stops bitnova startup
>>>>>>> 5360f2baff (Initialized BitNova project)
if one of the dns seed machines is down.

Tooltips on the transaction list view were rendering incorrectly (as black boxes
or with a transparent background).

<<<<<<< HEAD
Prevent a denial-of-service attack involving flooding a bitcoin node with
=======
Prevent a denial-of-service attack involving flooding a bitnova node with
>>>>>>> 5360f2baff (Initialized BitNova project)
orphan blocks.

The wallet passphrase dialog now warns you if the caps lock key was pressed.

<<<<<<< HEAD
Improved searching in addresses and labels in bitcoin-qt.
=======
Improved searching in addresses and labels in bitnova-qt.
>>>>>>> 5360f2baff (Initialized BitNova project)
