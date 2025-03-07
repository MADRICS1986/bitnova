<<<<<<< HEAD
// Copyright (c) 2018-2020 The Bitcoin Core developers
=======
// Copyright (c) 2018-2020 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_TEST_APPTESTS_H
#define BITCOIN_QT_TEST_APPTESTS_H

#include <QObject>
#include <set>
#include <string>
#include <utility>

<<<<<<< HEAD
class BitcoinApplication;
class BitcoinGUI;
=======
class BitNovaApplication;
class BitNovaGUI;
>>>>>>> 5360f2baff (Initialized BitNova project)
class RPCConsole;

class AppTests : public QObject
{
    Q_OBJECT
public:
<<<<<<< HEAD
    explicit AppTests(BitcoinApplication& app) : m_app(app) {}

private Q_SLOTS:
    void appTests();
    void guiTests(BitcoinGUI* window);
=======
    explicit AppTests(BitNovaApplication& app) : m_app(app) {}

private Q_SLOTS:
    void appTests();
    void guiTests(BitNovaGUI* window);
>>>>>>> 5360f2baff (Initialized BitNova project)
    void consoleTests(RPCConsole* console);

private:
    //! Add expected callback name to list of pending callbacks.
    void expectCallback(std::string callback) { m_callbacks.emplace(std::move(callback)); }

    //! RAII helper to remove no-longer-pending callback.
    struct HandleCallback
    {
        std::string m_callback;
        AppTests& m_app_tests;
        ~HandleCallback();
    };

<<<<<<< HEAD
    //! Bitcoin application.
    BitcoinApplication& m_app;
=======
    //! BitNova application.
    BitNovaApplication& m_app;
>>>>>>> 5360f2baff (Initialized BitNova project)

    //! Set of pending callback names. Used to track expected callbacks and shut
    //! down the app after the last callback has been handled and all tests have
    //! either run or thrown exceptions. This could be a simple int counter
    //! instead of a set of names, but the names might be useful for debugging.
    std::multiset<std::string> m_callbacks;
};

#endif // BITCOIN_QT_TEST_APPTESTS_H
