//
// Created by Jino on 2021/07/14.
//

#pragma once

#include <iostream>
#include <string>
#include <tuple>
#include "utctime.h"

enum class ImageType{
    FullDome = 1,
    EastAsia = 2
};

enum class Color{
    True = 1,
    Natural = 2
};

std::string url_generator_chollian(const ImageType &imageType,
                                   const Color &color,
                                   const UTCTime &date);

std::string image_downloader(const std::string &url);

std::string generate_filename(const UTCTime &time,
                              Color color,
                              ImageType img_type,
                              int width,
                              int height);
