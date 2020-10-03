#
# Copyright (C) 2019 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Inherit from hotdog device
$(call inherit-product, device/oneplus/hotdog/device.mk)

# Inherit some common Lineage stuff.
$(call inherit-product, vendor/revengeos/config/common.mk)

# Device identifier. This must come after all inclusions.
PRODUCT_NAME := revengeos_hotdog
PRODUCT_DEVICE := hotdog
PRODUCT_BRAND := OnePlus
PRODUCT_MODEL := HD1910
PRODUCT_MANUFACTURER := OnePlus

PRODUCT_AAPT_CONFIG := xxxhdpi
PRODUCT_AAPT_PREF_CONFIG := xxxhdpi
PRODUCT_CHARACTERISTICS := nosdcard

# Boot animation
#TARGET_SCREEN_HEIGHT := 3120
TARGET_BOOT_ANIMATION_RES := 1440

# Build info
BUILD_FINGERPRINT := "OnePlus/OnePlus7TPro/OnePlus7TPro:10/QKQ1.190716.003/1909110008:user/release-keys"
PRODUCT_BUILD_PROP_OVERRIDES += \
    PRODUCT_DEVICE=OnePlus7TPro \
    PRODUCT_NAME=OnePlus7TPro \
    PRIVATE_BUILD_DESC="OnePlus7TPro-user 10 QKQ1.190716.003 1909110008 release-keys"

PRODUCT_GMS_CLIENTID_BASE := android-oneplus

# Gapps
$(call inherit-product-if-exists, vendor/gms/common/common-vendor.mk)
