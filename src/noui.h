<<<<<<< HEAD
// Copyright (c) 2013-2020 The Bitcoin Core developers
=======
// Copyright (c) 2013-2020 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_NOUI_H
#define BITCOIN_NOUI_H

#include <string>

struct bilingual_str;

/** Non-GUI handler, which logs and prints messages. */
bool noui_ThreadSafeMessageBox(const bilingual_str& message, const std::string& caption, unsigned int style);
/** Non-GUI handler, which logs and prints questions. */
bool noui_ThreadSafeQuestion(const bilingual_str& /* ignored interactive message */, const std::string& message, const std::string& caption, unsigned int style);
/** Non-GUI handler, which only logs a message. */
void noui_InitMessage(const std::string& message);

<<<<<<< HEAD
/** Connect all bitcoind signal handlers */
void noui_connect();

/** Redirect all bitcoind signal handlers to LogPrintf. Used to check or suppress output during test runs that produce expected errors */
=======
/** Connect all bitnovad signal handlers */
void noui_connect();

/** Redirect all bitnovad signal handlers to LogPrintf. Used to check or suppress output during test runs that produce expected errors */
>>>>>>> 5360f2baff (Initialized BitNova project)
void noui_test_redirect();

/** Reconnects the regular Non-GUI handlers after having used noui_test_redirect */
void noui_reconnect();

#endif // BITCOIN_NOUI_H
