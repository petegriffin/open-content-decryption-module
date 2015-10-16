# Build notes for Chromium

Chromium supports three types of CDMs:

* Internal from source (Clear Key, which is implemented internally by aes_decryptor.cc)
* Pepper-based CDMs (used for desktop and Chrome OS)
* Platform-based (e.g. Android using MediaDrm APIs)

Source: [David Dorwin, Feb 2014](https://groups.google.com/a/chromium.org/d/msg/chromium-dev/exotX6Nf_z0/UtMi4a2sLncJ)

## Pepper Plugin API (PPAPI) integration notes

*Tested with version:*

45.0.2454.85
