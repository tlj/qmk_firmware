COMBO_ENABLE = yes
MOUSEKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

INTROSPECTION_KEYMAP_C = keymaps.c # keymaps
SRC += tlj.c

ifdef OLED_ENABLE
  SRC += extras/oled.c
endif
