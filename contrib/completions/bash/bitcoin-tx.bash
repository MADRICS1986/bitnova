<<<<<<< HEAD
# bash programmable completion for bitcoin-tx(1)
# Copyright (c) 2016-2022 The Bitcoin Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

_bitcoin_tx() {
    local cur prev words=() cword
    local bitcoin_tx

    # save and use original argument to invoke bitcoin-tx for -help
    # it might not be in $PATH
    bitcoin_tx="$1"
=======
# bash programmable completion for bitnova-tx(1)
# Copyright (c) 2016-2022 The BitNova Core developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.

_bitnova_tx() {
    local cur prev words=() cword
    local bitnova_tx

    # save and use original argument to invoke bitnova-tx for -help
    # it might not be in $PATH
    bitnova_tx="$1"
>>>>>>> 5360f2baff (Initialized BitNova project)

    COMPREPLY=()
    _get_comp_words_by_ref -n =: cur prev words cword

    case "$cur" in
        load=*:*)
            cur="${cur#load=*:}"
            _filedir
            return 0
            ;;
        *=*)	# prevent attempts to complete other arguments
            return 0
            ;;
    esac

    if [[ "$cword" == 1 || ( "$prev" != "-create" && "$prev" == -* ) ]]; then
        # only options (or an uncompletable hex-string) allowed
<<<<<<< HEAD
        # parse bitcoin-tx -help for options
        local helpopts
        helpopts=$($bitcoin_tx -help | sed -e '/^  -/ p' -e d )
=======
        # parse bitnova-tx -help for options
        local helpopts
        helpopts=$($bitnova_tx -help | sed -e '/^  -/ p' -e d )
>>>>>>> 5360f2baff (Initialized BitNova project)
        COMPREPLY=( $( compgen -W "$helpopts" -- "$cur" ) )
    else
        # only commands are allowed
        # parse -help for commands
        local helpcmds
<<<<<<< HEAD
        helpcmds=$($bitcoin_tx -help | sed -e '1,/Commands:/d' -e 's/=.*/=/' -e '/^  [a-z]/ p' -e d )
=======
        helpcmds=$($bitnova_tx -help | sed -e '1,/Commands:/d' -e 's/=.*/=/' -e '/^  [a-z]/ p' -e d )
>>>>>>> 5360f2baff (Initialized BitNova project)
        COMPREPLY=( $( compgen -W "$helpcmds" -- "$cur" ) )
    fi

    # Prevent space if an argument is desired
    if [[ $COMPREPLY == *= ]]; then
        compopt -o nospace
    fi

    return 0
} &&
<<<<<<< HEAD
complete -F _bitcoin_tx bitcoin-tx
=======
complete -F _bitnova_tx bitnova-tx
>>>>>>> 5360f2baff (Initialized BitNova project)

# Local variables:
# mode: shell-script
# sh-basic-offset: 4
# sh-indent-comment: t
# indent-tabs-mode: nil
# End:
# ex: ts=4 sw=4 et filetype=sh
