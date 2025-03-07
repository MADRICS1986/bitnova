### QoS (Quality of service) ###

<<<<<<< HEAD
This is a Linux bash script that will set up tc to limit the outgoing bandwidth for connections to the Bitcoin network. It limits outbound TCP traffic with a source or destination port of 8333, but not if the destination IP is within a LAN.

This means one can have an always-on bitcoind instance running, and another local bitcoind/bitcoin-qt instance which connects to this node and receives blocks from it.
=======
This is a Linux bash script that will set up tc to limit the outgoing bandwidth for connections to the BitNova network. It limits outbound TCP traffic with a source or destination port of 8333, but not if the destination IP is within a LAN.

This means one can have an always-on bitnovad instance running, and another local bitnovad/bitnova-qt instance which connects to this node and receives blocks from it.
>>>>>>> 5360f2baff (Initialized BitNova project)
