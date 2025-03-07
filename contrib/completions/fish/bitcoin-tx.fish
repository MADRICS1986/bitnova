# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoin-tx --no-files

# Modified version of __fish_seen_subcommand_from
# Uses regex to detect cmd= syntax
function __fish_bitcoin_seen_cmd
=======
complete --command bitnova-tx --no-files

# Modified version of __fish_seen_subcommand_from
# Uses regex to detect cmd= syntax
function __fish_bitnova_seen_cmd
>>>>>>> 5360f2baff (Initialized BitNova project)
    set -l cmd (commandline -oc)
    set -e cmd[1]
    for i in $cmd
        for j in $argv
            if string match --quiet --regex -- "^$j.*" $i
                return 0
            end
        end
    end
    return 1
end

# Extract options
<<<<<<< HEAD
function __fish_bitcoin_tx_get_options
=======
function __fish_bitnova_tx_get_options
>>>>>>> 5360f2baff (Initialized BitNova project)
    set --local cmd (commandline -oc)[1]
    if string match --quiet --regex -- '^-help$|-\?$' $cmd
        return
    end

    for option in ($cmd -help 2>&1 | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=')
        echo $option
    end
end

# Extract commands
<<<<<<< HEAD
function __fish_bitcoin_tx_get_commands
=======
function __fish_bitnova_tx_get_commands
>>>>>>> 5360f2baff (Initialized BitNova project)
    argparse 'commandsonly' -- $argv
    set --local cmd (commandline -oc)[1]
    set --local commands

    if set -q _flag_commandsonly
        set --append commands ($cmd -help | sed -e '1,/Commands:/d' -e 's/=/=\t/' -e 's/(=/=/' -e '/^  [a-z]/ p' -e d | string replace -r '\ \ ' '' | string replace -r '=.*' '')
    else
        set --append commands ($cmd -help | sed -e '1,/Commands:/d' -e 's/=/=\t/' -e 's/(=/=/' -e '/^  [a-z]/ p' -e d | string replace -r '\ \ ' '')
    end

    for command in $commands
        echo $command
    end
end

# Add options
complete \
<<<<<<< HEAD
    --command bitcoin-tx \
    --condition "not __fish_bitcoin_seen_cmd (__fish_bitcoin_tx_get_commands --commandsonly)" \
    --arguments "(__fish_bitcoin_tx_get_options)" \
=======
    --command bitnova-tx \
    --condition "not __fish_bitnova_seen_cmd (__fish_bitnova_tx_get_commands --commandsonly)" \
    --arguments "(__fish_bitnova_tx_get_options)" \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --no-files

# Add commands
complete \
<<<<<<< HEAD
    --command bitcoin-tx \
    --arguments "(__fish_bitcoin_tx_get_commands)" \
=======
    --command bitnova-tx \
    --arguments "(__fish_bitnova_tx_get_commands)" \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --no-files

# Add file completions for load and set commands
complete \
<<<<<<< HEAD
    --command bitcoin-tx \
=======
    --command bitnova-tx \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --condition 'string match --regex -- "(load|set)=" (commandline -pt)' \
    --force-files
