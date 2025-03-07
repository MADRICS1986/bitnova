#!/usr/bin/env python3
<<<<<<< HEAD
# Copyright (c) 2019-2022 The Bitcoin Core developers
=======
# Copyright (c) 2019-2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
import pathlib

<<<<<<< HEAD
from test_framework.test_framework import BitcoinTestFramework


class TestShell:
    """Wrapper Class for BitcoinTestFramework.

    The TestShell class extends the BitcoinTestFramework
=======
from test_framework.test_framework import BitNovaTestFramework


class TestShell:
    """Wrapper Class for BitNovaTestFramework.

    The TestShell class extends the BitNovaTestFramework
>>>>>>> 5360f2baff (Initialized BitNova project)
    rpc & daemon process management functionality to external
    python environments.

    It is a singleton class, which ensures that users only
    start a single TestShell at a time."""

<<<<<<< HEAD
    class __TestShell(BitcoinTestFramework):
=======
    class __TestShell(BitNovaTestFramework):
>>>>>>> 5360f2baff (Initialized BitNova project)
        def add_options(self, parser):
            self.add_wallet_options(parser)

        def set_test_params(self):
            pass

        def run_test(self):
            pass

        def setup(self, **kwargs):
            if self.running:
                print("TestShell is already running!")
                return

            # Num_nodes parameter must be set
<<<<<<< HEAD
            # by BitcoinTestFramework child class.
=======
            # by BitNovaTestFramework child class.
>>>>>>> 5360f2baff (Initialized BitNova project)
            self.num_nodes = 1

            # User parameters override default values.
            for key, value in kwargs.items():
                if hasattr(self, key):
                    setattr(self, key, value)
                elif hasattr(self.options, key):
                    setattr(self.options, key, value)
                else:
                    raise KeyError(key + " not a valid parameter key!")

            super().setup()
            self.running = True
            return self

        def shutdown(self):
            if not self.running:
                print("TestShell is not running!")
            else:
                super().shutdown()
                self.running = False

        def reset(self):
            if self.running:
                print("Shutdown TestShell before resetting!")
            else:
                self.num_nodes = None
                dummy_testshell_file = pathlib.Path(__file__).absolute().parent.parent / "testshell_dummy.py"
                super().__init__(dummy_testshell_file)

    instance = None

    def __new__(cls):
        # This implementation enforces singleton pattern, and will return the
        # previously initialized instance if available
        if not TestShell.instance:
<<<<<<< HEAD
            # BitcoinTestFramework instances are supposed to be constructed with the path
=======
            # BitNovaTestFramework instances are supposed to be constructed with the path
>>>>>>> 5360f2baff (Initialized BitNova project)
            # of the calling test in order to find shared data like configuration and the
            # cache. Since TestShell is meant for interactive use, there is no concrete
            # test; passing a dummy name is fine though, as only the containing directory
            # is relevant for successful initialization.
            dummy_testshell_file = pathlib.Path(__file__).absolute().parent.parent / "testshell_dummy.py"
            TestShell.instance = TestShell.__TestShell(dummy_testshell_file)
            TestShell.instance.running = False
        return TestShell.instance

    def __getattr__(self, name):
        return getattr(self.instance, name)

    def __setattr__(self, name, value):
        return setattr(self.instance, name, value)
