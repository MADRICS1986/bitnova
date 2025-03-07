Expectations for DNS Seed operators
====================================

<<<<<<< HEAD
Bitcoin Core attempts to minimize the level of trust in DNS seeds,
but DNS seeds still pose a small amount of risk for the network.
As such, DNS seeds must be run by entities which have some minimum
level of trust within the Bitcoin community.

Other implementations of Bitcoin software may also use the same
=======
BitNova Core attempts to minimize the level of trust in DNS seeds,
but DNS seeds still pose a small amount of risk for the network.
As such, DNS seeds must be run by entities which have some minimum
level of trust within the BitNova community.

Other implementations of BitNova software may also use the same
>>>>>>> 5360f2baff (Initialized BitNova project)
seeds and may be more exposed. In light of this exposure, this
document establishes some basic expectations for operating dnsseeds.

0. A DNS seed operating organization or person is expected to follow good
host security practices, maintain control of applicable infrastructure,
and not sell or transfer control of the DNS seed. Any hosting services
contracted by the operator are equally expected to uphold these expectations.

1. The DNS seed results must consist exclusively of fairly selected and
<<<<<<< HEAD
functioning Bitcoin nodes from the public network to the best of the
=======
functioning BitNova nodes from the public network to the best of the
>>>>>>> 5360f2baff (Initialized BitNova project)
operator's understanding and capability.

2. For the avoidance of doubt, the results may be randomized but must not
single-out any group of hosts to receive different results unless due to an
urgent technical necessity and disclosed.

3. The results may not be served with a DNS TTL of less than one minute.

4. Any logging of DNS queries should be only that which is necessary
<<<<<<< HEAD
for the operation of the service or urgent health of the Bitcoin
=======
for the operation of the service or urgent health of the BitNova
>>>>>>> 5360f2baff (Initialized BitNova project)
network and must not be retained longer than necessary nor disclosed
to any third party.

5. Information gathered as a result of the operators node-spidering
(not from DNS queries) may be freely published or retained, but only
if this data was not made more complete by biasing node connectivity
(a violation of expectation (1)).

6. Operators are encouraged, but not required, to publicly document the
details of their operating practices.

7. A reachable email contact address must be published for inquiries
related to the DNS seed operation.

If these expectations cannot be satisfied the operator should
<<<<<<< HEAD
discontinue providing services and contact the active Bitcoin
Core development team as well as posting on
[bitcoin-dev](https://groups.google.com/g/bitcoindev).
=======
discontinue providing services and contact the active BitNova
Core development team as well as posting on
[bitnova-dev](https://groups.google.com/g/bitnovadev).
>>>>>>> 5360f2baff (Initialized BitNova project)

Behavior outside of these expectations may be reasonable in some
situations but should be discussed in public in advance.

See also
----------
<<<<<<< HEAD
- [bitcoin-seeder](https://github.com/sipa/bitcoin-seeder) is a reference implementation of a DNS seed.
=======
- [bitnova-seeder](https://github.com/sipa/bitnova-seeder) is a reference implementation of a DNS seed.
>>>>>>> 5360f2baff (Initialized BitNova project)
