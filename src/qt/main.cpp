<<<<<<< HEAD
// Copyright (c) 2018-2022 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitcoin.h>
=======
// Copyright (c) 2018-2022 The BitNova Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/bitnova.h>
>>>>>>> 5360f2baff (Initialized BitNova project)

#include <compat/compat.h>
#include <util/translation.h>

#include <QCoreApplication>

#include <functional>
#include <string>

/** Translate string to current locale using Qt. */
extern const TranslateFn G_TRANSLATION_FUN = [](const char* psz) {
<<<<<<< HEAD
    return QCoreApplication::translate("bitcoin-core", psz).toStdString();
=======
    return QCoreApplication::translate("bitnova-core", psz).toStdString();
>>>>>>> 5360f2baff (Initialized BitNova project)
};

const std::function<std::string()> G_TEST_GET_FULL_NAME{};

MAIN_FUNCTION
{
    return GuiMain(argc, argv);
}
