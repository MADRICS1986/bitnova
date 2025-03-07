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
#include <interfaces/mining.h>
#include <interfaces/node.h>
#include <interfaces/wallet.h>
#include <node/context.h>
#include <util/check.h>

#include <memory>

namespace init {
namespace {
<<<<<<< HEAD
class BitcoinQtInit : public interfaces::Init
{
public:
    BitcoinQtInit()
=======
class BitNovaQtInit : public interfaces::Init
{
public:
    BitNovaQtInit()
>>>>>>> 5360f2baff (Initialized BitNova project)
    {
        InitContext(m_node);
        m_node.init = this;
    }
    std::unique_ptr<interfaces::Node> makeNode() override { return interfaces::MakeNode(m_node); }
    std::unique_ptr<interfaces::Chain> makeChain() override { return interfaces::MakeChain(m_node); }
    std::unique_ptr<interfaces::Mining> makeMining() override { return interfaces::MakeMining(m_node); }
    std::unique_ptr<interfaces::WalletLoader> makeWalletLoader(interfaces::Chain& chain) override
    {
        return MakeWalletLoader(chain, *Assert(m_node.args));
    }
    std::unique_ptr<interfaces::Echo> makeEcho() override { return interfaces::MakeEcho(); }
    node::NodeContext m_node;
};
} // namespace
} // namespace init

namespace interfaces {
std::unique_ptr<Init> MakeGuiInit(int argc, char* argv[])
{
<<<<<<< HEAD
    return std::make_unique<init::BitcoinQtInit>();
=======
    return std::make_unique<init::BitNovaQtInit>();
>>>>>>> 5360f2baff (Initialized BitNova project)
}
} // namespace interfaces
