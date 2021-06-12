export LS_OPTIONS='--color=auto'
export GEM_HOME=/usr/local/bundle
export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
eval "`dircolors`"
alias ls='ls $LS_OPTIONS'
alias ll='ls $LS_OPTIONS -l'
alias l='ls $LS_OPTIONS -lA'
alias basecamp='bash ${HOME}/.basecamp/basecamp'

alias normgccrun='norminette -R CheckForbiddenSourceHeader && gcc -Wall -Wextra -Werror *.c && ./a.out'
alias norm='norminette -R CheckForbiddenSourceHeader'
alias norm-ft='norm $(find . -type f -name "ft_*.c")'
alias gccpar='gcc -Wall -Wextra -Werror *.c'
alias a='./a.out'
alias clean-git='find -depth -mindepth 2 -type d,f -name ".git*" -exec rm -rf {} \;'
alias ls-ft='find  -type f -name "ft_*.c" -print'

export http_proxy=10.3.147.01:3128
export https_proxy=10.3.147.01:3128
