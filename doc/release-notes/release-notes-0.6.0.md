<<<<<<< HEAD
Bitcoin version 0.6.0 is now available for download at:
http://sourceforge.net/projects/bitcoin/files/Bitcoin/bitcoin-0.6.0/test/
=======
BitNova version 0.6.0 is now available for download at:
http://sourceforge.net/projects/bitnova/files/BitNova/bitnova-0.6.0/test/
>>>>>>> 5360f2baff (Initialized BitNova project)

This release includes more than 20 language localizations.
More translations are welcome; join the
project at Transifex to help:
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
https://github.com/bitcoin/bitcoin/tarball/v0.6.0  # .tar.gz
https://github.com/bitcoin/bitcoin/zipball/v0.6.0  # .zip

For Ubuntu users, there is a ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
bitcoin up-to-date.  Just type
sudo apt-add-repository ppa:bitcoin/bitcoin
in your terminal, then install the bitcoin-qt package.
=======
https://github.com/bitnova/bitnova/tarball/v0.6.0  # .tar.gz
https://github.com/bitnova/bitnova/zipball/v0.6.0  # .zip

For Ubuntu users, there is a ppa maintained by Matt Corallo which
you can add to your system so that it will automatically keep
bitnova up-to-date.  Just type
sudo apt-add-repository ppa:bitnova/bitnova
in your terminal, then install the bitnova-qt package.
>>>>>>> 5360f2baff (Initialized BitNova project)


KNOWN ISSUES

Shutting down while synchronizing with the network
(downloading the blockchain) can take more than a minute,
because database writes are queued to speed up download
time.


NEW FEATURES SINCE BITCOIN VERSION 0.5

Initial network synchronization should be much faster
(one or two hours on a typical machine instead of ten or more
hours).

Backup Wallet menu option.

<<<<<<< HEAD
Bitcoin-Qt can display and save QR codes for sending
=======
BitNova-Qt can display and save QR codes for sending
>>>>>>> 5360f2baff (Initialized BitNova project)
and receiving addresses.

New context menu on addresses to copy/edit/delete them.

New Sign Message dialog that allows you to prove that you
<<<<<<< HEAD
own a bitcoin address by creating a digital
=======
own a bitnova address by creating a digital
>>>>>>> 5360f2baff (Initialized BitNova project)
signature.

New wallets created with this version will
use 33-byte 'compressed' public keys instead of
65-byte public keys, resulting in smaller
<<<<<<< HEAD
transactions and less traffic on the bitcoin
network. The shorter keys are already supported
by the network but wallet.dat files containing
short keys are not compatible with earlier
versions of Bitcoin-Qt/bitcoind.
=======
transactions and less traffic on the bitnova
network. The shorter keys are already supported
by the network but wallet.dat files containing
short keys are not compatible with earlier
versions of BitNova-Qt/bitnovad.
>>>>>>> 5360f2baff (Initialized BitNova project)

New command-line argument -blocknotify=<command>
that will spawn a shell process to run <command> 
when a new block is accepted.

New command-line argument -splash=0 to disable
<<<<<<< HEAD
Bitcoin-Qt's initial splash screen
=======
BitNova-Qt's initial splash screen
>>>>>>> 5360f2baff (Initialized BitNova project)

validateaddress JSON-RPC api command output includes
two new fields for addresses in the wallet:
pubkey : hexadecimal public key
iscompressed : true if pubkey is a short 33-byte key

New JSON-RPC api commands for dumping/importing
private keys from the wallet (dumprivkey, importprivkey).

New JSON-RPC api command for getting information about
blocks (getblock, getblockhash).

New JSON-RPC api command (getmininginfo) for getting
extra information related to mining. The getinfo
JSON-RPC command no longer includes mining-related
information (generate/genproclimit/hashespersec).



NOTABLE CHANGES

BIP30 implemented (security fix for an attack involving
duplicate "coinbase transactions").

The -nolisten, -noupnp and -nodnsseed command-line
options were renamed to -listen, -upnp and -dnsseed,
with a default value of 1. The old names are still
supported for compatibility (so specifying -nolisten
is automatically interpreted as -listen=0; every
boolean argument can now be specified as either
-foo or -nofoo).

The -noirc command-line options was renamed to
-irc, with a default value of 0. Run -irc=1 to
get the old behavior.

Three fill-up-available-memory denial-of-service
attacks were fixed.


NOT YET IMPLEMENTED FEATURES

<<<<<<< HEAD
Support for clicking on bitcoin: URIs and
opening/launching Bitcoin-Qt is available only on Linux,
and only if you configure your desktop to launch
Bitcoin-Qt. All platforms support dragging and dropping
bitcoin: URIs onto the Bitcoin-Qt window to start
=======
Support for clicking on bitnova: URIs and
opening/launching BitNova-Qt is available only on Linux,
and only if you configure your desktop to launch
BitNova-Qt. All platforms support dragging and dropping
bitnova: URIs onto the BitNova-Qt window to start
>>>>>>> 5360f2baff (Initialized BitNova project)
payment.


PRELIMINARY SUPPORT FOR MULTISIGNATURE TRANSACTIONS

This release has preliminary support for multisignature
transactions-- transactions that require authorization
from more than one person or device before they
<<<<<<< HEAD
will be accepted by the bitcoin network.
=======
will be accepted by the bitnova network.
>>>>>>> 5360f2baff (Initialized BitNova project)

Prior to this release, multisignature transactions
were considered 'non-standard' and were ignored;
with this release multisignature transactions are
considered standard and will start to be relayed
and accepted into blocks.

<<<<<<< HEAD
It is expected that future releases of Bitcoin-Qt
=======
It is expected that future releases of BitNova-Qt
>>>>>>> 5360f2baff (Initialized BitNova project)
will support the creation of multisignature transactions,
once enough of the network has upgraded so relaying
and validating them is robust.

For this release, creation and testing of multisignature
<<<<<<< HEAD
transactions is limited to the bitcoin test network using
=======
transactions is limited to the bitnova test network using
>>>>>>> 5360f2baff (Initialized BitNova project)
the "addmultisigaddress" JSON-RPC api call.

Short multisignature address support is included in this
release, as specified in BIP 13 and BIP 16.
