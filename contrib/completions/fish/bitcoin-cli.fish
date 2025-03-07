# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoin-cli --no-files

function __fish_bitcoin_cli_get_commands_helper
=======
complete --command bitnova-cli --no-files

function __fish_bitnova_cli_get_commands_helper
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -oc)

    # Don't return commands if '-help or -?' in commandline
    if string match --quiet --regex -- '^-help$|^-\?$' $cmd
        return
    end

    # Strip help cmd from token to avoid duplication errors
    set --local cmd (string match --invert --regex -- '^help$' $cmd)
    # Strip -stdin* options to avoid waiting for input while we fetch completions
    # TODO: this appears to be broken when run as tab completion (requires ctrl+c to exit)
    set --local cmd (string match --invert --regex -- '^-stdin.*$' $cmd)

    # Match, format and return commands
    for command in ($cmd help 2>&1 | string match --invert -r '^\=\=.*' | string match --invert -r '^\\s*$')
        echo $command
    end
end

<<<<<<< HEAD
function __fish_bitcoin_cli_get_commands
=======
function __fish_bitnova_cli_get_commands
>>>>>>> 5360f2baff (Initialized BitNova project)
    argparse 'nohelp' 'commandsonly' -- $argv
    set --local commands

    # Exclude description, exclude help
    if set -q _flag_nohelp; and set -q _flag_commandsonly
<<<<<<< HEAD
        set --append commands (__fish_bitcoin_cli_get_commands_helper | string replace -r ' .*$' '' | string match --invert -r 'help')
    # Include description, exclude help
    else if set -q _flag_nohelp
        set --append commands (__fish_bitcoin_cli_get_commands_helper | string replace ' ' \t | string match --invert -r 'help')
    # Exclude description, include help
    else if set -q _flag_commandsonly
        set --append commands (__fish_bitcoin_cli_get_commands_helper | string replace -r ' .*$' '')
    # Include description, include help
    else
        set --append commands (__fish_bitcoin_cli_get_commands_helper | string replace ' ' \t)
=======
        set --append commands (__fish_bitnova_cli_get_commands_helper | string replace -r ' .*$' '' | string match --invert -r 'help')
    # Include description, exclude help
    else if set -q _flag_nohelp
        set --append commands (__fish_bitnova_cli_get_commands_helper | string replace ' ' \t | string match --invert -r 'help')
    # Exclude description, include help
    else if set -q _flag_commandsonly
        set --append commands (__fish_bitnova_cli_get_commands_helper | string replace -r ' .*$' '')
    # Include description, include help
    else
        set --append commands (__fish_bitnova_cli_get_commands_helper | string replace ' ' \t)
>>>>>>> 5360f2baff (Initialized BitNova project)
    end

    if string match -q -r '^.*error.*$' $commands[1]
        # RPC offline or RPC wallet not loaded
        return
    else
        for command in $commands
            echo $command
        end
    end
end


<<<<<<< HEAD
function __fish_bitcoin_cli_get_options
=======
function __fish_bitnova_cli_get_options
>>>>>>> 5360f2baff (Initialized BitNova project)
    argparse 'nofiles' -- $argv
    set --local cmd (commandline -oc)
    # Don't return options if '-help or -?' in commandline
    if string match --quiet --regex -- '^-help$|-\?$' $cmd
        return
    end
    set --local options

    if set -q _flag_nofiles
        set --append options ($cmd -help 2>&1 | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=' | string match --invert -r '^.*=$')
    else
        set --append options ($cmd -help 2>&1 | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=' | string match -r '^.*=$')
    end

    for option in $options
        echo $option
    end
end

# Add options with file completion
# Don't offer after a command is given
complete \
<<<<<<< HEAD
    --command bitcoin-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_cli_get_commands --commandsonly)" \
    --arguments "(__fish_bitcoin_cli_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete --command bitcoin-cli \
=======
    --command bitnova-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_cli_get_commands --commandsonly)" \
    --arguments "(__fish_bitnova_cli_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete --command bitnova-cli \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --condition 'string match --regex -- ".*=" (commandline -pt)' \
    --force-files

# Add options without file completion
# Don't offer after a command is given
complete \
<<<<<<< HEAD
    --command bitcoin-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_cli_get_commands --commandsonly)" \
    --arguments "(__fish_bitcoin_cli_get_options --nofiles)"

# Add commands
# Permit command completions after `bitcoin-cli help` but not after other commands
complete \
    --command bitcoin-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_cli_get_commands --commandsonly --nohelp)" \
    --arguments "(__fish_bitcoin_cli_get_commands)"
=======
    --command bitnova-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_cli_get_commands --commandsonly)" \
    --arguments "(__fish_bitnova_cli_get_options --nofiles)"

# Add commands
# Permit command completions after `bitnova-cli help` but not after other commands
complete \
    --command bitnova-cli \
    --no-files \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_cli_get_commands --commandsonly --nohelp)" \
    --arguments "(__fish_bitnova_cli_get_commands)"
>>>>>>> 5360f2baff (Initialized BitNova project)
