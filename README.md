## Have your terminal flirt with you

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
preexec() {
    flirt
}
```
to your zshrc.

## Configuration
Edit `config.h` and uncomment the line with the girl type you want.

## Todo
- [ ] Add `config.h` option to enable/disable colors
