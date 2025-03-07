# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoin-util --no-files

# Extract options
function __fish_bitcoin_util_get_options
=======
complete --command bitnova-util --no-files

# Extract options
function __fish_bitnova_util_get_options
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -opc)[1]
    set --local options

    set --append options ($cmd -help 2>&1 | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=')

    for option in $options
        echo $option
    end
end

# Extract commands
<<<<<<< HEAD
function __fish_bitcoin_util_get_commands
=======
function __fish_bitnova_util_get_commands
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -opc)[1]
    set --local commands

    set --append commands ($cmd -help | sed -e '1,/Commands:/d' -e 's/=/=\t/' -e 's/(=/=/' -e '/^  [a-z]/ p' -e d | string replace -r '\ \ ' '')
    for command in $commands
        echo $command
    end
end

# Add options
complete \
<<<<<<< HEAD
    --command bitcoin-util \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_util_get_commands)" \
    --arguments "(__fish_bitcoin_util_get_options)"

# Add commands
complete \
    --command bitcoin-util \
    --condition "not __fish_seen_subcommand_from (__fish_bitcoin_util_get_commands)" \
    --arguments "(__fish_bitcoin_util_get_commands)"
=======
    --command bitnova-util \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_util_get_commands)" \
    --arguments "(__fish_bitnova_util_get_options)"

# Add commands
complete \
    --command bitnova-util \
    --condition "not __fish_seen_subcommand_from (__fish_bitnova_util_get_commands)" \
    --arguments "(__fish_bitnova_util_get_commands)"
>>>>>>> 5360f2baff (Initialized BitNova project)

