<<<<<<< HEAD
// Copyright (c) 2021-2022 The Bitcoin Core developers
=======
// Copyright (c) 2021-2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <init.h>
#include <interfaces/chain.h>
#include <interfaces/echo.h>
#include <interfaces/init.h>
#include <interfaces/ipc.h>
#include <interfaces/node.h>
#include <interfaces/wallet.h>
#include <node/context.h>
#include <util/check.h>

#include <memory>

namespace init {
namespace {
<<<<<<< HEAD
const char* EXE_NAME = "bitcoin-gui";

class BitcoinGuiInit : public interfaces::Init
{
public:
    BitcoinGuiInit(const char* arg0) : m_ipc(interfaces::MakeIpc(EXE_NAME, arg0, *this))
=======
const char* EXE_NAME = "bitnova-gui";

class BitNovaGuiInit : public interfaces::Init
{
public:
    BitNovaGuiInit(const char* arg0) : m_ipc(interfaces::MakeIpc(EXE_NAME, arg0, *this))
>>>>>>> 5360f2baff (Initialized BitNova project)
    {
        InitContext(m_node);
        m_node.init = this;
    }
    std::unique_ptr<interfaces::Node> makeNode() override { return interfaces::MakeNode(m_node); }
    std::unique_ptr<interfaces::Chain> makeChain() override { return interfaces::MakeChain(m_node); }
    std::unique_ptr<interfaces::WalletLoader> makeWalletLoader(interfaces::Chain& chain) override
    {
        return MakeWalletLoader(chain, *Assert(m_node.args));
    }
    std::unique_ptr<interfaces::Echo> makeEcho() override { return interfaces::MakeEcho(); }
    interfaces::Ipc* ipc() override { return m_ipc.get(); }
<<<<<<< HEAD
    // bitcoin-gui accepts -ipcbind option even though it does not use it
    // directly. It just returns true here to accept the option because
    // bitcoin-node accepts the option, and bitcoin-gui accepts all bitcoin-node
=======
    // bitnova-gui accepts -ipcbind option even though it does not use it
    // directly. It just returns true here to accept the option because
    // bitnova-node accepts the option, and bitnova-gui accepts all bitnova-node
>>>>>>> 5360f2baff (Initialized BitNova project)
    // options and will start the node with those options.
    bool canListenIpc() override { return true; }
    node::NodeContext m_node;
    std::unique_ptr<interfaces::Ipc> m_ipc;
};
} // namespace
} // namespace init

namespace interfaces {
std::unique_ptr<Init> MakeGuiInit(int argc, char* argv[])
{
<<<<<<< HEAD
    return std::make_unique<init::BitcoinGuiInit>(argc > 0 ? argv[0] : "");
=======
    return std::make_unique<init::BitNovaGuiInit>(argc > 0 ? argv[0] : "");
>>>>>>> 5360f2baff (Initialized BitNova project)
}
} // namespace interfaces
