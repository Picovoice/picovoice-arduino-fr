
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = bonjour ordinateur
static const uint8_t KEYWORD_ARRAY[] = {
        0xef, 0x2e, 0x44, 0x7a, 0x25, 0x80, 0x58, 0x42, 0xb3, 0xf2, 0xde, 0xca, 0x89, 0xbc, 0x54, 0x67, 0xe9, 0xdf,
        0x14, 0x87, 0x1e, 0xf4, 0x1e, 0xae, 0x47, 0xcc, 0x96, 0x3f, 0x74, 0x9b, 0x8b, 0x27, 0x49, 0x6d, 0x1e, 0x78,
        0x66, 0x07, 0x83, 0x1f, 0xc3, 0x87, 0x5f, 0xf3, 0x0f, 0x4f, 0x6f, 0x00, 0xf5, 0x3e, 0x65, 0x9b, 0xe7, 0xcb,
        0xe7, 0x55, 0xfa, 0xc1, 0x50, 0xdb, 0xdf, 0x7d, 0x9e, 0xb0, 0xf0, 0xf4, 0x2a, 0x54, 0x4b, 0xea, 0x37, 0xd2,
        0xc7, 0x9e, 0x19, 0xd0, 0x14, 0xf0, 0x42, 0x80, 0xfd, 0x56, 0x5d, 0x23, 0x14, 0x3a, 0x43, 0x9a, 0xcf, 0xbb,
        0x67, 0xc9, 0x2d, 0x2b, 0x58, 0x15, 0xb5, 0x31, 0x9a, 0xd7, 0xff, 0xd6, 0x7e, 0x27, 0x4b, 0x6d, 0x11, 0x57,
        0x45, 0xaf, 0x54, 0x86, 0x5d, 0x97, 0xf9, 0x9f, 0xc0, 0x26, 0x53, 0xce, 0xed, 0x03, 0x69, 0x04, 0x9a, 0x34,
        0x95, 0x58, 0x64, 0x84, 0x2d, 0x55, 0x49, 0xee, 0x05, 0xf4, 0xb2, 0x1e, 0x97, 0x08, 0x75, 0xe4, 0xd7, 0xd1,
        0x81, 0x61, 0x4f, 0x7c, 0x1c, 0x40, 0x94, 0x60, 0x18, 0xfb, 0xf4, 0x2d, 0x68, 0xd0, 0xea, 0x1f, 0x0b, 0x38,
        0xca, 0xcc, 0x91, 0x86, 0x5f, 0xef, 0xcb, 0x0e, 0x33, 0xd8, 0x3f, 0x1c, 0x13, 0x4f, 0x82, 0x74, 0xb7, 0x4c,
        0xd6, 0x35, 0x07, 0x7c, 0x8f, 0x0f, 0x6d, 0xb9, 0x05, 0xe4, 0xea, 0xce, 0x91, 0x14, 0xc5, 0xf8, 0xee, 0xee,
        0x36, 0x65, 0x58, 0xae, 0xdb, 0xd3, 0x05, 0xda, 0x52, 0x86, 0xa8, 0xe4, 0x90, 0xca, 0x99, 0xf8, 0x03, 0x94,
        0xaa, 0x97, 0x02, 0xcc, 0x12, 0xe2, 0x70, 0x43, 0x06, 0x19, 0x23, 0xd7, 0xc7, 0x2b, 0x5f, 0x46, 0x01, 0x05,
        0xea, 0x61, 0xf9, 0xc8, 0x9b, 0x1e, 0x18, 0x86, 0x8d, 0x8e, 0xb8, 0xab, 0x1b, 0x5b, 0x16, 0x4e, 0x4d, 0xc1,
        0x16, 0x8b, 0xad, 0xd5, 0xf9, 0x18, 0x18, 0x7c, 0x77, 0x76, 0x43, 0x17, 0xd0, 0x10, 0x1e, 0x6a, 0xb3, 0x18,
        0x18, 0xbe, 0x81, 0x5b, 0x31, 0x49, 0xef, 0xb6, 0xec, 0xfb, 0x04, 0xab, 0xa9, 0xb5, 0xb3, 0x66, 0xe2, 0xb4,
        0x84, 0xc4, 0x64, 0xbd, 0x30, 0x89, 0x02, 0x42, 0x85, 0x25, 0xf7, 0x39, 0xdc, 0x10, 0x71, 0x1b, 0x2e, 0xdc,
        0xd6, 0x2c, 0xc2, 0x68, 0x8e, 0x2c, 0xd0, 0x57, 0xc1, 0xdd, 0xc2, 0xb6, 0x3c, 0x71, 0xac, 0x64, 0x71, 0x62,
        0x53, 0x51, 0x72, 0xb6, 0x04, 0x5a, 0x75, 0xe8, 0xb0, 0x15, 0x86, 0x17, 0x10, 0xaf, 0x95, 0x92, 0x43, 0xd4,
        0xf3, 0x31, 0x4d, 0x8d, 0x8c, 0x13, 0xc8, 0xee, 0xac, 0xc2, 0x80, 0x7e, 0x05, 0xb2, 0x7a, 0x97, 0xd5, 0xe1,
        0xf2, 0x52, 0x42, 0x3a, 0x80, 0x0d, 0x6c, 0x5b, 0x45, 0xb4, 0x8b, 0x4d, 0x53, 0x8d, 0xc1, 0x28, 0x85, 0xcb,
        0xac, 0x71, 0xf4, 0x8d, 0x13, 0x34, 0x80, 0x6d, 0x1a, 0x81, 0x42, 0xe5, 0x30, 0x99, 0x55, 0x8d, 0x37, 0x37,
        0xe7, 0x40, 0xc7, 0x14, 0x6a, 0x3d, 0xd6, 0x67, 0x3f, 0x9e, 0x51, 0xf3, 0xa1, 0x71, 0x12, 0x68, 0xba, 0xd7,
        0x52, 0x3e, 0x41, 0x63, 0xee, 0x67, 0x85, 0xf5, 0xdf, 0x00, 0xe5, 0xa5, 0xe8, 0xe7, 0x58, 0x25, 0x65, 0x3d,
        0xe3, 0x2e, 0xea, 0x9f, 0x19, 0x63, 0x8e, 0xd1, 0x71, 0x6c, 0x2f, 0x10, 0xe4, 0x8c, 0x5d, 0x4a, 0x3b, 0x92,
        0x40, 0x3a, 0x9b, 0x55, 0x12, 0x2a, 0xc4, 0xff, 0x64, 0x52, 0x42, 0xab, 0xc5, 0x66, 0x8d, 0x5c, 0x71, 0x1b,
        0x50, 0x1d, 0x8f, 0x8f, 0x8b, 0xa4, 0x31, 0x91, 0x9d, 0x23, 0xaf, 0x22, 0xa6, 0x50, 0x86, 0x0c, 0xab, 0x4c,
        0x66, 0x3e, 0x65, 0x2b, 0xf7, 0xe3, 0xd2, 0x63, 0x72, 0x99, 0x60, 0x31, 0x31, 0xa5, 0x3c, 0x13, 0x4c, 0xa4,
        0x8b, 0xc6, 0x10, 0x22, 0xef, 0x59, 0x8d, 0xb6, 0x34, 0x61, 0x1a, 0x06, 0x85, 0x52, 0xd2, 0xe5, 0x13, 0x23,
        0x7a, 0x29, 0x26, 0x49, 0xfe, 0x62, 0xde, 0x06, 0xab, 0x53, 0x7b, 0xaf, 0xaf, 0x4a, 0x8d, 0x97, 0xd6, 0x57,
        0x81, 0xbb, 0xd0, 0x8b, 0x43, 0x6e, 0xc3, 0x20, 0x4b, 0xe7, 0xec, 0x01, 0x1c, 0x47, 0x09, 0x7c, 0x01, 0xa7,
        0x75, 0x8c, 0xc3, 0x91, 0x01, 0x10, 0xd9, 0x33, 0x61, 0xc7, 0x48, 0xad, 0xff, 0xf8, 0x82, 0x6a, 0xba, 0x34,
        0xc6, 0x50, 0xf6, 0x3a, 0xa9, 0xc8, 0x6a, 0x82, 0x9a, 0xe0, 0x7f, 0xfb, 0xad, 0xc1, 0x84, 0x1f, 0x69, 0x1f,
        0x96, 0xb2, 0xdc, 0x4b, 0xc8, 0xb3, 0x67, 0xb1, 0x42, 0x00, 0x71, 0xf4, 0xd6, 0x79, 0xfa, 0xce, 0x7f, 0xc2,
        0xab, 0x90, 0x24, 0x89, 0x12, 0x13, 0x1d, 0x54, 0x7e, 0x4a, 0x4b, 0x09, 0xaa, 0xe0, 0x25, 0x9a, 0x98, 0x8f,
        0x07, 0xc3, 0x4d, 0xaa, 0x08, 0x60, 0x59, 0x2d, 0xda, 0xed, 0x99, 0x3b, 0x45, 0xa1, 0x90, 0xe3, 0xd7, 0x6a,
        0x05, 0xda, 0x92, 0x9b, 0xc3, 0x54, 0xed, 0x04, 0xbb, 0x36, 0xb1, 0x7f
};

