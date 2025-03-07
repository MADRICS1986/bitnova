<<<<<<< HEAD
// Copyright (c) 2023 Bitcoin Developers
=======
// Copyright (c) 2023 BitNova Developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "nontrivial-threadlocal.h"

#include <clang-tidy/ClangTidyModule.h>
#include <clang-tidy/ClangTidyModuleRegistry.h>

<<<<<<< HEAD
class BitcoinModule final : public clang::tidy::ClangTidyModule
=======
class BitNovaModule final : public clang::tidy::ClangTidyModule
>>>>>>> 5360f2baff (Initialized BitNova project)
{
public:
    void addCheckFactories(clang::tidy::ClangTidyCheckFactories& CheckFactories) override
    {
<<<<<<< HEAD
        CheckFactories.registerCheck<bitcoin::NonTrivialThreadLocal>("bitcoin-nontrivial-threadlocal");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<BitcoinModule>
    X("bitcoin-module", "Adds bitcoin checks.");

volatile int BitcoinModuleAnchorSource = 0;
=======
        CheckFactories.registerCheck<bitnova::NonTrivialThreadLocal>("bitnova-nontrivial-threadlocal");
    }
};

static clang::tidy::ClangTidyModuleRegistry::Add<BitNovaModule>
    X("bitnova-module", "Adds bitnova checks.");

volatile int BitNovaModuleAnchorSource = 0;
>>>>>>> 5360f2baff (Initialized BitNova project)
