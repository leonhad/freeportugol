TEMPLATE = subdirs
CONFIG   += ordered

SUBDIRS = src doc

# for Qt Creator translations
FPT_BUILD_ROOT = $$PWD
FPT_INSTALL_TRANSLATIONS = $$PWD/translations

include(translations/translations.pri)
translations.path = $$FPT_INSTALL_TRANSLATIONS
translations.files = $$FPT_INSTALL_TRANSLATIONS/*.qm
