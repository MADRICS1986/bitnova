# Disable files from being included in completions by default
<<<<<<< HEAD
complete --command bitcoin-qt --no-files

# Extract options
function __fish_bitcoinqt_get_options
=======
complete --command bitnova-qt --no-files

# Extract options
function __fish_bitnovaqt_get_options
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
    --command bitcoin-qt \
    --arguments "(__fish_bitcoinqt_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete -c bitcoin-qt \
=======
    --command bitnova-qt \
    --arguments "(__fish_bitnovaqt_get_options)"
# Enable file completions only if the commandline now contains a `*.=` style option
complete -c bitnova-qt \
>>>>>>> 5360f2baff (Initialized BitNova project)
    --condition 'string match --regex -- ".*=" (commandline -pt)' \
    --force-files

# Add options without file completion
complete \
<<<<<<< HEAD
    --command bitcoin-qt \
    --arguments "(__fish_bitcoinqt_get_options --nofiles)"
=======
    --command bitnova-qt \
    --arguments "(__fish_bitnovaqt_get_options --nofiles)"
>>>>>>> 5360f2baff (Initialized BitNova project)

