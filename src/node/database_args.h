<<<<<<< HEAD
// Copyright (c) 2022 The Bitcoin Core developers
=======
// Copyright (c) 2022 The BitNova Core developers
>>>>>>> 5360f2baff (Initialized BitNova project)
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_NODE_DATABASE_ARGS_H
#define BITCOIN_NODE_DATABASE_ARGS_H

class ArgsManager;
struct DBOptions;

namespace node {
void ReadDatabaseArgs(const ArgsManager& args, DBOptions& options);
} // namespace node

#endif // BITCOIN_NODE_DATABASE_ARGS_H
