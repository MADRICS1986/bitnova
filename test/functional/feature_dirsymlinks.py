#!/usr/bin/env python3
<<<<<<< HEAD
# Copyright (c) 2022 The Bitcoin Core developers
=======
# Copyright (c) 2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
"""Test successful startup with symlinked directories.
"""

import os

<<<<<<< HEAD
from test_framework.test_framework import BitcoinTestFramework
=======
from test_framework.test_framework import BitNovaTestFramework
>>>>>>> 5360f2baff (Initialized BitNova project)


def rename_and_link(*, from_name, to_name):
    os.rename(from_name, to_name)
    os.symlink(to_name, from_name)
    assert os.path.islink(from_name) and os.path.isdir(from_name)


<<<<<<< HEAD
class SymlinkTest(BitcoinTestFramework):
=======
class SymlinkTest(BitNovaTestFramework):
>>>>>>> 5360f2baff (Initialized BitNova project)
    def set_test_params(self):
        self.num_nodes = 1

    def run_test(self):
        dir_new_blocks = self.nodes[0].chain_path / "new_blocks"
        dir_new_chainstate = self.nodes[0].chain_path / "new_chainstate"
        self.stop_node(0)

        rename_and_link(
            from_name=self.nodes[0].blocks_path,
            to_name=dir_new_blocks,
        )
        rename_and_link(
            from_name=self.nodes[0].chain_path / "chainstate",
            to_name=dir_new_chainstate,
        )

        self.start_node(0)


if __name__ == "__main__":
    SymlinkTest(__file__).main()
