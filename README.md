# Have your terminal flirt with you

## Configuration
Edit `config.h` and uncomment the line with the girl type you want. You can also disable colors by commenting out the `COLORIZE` definition.

## Install
```
make
sudo make install
```

### Bash
Add
```bash
trap flirt DEBUG
```
to your bashrc.

### Zsh
Add
```zsh
preexec() {flirt;}
```
to your zshrc.

### Fish
Write a function using `fish_preexec`:
```fish
function precmd_flirt --on-event fish_preexec
    flirt;
end
```
and then save it for future sessions:
```fish
funcsave precmd_flirt
```

## Todo
- [x] Add `config.h` option to enable/disable colors
  - Done by [@Kusoneko](https://github.com/Kusoneko)
- [ ] Add way to enable multiple archetypes at once
- [ ] Add more strings
