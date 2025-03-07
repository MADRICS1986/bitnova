# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoind --no-files

# Extract options
function __fish_bitcoind_get_options
=======
complete --command bitnovad --no-files

# Extract options
function __fish_bitnovad_get_options
>>>>>>> 5360f2baff (Initialized BitNova project)
    argparse 'nofiles' -- $argv
    set --local cmd (commandline -opc)[1]
    set --local options

    if set -q _flag_nofiles
        set --append options ($cmd -help-debug | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=' | string match --invert -r '^.*=$')
    else
        set --append options ($cmd -help-debug | string match -r '^  -.*' | string replace -r '  -' '-' | string replace -r '=.*' '=' | string match -r '^.*=$')
    end

    for option in $options
        echo $option
    end
end


# Add options with file completion
complete \
<<<<<<< HEAD
    --command bitcoind \
    --arguments "(__fish_bitcoind_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete --command bitcoind \
=======
    --command bitnovad \
    --arguments "(__fish_bitnovad_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete --command bitnovad \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --condition 'string match --regex -- ".*=" (commandline -pt)' \
    --force-files

# Add options without file completion
complete \
<<<<<<< HEAD
    --command bitcoind \
    --arguments "(__fish_bitcoind_get_options --nofiles)"
=======
    --command bitnovad \
    --arguments "(__fish_bitnovad_get_options --nofiles)"
>>>>>>> 5360f2baff (Initialized BitNova project)

