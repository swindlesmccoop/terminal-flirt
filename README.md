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
Edit the `STRINGS` macro in [main.c](main.c)