// context = éclairage_intelligent
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x32, 0x2e, 0x32, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x66, 0x72, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x0b, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x5b, 0x4d, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f,
        0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0x4d, 0x65, 0x74, 0x73, 0x2c,
        0x20, 0x4d, 0x65, 0x74, 0x74, 0x65, 0x7a, 0x2c, 0x20, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x2c, 0x20, 0x41,
        0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x7a, 0x2c, 0x20, 0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x2c, 0x20, 0x43, 0x68,
        0x61, 0x6e, 0x67, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x5b,
        0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72,
        0x65, 0x5d, 0x20, 0x28, 0x65, 0x6e, 0x29, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c,
        0x6f, 0x72, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0x4d, 0x65, 0x74, 0x73,
        0x2c, 0x20, 0x4d, 0x65, 0x74, 0x74, 0x65, 0x7a, 0x2c, 0x20, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x2c, 0x20,
        0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x7a, 0x2c, 0x20, 0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x2c, 0x20, 0x43,
        0x68, 0x61, 0x6e, 0x67, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20,
        0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8,
        0x72, 0x65, 0x5d, 0x20, 0x5b, 0x64, 0x75, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x64, 0x61,
        0x6e, 0x73, 0x20, 0x6c, 0x61, 0x2c, 0x20, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x65, 0x5d, 0x20, 0x24, 0x6c,
        0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x28,
        0x65, 0x6e, 0x29, 0x20, 0x24, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x22, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61,
        0x74, 0x65, 0x4f, 0x66, 0x66, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0xc3,
        0x89, 0x74, 0x65, 0x69, 0x6e, 0x73, 0x2c, 0x20, 0xc3, 0x89, 0x74, 0x65, 0x69, 0x67, 0x6e, 0x65, 0x7a, 0x5d,
        0x20, 0x5b, 0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8,
        0x72, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x22, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0xc3, 0x89, 0x74, 0x65, 0x69, 0x6e, 0x73, 0x2c, 0x20, 0xc3,
        0x89, 0x74, 0x65, 0x69, 0x67, 0x6e, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61,
        0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69,
        0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x20, 0x5b, 0x64, 0x75, 0x2c, 0x20, 0x64, 0x65, 0x20, 0x6c, 0x61, 0x5d, 0x20,
        0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e,
        0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0xc3, 0x89, 0x74, 0x65, 0x69, 0x6e,
        0x73, 0x2c, 0x20, 0xc3, 0x89, 0x74, 0x65, 0x69, 0x67, 0x6e, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c, 0x65, 0x73,
        0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x2c, 0x20,
        0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x20, 0x5b, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x61,
        0x2c, 0x20, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x65, 0x5d, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69,
        0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x63,
        0x68, 0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x4f, 0x6e, 0x3a,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x2c,
        0x20, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61,
        0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69,
        0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b, 0x41,
        0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x2c, 0x20, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x7a, 0x5d, 0x20, 0x5b, 0x6c,
        0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73,
        0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x20, 0x5b, 0x64, 0x75, 0x2c, 0x20, 0x64,
        0x65, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0x5b,
        0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x2c, 0x20, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x7a, 0x5d, 0x20, 0x5b,
        0x6c, 0x65, 0x73, 0x2c, 0x20, 0x6c, 0x61, 0x5d, 0x20, 0x5b, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65,
        0x73, 0x2c, 0x20, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x5d, 0x20, 0x5b, 0x64, 0x61, 0x6e, 0x73,
        0x20, 0x6c, 0x61, 0x2c, 0x20, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x65, 0x2c, 0x20, 0x64, 0x61, 0x6e, 0x73,
        0x20, 0x6c, 0x27, 0x5d, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f, 0x63,
        0x61, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x62,
        0x6c, 0x65, 0x75, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x76, 0x65, 0x72, 0x74, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x6f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0x72, 0x6f, 0x73, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x76,
        0x69, 0x6f, 0x6c, 0x65, 0x74, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x72, 0x6f, 0x75, 0x67,
        0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x62, 0x6c, 0x61, 0x6e, 0x63, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x6a, 0x61, 0x75, 0x6e, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x73, 0x61,
        0x6c, 0x6c, 0x65, 0x20, 0x64, 0x65, 0x20, 0x62, 0x61, 0x69, 0x6e, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x74, 0x6f, 0x69, 0x6c, 0x65, 0x74, 0x74, 0x65, 0x73, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x63, 0x68, 0x61, 0x6d, 0x62, 0x72, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20,
        0x63, 0x68, 0x61, 0x6d, 0x62, 0x72, 0x65, 0x20, 0xc3, 0xa0, 0x20, 0x63, 0x6f, 0x75, 0x63, 0x68, 0x65, 0x72,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x70, 0x65, 0x6e, 0x64, 0x65, 0x72, 0x69, 0x65, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x70, 0x6c, 0x61, 0x63, 0x61, 0x72, 0x64, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x63, 0x6f, 0x75, 0x6c, 0x6f, 0x69, 0x72, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x2d, 0x20, 0x63, 0x75, 0x69, 0x73, 0x69, 0x6e, 0x65, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x2d, 0x20, 0x73, 0x61, 0x6c, 0x6c, 0x65, 0x20, 0x64, 0x65, 0x20, 0x73, 0xc3, 0xa9, 0x6a, 0x6f, 0x75, 0x72,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x73, 0x61, 0x6c, 0x6f, 0x6e, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x2d, 0x20, 0x67, 0x61, 0x72, 0x64, 0x65, 0x20, 0x6d, 0x61, 0x6e, 0x67, 0x65, 0x72, 0x0a,
        0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
        0x15, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x3d, 0x00,
        0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00,
        0x64, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x78, 0x00,
        0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00,
        0x9c, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xb1, 0x00, 0x00, 0x00, 0xb8, 0x00,
        0x00, 0x00, 0xc1, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xce, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
        0xe2, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x08, 0x01,
        0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x19, 0x01, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x41, 0x6c, 0x6c, 0x75,
        0x6d, 0x65, 0x7a, 0x00, 0x41, 0x6c, 0x6c, 0x75, 0x6d, 0x65, 0x00, 0x62, 0x6c, 0x61, 0x6e, 0x63, 0x00, 0x62,
        0x6c, 0x65, 0x75, 0x00, 0x63, 0x68, 0x61, 0x6d, 0x62, 0x72, 0x65, 0x20, 0xc3, 0xa0, 0x20, 0x63, 0x6f, 0x75,
        0x63, 0x68, 0x65, 0x72, 0x00, 0x63, 0x68, 0x61, 0x6d, 0x62, 0x72, 0x65, 0x00, 0x43, 0x68, 0x61, 0x6e, 0x67,
        0x65, 0x7a, 0x00, 0x43, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x00, 0x63, 0x6f, 0x75, 0x6c, 0x6f, 0x69, 0x72, 0x00,
        0x63, 0x75, 0x69, 0x73, 0x69, 0x6e, 0x65, 0x00, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x27, 0x00, 0x64, 0x61,
        0x6e, 0x73, 0x20, 0x6c, 0x61, 0x00, 0x64, 0x61, 0x6e, 0x73, 0x20, 0x6c, 0x65, 0x00, 0x64, 0x65, 0x20, 0x6c,
        0x61, 0x00, 0x64, 0x75, 0x00, 0x65, 0x6e, 0x00, 0x67, 0x61, 0x72, 0x64, 0x65, 0x20, 0x6d, 0x61, 0x6e, 0x67,
        0x65, 0x72, 0x00, 0x6a, 0x61, 0x75, 0x6e, 0x65, 0x00, 0x6c, 0x61, 0x00, 0x6c, 0x65, 0x73, 0x00, 0x6c, 0x75,
        0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x73, 0x00, 0x6c, 0x75, 0x6d, 0x69, 0xc3, 0xa8, 0x72, 0x65, 0x00, 0x4d,
        0x65, 0x74, 0x73, 0x00, 0x4d, 0x65, 0x74, 0x74, 0x65, 0x7a, 0x00, 0x6f, 0x72, 0x61, 0x6e, 0x67, 0x65, 0x00,
        0x70, 0x65, 0x6e, 0x64, 0x65, 0x72, 0x69, 0x65, 0x00, 0x70, 0x6c, 0x61, 0x63, 0x61, 0x72, 0x64, 0x00, 0x72,
        0x6f, 0x73, 0x65, 0x00, 0x72, 0x6f, 0x75, 0x67, 0x65, 0x00, 0x73, 0x61, 0x6c, 0x6c, 0x65, 0x20, 0x64, 0x65,
        0x20, 0x62, 0x61, 0x69, 0x6e, 0x00, 0x73, 0x61, 0x6c, 0x6c, 0x65, 0x20, 0x64, 0x65, 0x20, 0x73, 0xc3, 0xa9,
        0x6a, 0x6f, 0x75, 0x72, 0x00, 0x73, 0x61, 0x6c, 0x6f, 0x6e, 0x00, 0x74, 0x6f, 0x69, 0x6c, 0x65, 0x74, 0x74,
        0x65, 0x73, 0x00, 0x76, 0x65, 0x72, 0x74, 0x00, 0x76, 0x69, 0x6f, 0x6c, 0x65, 0x74, 0x00, 0xc3, 0x89, 0x74,
        0x65, 0x69, 0x67, 0x6e, 0x65, 0x7a, 0x00, 0xc3, 0x89, 0x74, 0x65, 0x69, 0x6e, 0x73, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
        0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00,
        0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
        0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00,
        0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00,
        0x1b, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00,
        0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00,
        0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x09, 0x00,
        0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00,
        0x22, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x35, 0x00,
        0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00,
        0x44, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x53, 0x00,
        0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00,
        0x69, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x7a, 0x00,
        0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00,
        0x98, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, 0xa2, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00, 0x01, 0x0b,
        0x16, 0x0c, 0x05, 0x01, 0x0b, 0x16, 0x0c, 0x03, 0x0b, 0x02, 0x03, 0x0b, 0x18, 0x23, 0x02, 0x03, 0x22, 0x1d,
        0x01, 0x0a, 0x13, 0x23, 0x05, 0x23, 0x02, 0x03, 0x22, 0x1d, 0x23, 0x02, 0x24, 0x05, 0x23, 0x02, 0x24, 0x0a,
        0x13, 0x0b, 0x15, 0x01, 0x22, 0x0a, 0x20, 0x08, 0x17, 0x08, 0x0d, 0x04, 0x02, 0x0b, 0x1a, 0x04, 0x02, 0x0b,
        0x01, 0x04, 0x02, 0x0b, 0x1a, 0x04, 0x1a, 0x0b, 0x01, 0x04, 0x16, 0x02, 0x07, 0x01, 0x22, 0x04, 0x0c, 0x02,
        0x24, 0x05, 0x24, 0x0e, 0x0d, 0x0b, 0x01, 0x0b, 0x05, 0x0b, 0x16, 0x0c, 0x09, 0x1e, 0x22, 0x0b, 0x16, 0x0c,
        0x09, 0x1e, 0x22, 0x0c, 0x1e, 0x0c, 0x05, 0x12, 0x05, 0x1c, 0x22, 0x02, 0x24, 0x10, 0x02, 0x04, 0x22, 0x08,
        0x10, 0x0b, 0x01, 0x0a, 0x01, 0x22, 0x22, 0x0e, 0x17, 0x22, 0x13, 0x24, 0x11, 0x01, 0x0b, 0x04, 0x1a, 0x03,
        0x1f, 0x11, 0x01, 0x0b, 0x04, 0x1a, 0x11, 0x05, 0x24, 0x13, 0x22, 0x11, 0x01, 0x0b, 0x0f, 0x12, 0x15, 0x01,
        0x0b, 0x1e, 0x12, 0x14, 0x1e, 0x22, 0x14, 0x09, 0x1c, 0x0b, 0x1e, 0x05, 0x12, 0x05, 0x21, 0x05, 0x05, 0x12,
        0x1f, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x13, 0x00,
        0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
        0x25, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
        0x1c, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00,
        0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00,
        0x1a, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x20, 0x00,
        0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
        0x07, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00,
        0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0e, 0x00,
        0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
        0x23, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x00,
        0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
        0x14, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6c, 0x6f, 0x72, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x10, 0x00,
        0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
        0x15, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00,
        0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x33, 0x00,
        0x00, 0x00, 0x63, 0x68, 0x61, 0x6e, 0x67, 0x65, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x63, 0x68, 0x61, 0x6e,
        0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x4f, 0x66, 0x66, 0x00, 0x63, 0x68,
        0x61, 0x6e, 0x67, 0x65, 0x4c, 0x69, 0x67, 0x68, 0x74, 0x53, 0x74, 0x61, 0x74, 0x65, 0x4f, 0x6e, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00,
        0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x1c, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
        0x30, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x60, 0x00,
        0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xa8, 0x00,
        0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00,
        0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa8, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x09, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0xf4, 0x00,
        0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00,
        0x08, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30, 0x01,
        0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x44, 0x01, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
        0x68, 0x01, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xa4, 0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    