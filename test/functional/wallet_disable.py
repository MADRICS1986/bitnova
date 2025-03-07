#!/usr/bin/env python3
<<<<<<< HEAD
# Copyright (c) 2015-2022 The Bitcoin Core developers
=======
# Copyright (c) 2015-2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
"""Test a node with the -disablewallet option.

- Test that validateaddress RPC works when running with -disablewallet
- Test that it is not possible to mine to an invalid address.
"""

<<<<<<< HEAD
from test_framework.test_framework import BitcoinTestFramework
from test_framework.util import assert_raises_rpc_error

class DisableWalletTest (BitcoinTestFramework):
=======
from test_framework.test_framework import BitNovaTestFramework
from test_framework.util import assert_raises_rpc_error

class DisableWalletTest (BitNovaTestFramework):
>>>>>>> 5360f2baff (Initialized BitNova project)
    def set_test_params(self):
        self.setup_clean_chain = True
        self.num_nodes = 1
        self.extra_args = [["-disablewallet"]]
        self.wallet_names = []

    def run_test (self):
        # Make sure wallet is really disabled
        assert_raises_rpc_error(-32601, 'Method not found', self.nodes[0].getwalletinfo)
        x = self.nodes[0].validateaddress('3J98t1WpEZ73CNmQviecrnyiWrnqRhWNLy')
        assert x['isvalid'] == False
        x = self.nodes[0].validateaddress('mneYUmWYsuk7kySiURxCi3AGxrAqZxLgPZ')
        assert x['isvalid'] == True


if __name__ == '__main__':
    DisableWalletTest(__file__).main()
