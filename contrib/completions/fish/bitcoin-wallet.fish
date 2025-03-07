# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoin-wallet --no-files

# Extract options
function __fish_bitcoin_wallet_get_options
=======
complete --command bitnova-wallet --no-files

# Extract options
function __fish_bitnova_wallet_get_options
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -opc)[1]
    for option in ($cmd -help 2>&1 | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=')
        echo $option
    end
end

# Extract commands
<<<<<<< HEAD
function __fish_bitcoin_wallet_get_commands
=======
function __fish_bitnova_wallet_get_commands
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -opc)[1]
    for command in ($cmd -help | sed -e '1,/Commands:/d' -e 's/=/=\t/' -e 's/(=/=/' -e '/^  [a-z]/ p' -e d | string replace -r '\ \ ' '')
        echo $command
    end
end

# Add options
complete \
<<<<<<< HEAD
    --command bitcoin-wallet \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_wallet_get_commands)" \
    --arguments "(__fish_bitcoin_wallet_get_options)"

# Add commands
complete \
    --command bitcoin-wallet \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_wallet_get_commands)" \
    --arguments "(__fish_bitcoin_wallet_get_commands)"

# Add file completions for load and set commands
complete --command bitcoin-wallet \
=======
    --command bitnova-wallet \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_wallet_get_commands)" \
    --arguments "(__fish_bitnova_wallet_get_options)"

# Add commands
complete \
    --command bitnova-wallet \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_wallet_get_commands)" \
    --arguments "(__fish_bitnova_wallet_get_commands)"

# Add file completions for load and set commands
complete --command bitnova-wallet \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --condition "string match -r -- '(dumpfile|datadir)*=' (commandline -pt)" \
    --force-files
