## Have your terminal flirt with you

## Install
Run `sudo make install`.

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