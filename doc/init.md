<<<<<<< HEAD
Sample init scripts and service configuration for bitcoind
=======
Sample init scripts and service configuration for bitnovad
>>>>>>> 5360f2baff (Initialized BitNova project)
==========================================================

Sample scripts and configuration files for systemd, Upstart and OpenRC
can be found in the contrib/init folder.

<<<<<<< HEAD
    contrib/init/bitcoind.service:    systemd service unit configuration
    contrib/init/bitcoind.openrc:     OpenRC compatible SysV style init script
    contrib/init/bitcoind.openrcconf: OpenRC conf.d file
    contrib/init/bitcoind.conf:       Upstart service configuration file
    contrib/init/bitcoind.init:       CentOS compatible SysV style init script
=======
    contrib/init/bitnovad.service:    systemd service unit configuration
    contrib/init/bitnovad.openrc:     OpenRC compatible SysV style init script
    contrib/init/bitnovad.openrcconf: OpenRC conf.d file
    contrib/init/bitnovad.conf:       Upstart service configuration file
    contrib/init/bitnovad.init:       CentOS compatible SysV style init script
>>>>>>> 5360f2baff (Initialized BitNova project)

Service User
---------------------------------

<<<<<<< HEAD
All three Linux startup configurations assume the existence of a "bitcoin" user
and group.  They must be created before attempting to use these scripts.
The macOS configuration assumes bitcoind will be set up for the current user.
=======
All three Linux startup configurations assume the existence of a "bitnova" user
and group.  They must be created before attempting to use these scripts.
The macOS configuration assumes bitnovad will be set up for the current user.
>>>>>>> 5360f2baff (Initialized BitNova project)

Configuration
---------------------------------

<<<<<<< HEAD
Running bitcoind as a daemon does not require any manual configuration. You may
set the `rpcauth` setting in the `bitcoin.conf` configuration file to override
the default behaviour of using a special cookie for authentication.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that bitcoind and client programs read from the configuration
=======
Running bitnovad as a daemon does not require any manual configuration. You may
set the `rpcauth` setting in the `bitnova.conf` configuration file to override
the default behaviour of using a special cookie for authentication.

This password does not have to be remembered or typed as it is mostly used
as a fixed token that bitnovad and client programs read from the configuration
>>>>>>> 5360f2baff (Initialized BitNova project)
file, however it is recommended that a strong and secure password be used
as this password is security critical to securing the wallet should the
wallet be enabled.

<<<<<<< HEAD
If bitcoind is run with the "-server" flag (set by default), and no rpcpassword is set,
=======
If bitnovad is run with the "-server" flag (set by default), and no rpcpassword is set,
>>>>>>> 5360f2baff (Initialized BitNova project)
it will use a special cookie file for authentication. The cookie is generated with random
content when the daemon starts, and deleted when it exits. Read access to this file
controls who can access it through RPC.

By default the cookie is stored in the data directory, but its location can be
overridden with the option `-rpccookiefile`. Default file permissions for the
cookie are "owner" (i.e. user read/writeable) via default application-wide file
umask of `0077`, but these can be overridden with the `-rpccookieperms` option.

<<<<<<< HEAD
This allows for running bitcoind without having to do any manual configuration.
=======
This allows for running bitnovad without having to do any manual configuration.
>>>>>>> 5360f2baff (Initialized BitNova project)

`conf`, `pid`, and `wallet` accept relative paths which are interpreted as
relative to the data directory. `wallet` *only* supports relative paths.

