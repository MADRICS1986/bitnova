#!/usr/bin/env python3
<<<<<<< HEAD
# Copyright (c) 2016-2019 The Bitcoin Core developers
=======
# Copyright (c) 2016-2019 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
"""Create a blockchain cache.

Creating a cache of the blockchain speeds up test execution when running
multiple functional tests. This helper script is executed by test_runner when multiple
tests are being run in parallel.
"""

<<<<<<< HEAD
from test_framework.test_framework import BitcoinTestFramework

class CreateCache(BitcoinTestFramework):
=======
from test_framework.test_framework import BitNovaTestFramework

class CreateCache(BitNovaTestFramework):
>>>>>>> 5360f2baff (Initialized BitNova project)
    # Test network and test nodes are not required:

    def set_test_params(self):
        self.num_nodes = 0

    def setup_network(self):
        pass

    def run_test(self):
        pass

if __name__ == '__main__':
    CreateCache(__file__).main()
