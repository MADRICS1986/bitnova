Sample configuration files for:
```
<<<<<<< HEAD
systemd: bitcoind.service
Upstart: bitcoind.conf
OpenRC:  bitcoind.openrc
         bitcoind.openrcconf
CentOS:  bitcoind.init
macOS:   org.bitcoin.bitcoind.plist
=======
systemd: bitnovad.service
Upstart: bitnovad.conf
OpenRC:  bitnovad.openrc
         bitnovad.openrcconf
CentOS:  bitnovad.init
macOS:   org.bitnova.bitnovad.plist
>>>>>>> 5360f2baff (Initialized BitNova project)
```
have been made available to assist packagers in creating node packages here.

See [doc/init.md](../../doc/init.md) for more information.