To generate an example configuration file that describes the configuration settings,
<<<<<<< HEAD
see [contrib/devtools/README.md](../contrib/devtools/README.md#gen-bitcoin-confsh).
=======
see [contrib/devtools/README.md](../contrib/devtools/README.md#gen-bitnova-confsh).
>>>>>>> 5360f2baff (Initialized BitNova project)

Paths
---------------------------------

### Linux

All three configurations assume several paths that might need to be adjusted.

<<<<<<< HEAD
    Binary:              /usr/bin/bitcoind
    Configuration file:  /etc/bitcoin/bitcoin.conf
    Data directory:      /var/lib/bitcoind
    PID file:            /var/run/bitcoind/bitcoind.pid (OpenRC and Upstart) or
                         /run/bitcoind/bitcoind.pid (systemd)
    Lock file:           /var/lock/subsys/bitcoind (CentOS)

The PID directory (if applicable) and data directory should both be owned by the
bitcoin user and group. It is advised for security reasons to make the
configuration file and data directory only readable by the bitcoin user and
group. Access to bitcoin-cli and other bitcoind rpc clients can then be
=======
    Binary:              /usr/bin/bitnovad
    Configuration file:  /etc/bitnova/bitnova.conf
    Data directory:      /var/lib/bitnovad
    PID file:            /var/run/bitnovad/bitnovad.pid (OpenRC and Upstart) or
                         /run/bitnovad/bitnovad.pid (systemd)
    Lock file:           /var/lock/subsys/bitnovad (CentOS)

The PID directory (if applicable) and data directory should both be owned by the
bitnova user and group. It is advised for security reasons to make the
configuration file and data directory only readable by the bitnova user and
group. Access to bitnova-cli and other bitnovad rpc clients can then be
>>>>>>> 5360f2baff (Initialized BitNova project)
controlled by group membership.

NOTE: When using the systemd .service file, the creation of the aforementioned
directories and the setting of their permissions is automatically handled by
<<<<<<< HEAD
systemd. Directories are given a permission of 710, giving the bitcoin group
access to files under it _if_ the files themselves give permission to the
bitcoin group to do so. This does not allow
for the listing of files under the directory.

NOTE: It is not currently possible to override `datadir` in
`/etc/bitcoin/bitcoin.conf` with the current systemd, OpenRC, and Upstart init
files out-of-the-box. This is because the command line options specified in the
init files take precedence over the configurations in
`/etc/bitcoin/bitcoin.conf`. However, some init systems have their own
=======
systemd. Directories are given a permission of 710, giving the bitnova group
access to files under it _if_ the files themselves give permission to the
bitnova group to do so. This does not allow
for the listing of files under the directory.

NOTE: It is not currently possible to override `datadir` in
`/etc/bitnova/bitnova.conf` with the current systemd, OpenRC, and Upstart init
files out-of-the-box. This is because the command line options specified in the
init files take precedence over the configurations in
`/etc/bitnova/bitnova.conf`. However, some init systems have their own
>>>>>>> 5360f2baff (Initialized BitNova project)
configuration mechanisms that would allow for overriding the command line
options specified in the init files (e.g. setting `BITCOIND_DATADIR` for
OpenRC).

### macOS

<<<<<<< HEAD
    Binary:              /usr/local/bin/bitcoind
    Configuration file:  ~/Library/Application Support/Bitcoin/bitcoin.conf
    Data directory:      ~/Library/Application Support/Bitcoin
    Lock file:           ~/Library/Application Support/Bitcoin/.lock
=======
    Binary:              /usr/local/bin/bitnovad
    Configuration file:  ~/Library/Application Support/BitNova/bitnova.conf
    Data directory:      ~/Library/Application Support/BitNova
    Lock file:           ~/Library/Application Support/BitNova/.lock
>>>>>>> 5360f2baff (Initialized BitNova project)

Installing Service Configuration
-----------------------------------

### systemd

Installing this .service file consists of just copying it to
/usr/lib/systemd/system directory, followed by the command
`systemctl daemon-reload` in order to update running systemd configuration.

<<<<<<< HEAD
To test, run `systemctl start bitcoind` and to enable for system startup run
`systemctl enable bitcoind`
=======
To test, run `systemctl start bitnovad` and to enable for system startup run
`systemctl enable bitnovad`
>>>>>>> 5360f2baff (Initialized BitNova project)

NOTE: When installing for systemd in Debian/Ubuntu the .service file needs to be copied to the /lib/systemd/system directory instead.

### OpenRC

<<<<<<< HEAD
Rename bitcoind.openrc to bitcoind and drop it in /etc/init.d.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/bitcoind start` and configure it to run on startup with
`rc-update add bitcoind`
=======
Rename bitnovad.openrc to bitnovad and drop it in /etc/init.d.  Double
check ownership and permissions and make it executable.  Test it with
`/etc/init.d/bitnovad start` and configure it to run on startup with
`rc-update add bitnovad`
>>>>>>> 5360f2baff (Initialized BitNova project)

### Upstart (for Debian/Ubuntu based distributions)

Upstart is the default init system for Debian/Ubuntu versions older than 15.04. If you are using version 15.04 or newer and haven't manually configured upstart you should follow the systemd instructions instead.

<<<<<<< HEAD
Drop bitcoind.conf in /etc/init.  Test by running `service bitcoind start`
=======
Drop bitnovad.conf in /etc/init.  Test by running `service bitnovad start`
>>>>>>> 5360f2baff (Initialized BitNova project)
it will automatically start on reboot.

NOTE: This script is incompatible with CentOS 5 and Amazon Linux 2014 as they
use old versions of Upstart and do not supply the start-stop-daemon utility.

### CentOS

<<<<<<< HEAD
Copy bitcoind.init to /etc/init.d/bitcoind. Test by running `service bitcoind start`.

Using this script, you can adjust the path and flags to the bitcoind program by
setting the BITCOIND and FLAGS environment variables in the file
/etc/sysconfig/bitcoind. You can also use the DAEMONOPTS environment variable here.

### macOS

Copy org.bitcoin.bitcoind.plist into ~/Library/LaunchAgents. Load the launch agent by
running `launchctl load ~/Library/LaunchAgents/org.bitcoin.bitcoind.plist`.

This Launch Agent will cause bitcoind to start whenever the user logs in.

NOTE: This approach is intended for those wanting to run bitcoind as the current user.
You will need to modify org.bitcoin.bitcoind.plist if you intend to use it as a
Launch Daemon with a dedicated bitcoin user.
=======
Copy bitnovad.init to /etc/init.d/bitnovad. Test by running `service bitnovad start`.

Using this script, you can adjust the path and flags to the bitnovad program by
setting the BITCOIND and FLAGS environment variables in the file
/etc/sysconfig/bitnovad. You can also use the DAEMONOPTS environment variable here.

### macOS

Copy org.bitnova.bitnovad.plist into ~/Library/LaunchAgents. Load the launch agent by
running `launchctl load ~/Library/LaunchAgents/org.bitnova.bitnovad.plist`.

This Launch Agent will cause bitnovad to start whenever the user logs in.

NOTE: This approach is intended for those wanting to run bitnovad as the current user.
You will need to modify org.bitnova.bitnovad.plist if you intend to use it as a
Launch Daemon with a dedicated bitnova user.
>>>>>>> 5360f2baff (Initialized BitNova project)

Auto-respawn
-----------------------------------

Auto respawning is currently only configured for Upstart and systemd.
Reasonable defaults have been chosen but YMMV.
