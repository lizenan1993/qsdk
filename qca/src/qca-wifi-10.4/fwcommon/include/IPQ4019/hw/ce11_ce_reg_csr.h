/*
 * Copyright (c) 2015 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _CE11_CE_REG_CSR_H_
#define _CE11_CE_REG_CSR_H_


#ifndef __CE11_CE_REG_CSR_BASE_ADDRESS
#define __CE11_CE_REG_CSR_BASE_ADDRESS (0x4cc00)
#endif


// 0x0 (CE11_SR_BA)
#define CE11_SR_BA_V_LSB                                                       0
#define CE11_SR_BA_V_MSB                                                       31
#define CE11_SR_BA_V_MASK                                                      0xffffffff
#define CE11_SR_BA_V_GET(x)                                                    (((x) & CE11_SR_BA_V_MASK) >> CE11_SR_BA_V_LSB)
#define CE11_SR_BA_V_SET(x)                                                    (((0 | (x)) << CE11_SR_BA_V_LSB) & CE11_SR_BA_V_MASK)
#define CE11_SR_BA_V_RESET                                                     0x0
#define CE11_SR_BA_ADDRESS                                                     (0x0 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_SR_BA_RSTMASK                                                     0xffffffff
#define CE11_SR_BA_RESET                                                       0x0

// 0x4 (CE11_SR_SIZE)
#define CE11_SR_SIZE_V_LSB                                                     0
#define CE11_SR_SIZE_V_MSB                                                     15
#define CE11_SR_SIZE_V_MASK                                                    0xffff
#define CE11_SR_SIZE_V_GET(x)                                                  (((x) & CE11_SR_SIZE_V_MASK) >> CE11_SR_SIZE_V_LSB)
#define CE11_SR_SIZE_V_SET(x)                                                  (((0 | (x)) << CE11_SR_SIZE_V_LSB) & CE11_SR_SIZE_V_MASK)
#define CE11_SR_SIZE_V_RESET                                                   0x0
#define CE11_SR_SIZE_ADDRESS                                                   (0x4 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_SR_SIZE_RSTMASK                                                   0xffff
#define CE11_SR_SIZE_RESET                                                     0x0

// 0x8 (CE11_DR_BA)
#define CE11_DR_BA_V_LSB                                                       0
#define CE11_DR_BA_V_MSB                                                       31
#define CE11_DR_BA_V_MASK                                                      0xffffffff
#define CE11_DR_BA_V_GET(x)                                                    (((x) & CE11_DR_BA_V_MASK) >> CE11_DR_BA_V_LSB)
#define CE11_DR_BA_V_SET(x)                                                    (((0 | (x)) << CE11_DR_BA_V_LSB) & CE11_DR_BA_V_MASK)
#define CE11_DR_BA_V_RESET                                                     0x0
#define CE11_DR_BA_ADDRESS                                                     (0x8 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_DR_BA_RSTMASK                                                     0xffffffff
#define CE11_DR_BA_RESET                                                       0x0

// 0xc (CE11_DR_SIZE)
#define CE11_DR_SIZE_V_LSB                                                     0
#define CE11_DR_SIZE_V_MSB                                                     15
#define CE11_DR_SIZE_V_MASK                                                    0xffff
#define CE11_DR_SIZE_V_GET(x)                                                  (((x) & CE11_DR_SIZE_V_MASK) >> CE11_DR_SIZE_V_LSB)
#define CE11_DR_SIZE_V_SET(x)                                                  (((0 | (x)) << CE11_DR_SIZE_V_LSB) & CE11_DR_SIZE_V_MASK)
#define CE11_DR_SIZE_V_RESET                                                   0x0
#define CE11_DR_SIZE_ADDRESS                                                   (0xc + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_DR_SIZE_RSTMASK                                                   0xffff
#define CE11_DR_SIZE_RESET                                                     0x0

// 0x10 (CE11_CE_CTRL1)
#define CE11_CE_CTRL1_MSI_EN_LSB                                               18
#define CE11_CE_CTRL1_MSI_EN_MSB                                               18
#define CE11_CE_CTRL1_MSI_EN_MASK                                              0x40000
#define CE11_CE_CTRL1_MSI_EN_GET(x)                                            (((x) & CE11_CE_CTRL1_MSI_EN_MASK) >> CE11_CE_CTRL1_MSI_EN_LSB)
#define CE11_CE_CTRL1_MSI_EN_SET(x)                                            (((0 | (x)) << CE11_CE_CTRL1_MSI_EN_LSB) & CE11_CE_CTRL1_MSI_EN_MASK)
#define CE11_CE_CTRL1_MSI_EN_RESET                                             0x0
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB                                17
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MSB                                17
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK                               0x20000
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_GET(x)                             (((x) & CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK) >> CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB)
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_SET(x)                             (((0 | (x)) << CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_LSB) & CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_MASK)
#define CE11_CE_CTRL1_DST_RING_BYTE_SWAP_EN_RESET                              0x0
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB                                16
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MSB                                16
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK                               0x10000
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_GET(x)                             (((x) & CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK) >> CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB)
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_SET(x)                             (((0 | (x)) << CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_LSB) & CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_MASK)
#define CE11_CE_CTRL1_SRC_RING_BYTE_SWAP_EN_RESET                              0x0
#define CE11_CE_CTRL1_DMAX_LENGTH_LSB                                          0
#define CE11_CE_CTRL1_DMAX_LENGTH_MSB                                          15
#define CE11_CE_CTRL1_DMAX_LENGTH_MASK                                         0xffff
#define CE11_CE_CTRL1_DMAX_LENGTH_GET(x)                                       (((x) & CE11_CE_CTRL1_DMAX_LENGTH_MASK) >> CE11_CE_CTRL1_DMAX_LENGTH_LSB)
#define CE11_CE_CTRL1_DMAX_LENGTH_SET(x)                                       (((0 | (x)) << CE11_CE_CTRL1_DMAX_LENGTH_LSB) & CE11_CE_CTRL1_DMAX_LENGTH_MASK)
#define CE11_CE_CTRL1_DMAX_LENGTH_RESET                                        0x80
#define CE11_CE_CTRL1_ADDRESS                                                  (0x10 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CE_CTRL1_RSTMASK                                                  0x7ffff
#define CE11_CE_CTRL1_RESET                                                    0x80

// 0x14 (CE11_CE_CTRL2)
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_LSB                           25
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_MSB                           29
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_MASK                          0x3e000000
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_GET(x)                        (((x) & CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_MASK) >> CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_LSB)
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_SET(x)                        (((0 | (x)) << CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_LSB) & CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_MASK)
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_WRITES_RESET                         0x8
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_LSB                            20
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_MSB                            24
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_MASK                           0x1f00000
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_GET(x)                         (((x) & CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_MASK) >> CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_LSB)
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_SET(x)                         (((0 | (x)) << CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_LSB) & CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_MASK)
#define CE11_CE_CTRL2_NUM_AXI_OUTSTANDING_READS_RESET                          0x18
#define CE11_CE_CTRL2_AXI_TIMEOUT_LSB                                          4
#define CE11_CE_CTRL2_AXI_TIMEOUT_MSB                                          19
#define CE11_CE_CTRL2_AXI_TIMEOUT_MASK                                         0xffff0
#define CE11_CE_CTRL2_AXI_TIMEOUT_GET(x)                                       (((x) & CE11_CE_CTRL2_AXI_TIMEOUT_MASK) >> CE11_CE_CTRL2_AXI_TIMEOUT_LSB)
#define CE11_CE_CTRL2_AXI_TIMEOUT_SET(x)                                       (((0 | (x)) << CE11_CE_CTRL2_AXI_TIMEOUT_LSB) & CE11_CE_CTRL2_AXI_TIMEOUT_MASK)
#define CE11_CE_CTRL2_AXI_TIMEOUT_RESET                                        0x1f40
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_LSB                                     2
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_MSB                                     3
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_MASK                                    0xc
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_GET(x)                                  (((x) & CE11_CE_CTRL2_DEST_AXI_MAX_LEN_MASK) >> CE11_CE_CTRL2_DEST_AXI_MAX_LEN_LSB)
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_SET(x)                                  (((0 | (x)) << CE11_CE_CTRL2_DEST_AXI_MAX_LEN_LSB) & CE11_CE_CTRL2_DEST_AXI_MAX_LEN_MASK)
#define CE11_CE_CTRL2_DEST_AXI_MAX_LEN_RESET                                   0x1
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_LSB                                      0
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_MSB                                      1
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_MASK                                     0x3
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_GET(x)                                   (((x) & CE11_CE_CTRL2_SRC_AXI_MAX_LEN_MASK) >> CE11_CE_CTRL2_SRC_AXI_MAX_LEN_LSB)
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_SET(x)                                   (((0 | (x)) << CE11_CE_CTRL2_SRC_AXI_MAX_LEN_LSB) & CE11_CE_CTRL2_SRC_AXI_MAX_LEN_MASK)
#define CE11_CE_CTRL2_SRC_AXI_MAX_LEN_RESET                                    0x1
#define CE11_CE_CTRL2_ADDRESS                                                  (0x14 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CE_CTRL2_RSTMASK                                                  0x3fffffff
#define CE11_CE_CTRL2_RESET                                                    0x1181f405

// 0x18 (CE11_CE_CMD)
#define CE11_CE_CMD_HALT_STATUS_LSB                                            3
#define CE11_CE_CMD_HALT_STATUS_MSB                                            3
#define CE11_CE_CMD_HALT_STATUS_MASK                                           0x8
#define CE11_CE_CMD_HALT_STATUS_GET(x)                                         (((x) & CE11_CE_CMD_HALT_STATUS_MASK) >> CE11_CE_CMD_HALT_STATUS_LSB)
#define CE11_CE_CMD_HALT_STATUS_SET(x)                                         (((0 | (x)) << CE11_CE_CMD_HALT_STATUS_LSB) & CE11_CE_CMD_HALT_STATUS_MASK)
#define CE11_CE_CMD_HALT_STATUS_RESET                                          0x0
#define CE11_CE_CMD_DST_FLUSH_LSB                                              2
#define CE11_CE_CMD_DST_FLUSH_MSB                                              2
#define CE11_CE_CMD_DST_FLUSH_MASK                                             0x4
#define CE11_CE_CMD_DST_FLUSH_GET(x)                                           (((x) & CE11_CE_CMD_DST_FLUSH_MASK) >> CE11_CE_CMD_DST_FLUSH_LSB)
#define CE11_CE_CMD_DST_FLUSH_SET(x)                                           (((0 | (x)) << CE11_CE_CMD_DST_FLUSH_LSB) & CE11_CE_CMD_DST_FLUSH_MASK)
#define CE11_CE_CMD_DST_FLUSH_RESET                                            0x0
#define CE11_CE_CMD_SRC_FLUSH_LSB                                              1
#define CE11_CE_CMD_SRC_FLUSH_MSB                                              1
#define CE11_CE_CMD_SRC_FLUSH_MASK                                             0x2
#define CE11_CE_CMD_SRC_FLUSH_GET(x)                                           (((x) & CE11_CE_CMD_SRC_FLUSH_MASK) >> CE11_CE_CMD_SRC_FLUSH_LSB)
#define CE11_CE_CMD_SRC_FLUSH_SET(x)                                           (((0 | (x)) << CE11_CE_CMD_SRC_FLUSH_LSB) & CE11_CE_CMD_SRC_FLUSH_MASK)
#define CE11_CE_CMD_SRC_FLUSH_RESET                                            0x0
#define CE11_CE_CMD_HALT_LSB                                                   0
#define CE11_CE_CMD_HALT_MSB                                                   0
#define CE11_CE_CMD_HALT_MASK                                                  0x1
#define CE11_CE_CMD_HALT_GET(x)                                                (((x) & CE11_CE_CMD_HALT_MASK) >> CE11_CE_CMD_HALT_LSB)
#define CE11_CE_CMD_HALT_SET(x)                                                (((0 | (x)) << CE11_CE_CMD_HALT_LSB) & CE11_CE_CMD_HALT_MASK)
#define CE11_CE_CMD_HALT_RESET                                                 0x0
#define CE11_CE_CMD_ADDRESS                                                    (0x18 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CE_CMD_RSTMASK                                                    0xf
#define CE11_CE_CMD_RESET                                                      0x0

// 0x1c (CE11_MSI_ADDR)
#define CE11_MSI_ADDR_V_LSB                                                    0
#define CE11_MSI_ADDR_V_MSB                                                    31
#define CE11_MSI_ADDR_V_MASK                                                   0xffffffff
#define CE11_MSI_ADDR_V_GET(x)                                                 (((x) & CE11_MSI_ADDR_V_MASK) >> CE11_MSI_ADDR_V_LSB)
#define CE11_MSI_ADDR_V_SET(x)                                                 (((0 | (x)) << CE11_MSI_ADDR_V_LSB) & CE11_MSI_ADDR_V_MASK)
#define CE11_MSI_ADDR_V_RESET                                                  0x0
#define CE11_MSI_ADDR_ADDRESS                                                  (0x1c + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_MSI_ADDR_RSTMASK                                                  0xffffffff
#define CE11_MSI_ADDR_RESET                                                    0x0

// 0x20 (CE11_MSI_DATA)
#define CE11_MSI_DATA_V_LSB                                                    0
#define CE11_MSI_DATA_V_MSB                                                    31
#define CE11_MSI_DATA_V_MASK                                                   0xffffffff
#define CE11_MSI_DATA_V_GET(x)                                                 (((x) & CE11_MSI_DATA_V_MASK) >> CE11_MSI_DATA_V_LSB)
#define CE11_MSI_DATA_V_SET(x)                                                 (((0 | (x)) << CE11_MSI_DATA_V_LSB) & CE11_MSI_DATA_V_MASK)
#define CE11_MSI_DATA_V_RESET                                                  0x0
#define CE11_MSI_DATA_ADDRESS                                                  (0x20 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_MSI_DATA_RSTMASK                                                  0xffffffff
#define CE11_MSI_DATA_RESET                                                    0x0

// 0x24 (CE11_TARGET_IE)
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_LSB                              4
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_MSB                              4
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_MASK                             0x10
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_GET(x)                           (((x) & CE11_TARGET_IE_DST_RING_LOW_WATERMARK_MASK) >> CE11_TARGET_IE_DST_RING_LOW_WATERMARK_LSB)
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_SET(x)                           (((0 | (x)) << CE11_TARGET_IE_DST_RING_LOW_WATERMARK_LSB) & CE11_TARGET_IE_DST_RING_LOW_WATERMARK_MASK)
#define CE11_TARGET_IE_DST_RING_LOW_WATERMARK_RESET                            0x0
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_LSB                             3
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_MSB                             3
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_MASK                            0x8
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_GET(x)                          (((x) & CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_MASK) >> CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_SET(x)                          (((0 | (x)) << CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_LSB) & CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_TARGET_IE_DST_RING_HIGH_WATERMARK_RESET                           0x0
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_LSB                              2
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_MSB                              2
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_MASK                             0x4
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_GET(x)                           (((x) & CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_MASK) >> CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_SET(x)                           (((0 | (x)) << CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_LSB) & CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_TARGET_IE_SRC_RING_LOW_WATERMARK_RESET                            0x0
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_LSB                             1
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_MSB                             1
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_MASK                            0x2
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_GET(x)                          (((x) & CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_SET(x)                          (((0 | (x)) << CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_LSB) & CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_TARGET_IE_SRC_RING_HIGH_WATERMARK_RESET                           0x0
#define CE11_TARGET_IE_COPY_COMPLETE_LSB                                       0
#define CE11_TARGET_IE_COPY_COMPLETE_MSB                                       0
#define CE11_TARGET_IE_COPY_COMPLETE_MASK                                      0x1
#define CE11_TARGET_IE_COPY_COMPLETE_GET(x)                                    (((x) & CE11_TARGET_IE_COPY_COMPLETE_MASK) >> CE11_TARGET_IE_COPY_COMPLETE_LSB)
#define CE11_TARGET_IE_COPY_COMPLETE_SET(x)                                    (((0 | (x)) << CE11_TARGET_IE_COPY_COMPLETE_LSB) & CE11_TARGET_IE_COPY_COMPLETE_MASK)
#define CE11_TARGET_IE_COPY_COMPLETE_RESET                                     0x0
#define CE11_TARGET_IE_ADDRESS                                                 (0x24 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_TARGET_IE_RSTMASK                                                 0x1f
#define CE11_TARGET_IE_RESET                                                   0x0

// 0x28 (CE11_TARGET_IS)
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_LSB                              4
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_MSB                              4
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_MASK                             0x10
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_GET(x)                           (((x) & CE11_TARGET_IS_DST_RING_LOW_WATERMARK_MASK) >> CE11_TARGET_IS_DST_RING_LOW_WATERMARK_LSB)
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_SET(x)                           (((0 | (x)) << CE11_TARGET_IS_DST_RING_LOW_WATERMARK_LSB) & CE11_TARGET_IS_DST_RING_LOW_WATERMARK_MASK)
#define CE11_TARGET_IS_DST_RING_LOW_WATERMARK_RESET                            0x0
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_LSB                             3
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_MSB                             3
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_MASK                            0x8
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_GET(x)                          (((x) & CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_MASK) >> CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_SET(x)                          (((0 | (x)) << CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_LSB) & CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_TARGET_IS_DST_RING_HIGH_WATERMARK_RESET                           0x0
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_LSB                              2
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_MSB                              2
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_MASK                             0x4
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_GET(x)                           (((x) & CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_MASK) >> CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_SET(x)                           (((0 | (x)) << CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_LSB) & CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_TARGET_IS_SRC_RING_LOW_WATERMARK_RESET                            0x0
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_LSB                             1
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_MSB                             1
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_MASK                            0x2
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_GET(x)                          (((x) & CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_SET(x)                          (((0 | (x)) << CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_LSB) & CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_TARGET_IS_SRC_RING_HIGH_WATERMARK_RESET                           0x0
#define CE11_TARGET_IS_COPY_COMPLETE_LSB                                       0
#define CE11_TARGET_IS_COPY_COMPLETE_MSB                                       0
#define CE11_TARGET_IS_COPY_COMPLETE_MASK                                      0x1
#define CE11_TARGET_IS_COPY_COMPLETE_GET(x)                                    (((x) & CE11_TARGET_IS_COPY_COMPLETE_MASK) >> CE11_TARGET_IS_COPY_COMPLETE_LSB)
#define CE11_TARGET_IS_COPY_COMPLETE_SET(x)                                    (((0 | (x)) << CE11_TARGET_IS_COPY_COMPLETE_LSB) & CE11_TARGET_IS_COPY_COMPLETE_MASK)
#define CE11_TARGET_IS_COPY_COMPLETE_RESET                                     0x0
#define CE11_TARGET_IS_ADDRESS                                                 (0x28 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_TARGET_IS_RSTMASK                                                 0x1f
#define CE11_TARGET_IS_RESET                                                   0x0

// 0x2c (CE11_HOST_IE)
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_LSB                                4
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_MSB                                4
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_MASK                               0x10
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_HOST_IE_DST_RING_LOW_WATERMARK_MASK) >> CE11_HOST_IE_DST_RING_LOW_WATERMARK_LSB)
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_HOST_IE_DST_RING_LOW_WATERMARK_LSB) & CE11_HOST_IE_DST_RING_LOW_WATERMARK_MASK)
#define CE11_HOST_IE_DST_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_LSB                               3
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_MSB                               3
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_MASK                              0x8
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_HOST_IE_DST_RING_HIGH_WATERMARK_MASK) >> CE11_HOST_IE_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_HOST_IE_DST_RING_HIGH_WATERMARK_LSB) & CE11_HOST_IE_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_HOST_IE_DST_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_LSB                                2
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_MSB                                2
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_MASK                               0x4
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_HOST_IE_SRC_RING_LOW_WATERMARK_MASK) >> CE11_HOST_IE_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_HOST_IE_SRC_RING_LOW_WATERMARK_LSB) & CE11_HOST_IE_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_HOST_IE_SRC_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_LSB                               1
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_MSB                               1
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_MASK                              0x2
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_LSB) & CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_HOST_IE_SRC_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_HOST_IE_COPY_COMPLETE_LSB                                         0
#define CE11_HOST_IE_COPY_COMPLETE_MSB                                         0
#define CE11_HOST_IE_COPY_COMPLETE_MASK                                        0x1
#define CE11_HOST_IE_COPY_COMPLETE_GET(x)                                      (((x) & CE11_HOST_IE_COPY_COMPLETE_MASK) >> CE11_HOST_IE_COPY_COMPLETE_LSB)
#define CE11_HOST_IE_COPY_COMPLETE_SET(x)                                      (((0 | (x)) << CE11_HOST_IE_COPY_COMPLETE_LSB) & CE11_HOST_IE_COPY_COMPLETE_MASK)
#define CE11_HOST_IE_COPY_COMPLETE_RESET                                       0x0
#define CE11_HOST_IE_ADDRESS                                                   (0x2c + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_HOST_IE_RSTMASK                                                   0x1f
#define CE11_HOST_IE_RESET                                                     0x0

// 0x30 (CE11_HOST_IS)
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_LSB                                4
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_MSB                                4
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_MASK                               0x10
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_HOST_IS_DST_RING_LOW_WATERMARK_MASK) >> CE11_HOST_IS_DST_RING_LOW_WATERMARK_LSB)
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_HOST_IS_DST_RING_LOW_WATERMARK_LSB) & CE11_HOST_IS_DST_RING_LOW_WATERMARK_MASK)
#define CE11_HOST_IS_DST_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_LSB                               3
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_MSB                               3
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_MASK                              0x8
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_HOST_IS_DST_RING_HIGH_WATERMARK_MASK) >> CE11_HOST_IS_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_HOST_IS_DST_RING_HIGH_WATERMARK_LSB) & CE11_HOST_IS_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_HOST_IS_DST_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_LSB                                2
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_MSB                                2
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_MASK                               0x4
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_HOST_IS_SRC_RING_LOW_WATERMARK_MASK) >> CE11_HOST_IS_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_HOST_IS_SRC_RING_LOW_WATERMARK_LSB) & CE11_HOST_IS_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_HOST_IS_SRC_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_LSB                               1
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_MSB                               1
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK                              0x2
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_LSB) & CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_HOST_IS_SRC_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_HOST_IS_COPY_COMPLETE_LSB                                         0
#define CE11_HOST_IS_COPY_COMPLETE_MSB                                         0
#define CE11_HOST_IS_COPY_COMPLETE_MASK                                        0x1
#define CE11_HOST_IS_COPY_COMPLETE_GET(x)                                      (((x) & CE11_HOST_IS_COPY_COMPLETE_MASK) >> CE11_HOST_IS_COPY_COMPLETE_LSB)
#define CE11_HOST_IS_COPY_COMPLETE_SET(x)                                      (((0 | (x)) << CE11_HOST_IS_COPY_COMPLETE_LSB) & CE11_HOST_IS_COPY_COMPLETE_MASK)
#define CE11_HOST_IS_COPY_COMPLETE_RESET                                       0x0
#define CE11_HOST_IS_ADDRESS                                                   (0x30 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_HOST_IS_RSTMASK                                                   0x1f
#define CE11_HOST_IS_RESET                                                     0x0

// 0x34 (CE11_MISC_IE)
#define CE11_MISC_IE_AXI_ERR_LSB                                               10
#define CE11_MISC_IE_AXI_ERR_MSB                                               10
#define CE11_MISC_IE_AXI_ERR_MASK                                              0x400
#define CE11_MISC_IE_AXI_ERR_GET(x)                                            (((x) & CE11_MISC_IE_AXI_ERR_MASK) >> CE11_MISC_IE_AXI_ERR_LSB)
#define CE11_MISC_IE_AXI_ERR_SET(x)                                            (((0 | (x)) << CE11_MISC_IE_AXI_ERR_LSB) & CE11_MISC_IE_AXI_ERR_MASK)
#define CE11_MISC_IE_AXI_ERR_RESET                                             0x0
#define CE11_MISC_IE_DST_ADDR_ERR_LSB                                          9
#define CE11_MISC_IE_DST_ADDR_ERR_MSB                                          9
#define CE11_MISC_IE_DST_ADDR_ERR_MASK                                         0x200
#define CE11_MISC_IE_DST_ADDR_ERR_GET(x)                                       (((x) & CE11_MISC_IE_DST_ADDR_ERR_MASK) >> CE11_MISC_IE_DST_ADDR_ERR_LSB)
#define CE11_MISC_IE_DST_ADDR_ERR_SET(x)                                       (((0 | (x)) << CE11_MISC_IE_DST_ADDR_ERR_LSB) & CE11_MISC_IE_DST_ADDR_ERR_MASK)
#define CE11_MISC_IE_DST_ADDR_ERR_RESET                                        0x0
#define CE11_MISC_IE_SRC_LEN_ERR_LSB                                           8
#define CE11_MISC_IE_SRC_LEN_ERR_MSB                                           8
#define CE11_MISC_IE_SRC_LEN_ERR_MASK                                          0x100
#define CE11_MISC_IE_SRC_LEN_ERR_GET(x)                                        (((x) & CE11_MISC_IE_SRC_LEN_ERR_MASK) >> CE11_MISC_IE_SRC_LEN_ERR_LSB)
#define CE11_MISC_IE_SRC_LEN_ERR_SET(x)                                        (((0 | (x)) << CE11_MISC_IE_SRC_LEN_ERR_LSB) & CE11_MISC_IE_SRC_LEN_ERR_MASK)
#define CE11_MISC_IE_SRC_LEN_ERR_RESET                                         0x0
#define CE11_MISC_IE_DST_MAX_LEN_VIO_LSB                                       7
#define CE11_MISC_IE_DST_MAX_LEN_VIO_MSB                                       7
#define CE11_MISC_IE_DST_MAX_LEN_VIO_MASK                                      0x80
#define CE11_MISC_IE_DST_MAX_LEN_VIO_GET(x)                                    (((x) & CE11_MISC_IE_DST_MAX_LEN_VIO_MASK) >> CE11_MISC_IE_DST_MAX_LEN_VIO_LSB)
#define CE11_MISC_IE_DST_MAX_LEN_VIO_SET(x)                                    (((0 | (x)) << CE11_MISC_IE_DST_MAX_LEN_VIO_LSB) & CE11_MISC_IE_DST_MAX_LEN_VIO_MASK)
#define CE11_MISC_IE_DST_MAX_LEN_VIO_RESET                                     0x0
#define CE11_MISC_IE_DST_RING_OVERFLOW_LSB                                     6
#define CE11_MISC_IE_DST_RING_OVERFLOW_MSB                                     6
#define CE11_MISC_IE_DST_RING_OVERFLOW_MASK                                    0x40
#define CE11_MISC_IE_DST_RING_OVERFLOW_GET(x)                                  (((x) & CE11_MISC_IE_DST_RING_OVERFLOW_MASK) >> CE11_MISC_IE_DST_RING_OVERFLOW_LSB)
#define CE11_MISC_IE_DST_RING_OVERFLOW_SET(x)                                  (((0 | (x)) << CE11_MISC_IE_DST_RING_OVERFLOW_LSB) & CE11_MISC_IE_DST_RING_OVERFLOW_MASK)
#define CE11_MISC_IE_DST_RING_OVERFLOW_RESET                                   0x0
#define CE11_MISC_IE_SRC_RING_OVERFLOW_LSB                                     5
#define CE11_MISC_IE_SRC_RING_OVERFLOW_MSB                                     5
#define CE11_MISC_IE_SRC_RING_OVERFLOW_MASK                                    0x20
#define CE11_MISC_IE_SRC_RING_OVERFLOW_GET(x)                                  (((x) & CE11_MISC_IE_SRC_RING_OVERFLOW_MASK) >> CE11_MISC_IE_SRC_RING_OVERFLOW_LSB)
#define CE11_MISC_IE_SRC_RING_OVERFLOW_SET(x)                                  (((0 | (x)) << CE11_MISC_IE_SRC_RING_OVERFLOW_LSB) & CE11_MISC_IE_SRC_RING_OVERFLOW_MASK)
#define CE11_MISC_IE_SRC_RING_OVERFLOW_RESET                                   0x0
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_LSB                                4
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_MSB                                4
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_MASK                               0x10
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_MISC_IE_DST_RING_LOW_WATERMARK_MASK) >> CE11_MISC_IE_DST_RING_LOW_WATERMARK_LSB)
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_MISC_IE_DST_RING_LOW_WATERMARK_LSB) & CE11_MISC_IE_DST_RING_LOW_WATERMARK_MASK)
#define CE11_MISC_IE_DST_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_LSB                               3
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_MSB                               3
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_MASK                              0x8
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_MISC_IE_DST_RING_HIGH_WATERMARK_MASK) >> CE11_MISC_IE_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_MISC_IE_DST_RING_HIGH_WATERMARK_LSB) & CE11_MISC_IE_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_MISC_IE_DST_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_LSB                                2
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_MSB                                2
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_MASK                               0x4
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_MISC_IE_SRC_RING_LOW_WATERMARK_MASK) >> CE11_MISC_IE_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_MISC_IE_SRC_RING_LOW_WATERMARK_LSB) & CE11_MISC_IE_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_MISC_IE_SRC_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_LSB                               1
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_MSB                               1
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_MASK                              0x2
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_LSB) & CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_MISC_IE_SRC_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_MISC_IE_COPY_COMPLETE_LSB                                         0
#define CE11_MISC_IE_COPY_COMPLETE_MSB                                         0
#define CE11_MISC_IE_COPY_COMPLETE_MASK                                        0x1
#define CE11_MISC_IE_COPY_COMPLETE_GET(x)                                      (((x) & CE11_MISC_IE_COPY_COMPLETE_MASK) >> CE11_MISC_IE_COPY_COMPLETE_LSB)
#define CE11_MISC_IE_COPY_COMPLETE_SET(x)                                      (((0 | (x)) << CE11_MISC_IE_COPY_COMPLETE_LSB) & CE11_MISC_IE_COPY_COMPLETE_MASK)
#define CE11_MISC_IE_COPY_COMPLETE_RESET                                       0x0
#define CE11_MISC_IE_ADDRESS                                                   (0x34 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_MISC_IE_RSTMASK                                                   0x7ff
#define CE11_MISC_IE_RESET                                                     0x0

// 0x38 (CE11_MISC_IS)
#define CE11_MISC_IS_AXI_ERR_LSB                                               10
#define CE11_MISC_IS_AXI_ERR_MSB                                               10
#define CE11_MISC_IS_AXI_ERR_MASK                                              0x400
#define CE11_MISC_IS_AXI_ERR_GET(x)                                            (((x) & CE11_MISC_IS_AXI_ERR_MASK) >> CE11_MISC_IS_AXI_ERR_LSB)
#define CE11_MISC_IS_AXI_ERR_SET(x)                                            (((0 | (x)) << CE11_MISC_IS_AXI_ERR_LSB) & CE11_MISC_IS_AXI_ERR_MASK)
#define CE11_MISC_IS_AXI_ERR_RESET                                             0x0
#define CE11_MISC_IS_DST_ADDR_ERR_LSB                                          9
#define CE11_MISC_IS_DST_ADDR_ERR_MSB                                          9
#define CE11_MISC_IS_DST_ADDR_ERR_MASK                                         0x200
#define CE11_MISC_IS_DST_ADDR_ERR_GET(x)                                       (((x) & CE11_MISC_IS_DST_ADDR_ERR_MASK) >> CE11_MISC_IS_DST_ADDR_ERR_LSB)
#define CE11_MISC_IS_DST_ADDR_ERR_SET(x)                                       (((0 | (x)) << CE11_MISC_IS_DST_ADDR_ERR_LSB) & CE11_MISC_IS_DST_ADDR_ERR_MASK)
#define CE11_MISC_IS_DST_ADDR_ERR_RESET                                        0x0
#define CE11_MISC_IS_SRC_LEN_ERR_LSB                                           8
#define CE11_MISC_IS_SRC_LEN_ERR_MSB                                           8
#define CE11_MISC_IS_SRC_LEN_ERR_MASK                                          0x100
#define CE11_MISC_IS_SRC_LEN_ERR_GET(x)                                        (((x) & CE11_MISC_IS_SRC_LEN_ERR_MASK) >> CE11_MISC_IS_SRC_LEN_ERR_LSB)
#define CE11_MISC_IS_SRC_LEN_ERR_SET(x)                                        (((0 | (x)) << CE11_MISC_IS_SRC_LEN_ERR_LSB) & CE11_MISC_IS_SRC_LEN_ERR_MASK)
#define CE11_MISC_IS_SRC_LEN_ERR_RESET                                         0x0
#define CE11_MISC_IS_DST_MAX_LEN_VIO_LSB                                       7
#define CE11_MISC_IS_DST_MAX_LEN_VIO_MSB                                       7
#define CE11_MISC_IS_DST_MAX_LEN_VIO_MASK                                      0x80
#define CE11_MISC_IS_DST_MAX_LEN_VIO_GET(x)                                    (((x) & CE11_MISC_IS_DST_MAX_LEN_VIO_MASK) >> CE11_MISC_IS_DST_MAX_LEN_VIO_LSB)
#define CE11_MISC_IS_DST_MAX_LEN_VIO_SET(x)                                    (((0 | (x)) << CE11_MISC_IS_DST_MAX_LEN_VIO_LSB) & CE11_MISC_IS_DST_MAX_LEN_VIO_MASK)
#define CE11_MISC_IS_DST_MAX_LEN_VIO_RESET                                     0x0
#define CE11_MISC_IS_DST_RING_OVERFLOW_LSB                                     6
#define CE11_MISC_IS_DST_RING_OVERFLOW_MSB                                     6
#define CE11_MISC_IS_DST_RING_OVERFLOW_MASK                                    0x40
#define CE11_MISC_IS_DST_RING_OVERFLOW_GET(x)                                  (((x) & CE11_MISC_IS_DST_RING_OVERFLOW_MASK) >> CE11_MISC_IS_DST_RING_OVERFLOW_LSB)
#define CE11_MISC_IS_DST_RING_OVERFLOW_SET(x)                                  (((0 | (x)) << CE11_MISC_IS_DST_RING_OVERFLOW_LSB) & CE11_MISC_IS_DST_RING_OVERFLOW_MASK)
#define CE11_MISC_IS_DST_RING_OVERFLOW_RESET                                   0x0
#define CE11_MISC_IS_SRC_RING_OVERFLOW_LSB                                     5
#define CE11_MISC_IS_SRC_RING_OVERFLOW_MSB                                     5
#define CE11_MISC_IS_SRC_RING_OVERFLOW_MASK                                    0x20
#define CE11_MISC_IS_SRC_RING_OVERFLOW_GET(x)                                  (((x) & CE11_MISC_IS_SRC_RING_OVERFLOW_MASK) >> CE11_MISC_IS_SRC_RING_OVERFLOW_LSB)
#define CE11_MISC_IS_SRC_RING_OVERFLOW_SET(x)                                  (((0 | (x)) << CE11_MISC_IS_SRC_RING_OVERFLOW_LSB) & CE11_MISC_IS_SRC_RING_OVERFLOW_MASK)
#define CE11_MISC_IS_SRC_RING_OVERFLOW_RESET                                   0x0
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_LSB                                4
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_MSB                                4
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_MASK                               0x10
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_MISC_IS_DST_RING_LOW_WATERMARK_MASK) >> CE11_MISC_IS_DST_RING_LOW_WATERMARK_LSB)
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_MISC_IS_DST_RING_LOW_WATERMARK_LSB) & CE11_MISC_IS_DST_RING_LOW_WATERMARK_MASK)
#define CE11_MISC_IS_DST_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_LSB                               3
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_MSB                               3
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_MASK                              0x8
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_MISC_IS_DST_RING_HIGH_WATERMARK_MASK) >> CE11_MISC_IS_DST_RING_HIGH_WATERMARK_LSB)
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_MISC_IS_DST_RING_HIGH_WATERMARK_LSB) & CE11_MISC_IS_DST_RING_HIGH_WATERMARK_MASK)
#define CE11_MISC_IS_DST_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_LSB                                2
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_MSB                                2
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_MASK                               0x4
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_GET(x)                             (((x) & CE11_MISC_IS_SRC_RING_LOW_WATERMARK_MASK) >> CE11_MISC_IS_SRC_RING_LOW_WATERMARK_LSB)
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_SET(x)                             (((0 | (x)) << CE11_MISC_IS_SRC_RING_LOW_WATERMARK_LSB) & CE11_MISC_IS_SRC_RING_LOW_WATERMARK_MASK)
#define CE11_MISC_IS_SRC_RING_LOW_WATERMARK_RESET                              0x0
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_LSB                               1
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_MSB                               1
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_MASK                              0x2
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_GET(x)                            (((x) & CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_MASK) >> CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_LSB)
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_SET(x)                            (((0 | (x)) << CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_LSB) & CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_MASK)
#define CE11_MISC_IS_SRC_RING_HIGH_WATERMARK_RESET                             0x0
#define CE11_MISC_IS_COPY_COMPLETE_LSB                                         0
#define CE11_MISC_IS_COPY_COMPLETE_MSB                                         0
#define CE11_MISC_IS_COPY_COMPLETE_MASK                                        0x1
#define CE11_MISC_IS_COPY_COMPLETE_GET(x)                                      (((x) & CE11_MISC_IS_COPY_COMPLETE_MASK) >> CE11_MISC_IS_COPY_COMPLETE_LSB)
#define CE11_MISC_IS_COPY_COMPLETE_SET(x)                                      (((0 | (x)) << CE11_MISC_IS_COPY_COMPLETE_LSB) & CE11_MISC_IS_COPY_COMPLETE_MASK)
#define CE11_MISC_IS_COPY_COMPLETE_RESET                                       0x0
#define CE11_MISC_IS_ADDRESS                                                   (0x38 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_MISC_IS_RSTMASK                                                   0x7ff
#define CE11_MISC_IS_RESET                                                     0x0

// 0x3c (CE11_SR_WR_INDEX)
#define CE11_SR_WR_INDEX_V_LSB                                                 0
#define CE11_SR_WR_INDEX_V_MSB                                                 15
#define CE11_SR_WR_INDEX_V_MASK                                                0xffff
#define CE11_SR_WR_INDEX_V_GET(x)                                              (((x) & CE11_SR_WR_INDEX_V_MASK) >> CE11_SR_WR_INDEX_V_LSB)
#define CE11_SR_WR_INDEX_V_SET(x)                                              (((0 | (x)) << CE11_SR_WR_INDEX_V_LSB) & CE11_SR_WR_INDEX_V_MASK)
#define CE11_SR_WR_INDEX_V_RESET                                               0x0
#define CE11_SR_WR_INDEX_ADDRESS                                               (0x3c + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_SR_WR_INDEX_RSTMASK                                               0xffff
#define CE11_SR_WR_INDEX_RESET                                                 0x0

// 0x40 (CE11_DST_WR_INDEX)
#define CE11_DST_WR_INDEX_V_LSB                                                0
#define CE11_DST_WR_INDEX_V_MSB                                                15
#define CE11_DST_WR_INDEX_V_MASK                                               0xffff
#define CE11_DST_WR_INDEX_V_GET(x)                                             (((x) & CE11_DST_WR_INDEX_V_MASK) >> CE11_DST_WR_INDEX_V_LSB)
#define CE11_DST_WR_INDEX_V_SET(x)                                             (((0 | (x)) << CE11_DST_WR_INDEX_V_LSB) & CE11_DST_WR_INDEX_V_MASK)
#define CE11_DST_WR_INDEX_V_RESET                                              0x0
#define CE11_DST_WR_INDEX_ADDRESS                                              (0x40 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_DST_WR_INDEX_RSTMASK                                              0xffff
#define CE11_DST_WR_INDEX_RESET                                                0x0

// 0x44 (CE11_CURRENT_SRRI)
#define CE11_CURRENT_SRRI_V_LSB                                                0
#define CE11_CURRENT_SRRI_V_MSB                                                15
#define CE11_CURRENT_SRRI_V_MASK                                               0xffff
#define CE11_CURRENT_SRRI_V_GET(x)                                             (((x) & CE11_CURRENT_SRRI_V_MASK) >> CE11_CURRENT_SRRI_V_LSB)
#define CE11_CURRENT_SRRI_V_SET(x)                                             (((0 | (x)) << CE11_CURRENT_SRRI_V_LSB) & CE11_CURRENT_SRRI_V_MASK)
#define CE11_CURRENT_SRRI_V_RESET                                              0x0
#define CE11_CURRENT_SRRI_ADDRESS                                              (0x44 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CURRENT_SRRI_RSTMASK                                              0xffff
#define CE11_CURRENT_SRRI_RESET                                                0x0

// 0x48 (CE11_CURRENT_DRRI)
#define CE11_CURRENT_DRRI_V_LSB                                                0
#define CE11_CURRENT_DRRI_V_MSB                                                15
#define CE11_CURRENT_DRRI_V_MASK                                               0xffff
#define CE11_CURRENT_DRRI_V_GET(x)                                             (((x) & CE11_CURRENT_DRRI_V_MASK) >> CE11_CURRENT_DRRI_V_LSB)
#define CE11_CURRENT_DRRI_V_SET(x)                                             (((0 | (x)) << CE11_CURRENT_DRRI_V_LSB) & CE11_CURRENT_DRRI_V_MASK)
#define CE11_CURRENT_DRRI_V_RESET                                              0x0
#define CE11_CURRENT_DRRI_ADDRESS                                              (0x48 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CURRENT_DRRI_RSTMASK                                              0xffff
#define CE11_CURRENT_DRRI_RESET                                                0x0

// 0x4c (CE11_SRC_WATERMARK)
#define CE11_SRC_WATERMARK_LOW_LSB                                             16
#define CE11_SRC_WATERMARK_LOW_MSB                                             31
#define CE11_SRC_WATERMARK_LOW_MASK                                            0xffff0000
#define CE11_SRC_WATERMARK_LOW_GET(x)                                          (((x) & CE11_SRC_WATERMARK_LOW_MASK) >> CE11_SRC_WATERMARK_LOW_LSB)
#define CE11_SRC_WATERMARK_LOW_SET(x)                                          (((0 | (x)) << CE11_SRC_WATERMARK_LOW_LSB) & CE11_SRC_WATERMARK_LOW_MASK)
#define CE11_SRC_WATERMARK_LOW_RESET                                           0x0
#define CE11_SRC_WATERMARK_HIGH_LSB                                            0
#define CE11_SRC_WATERMARK_HIGH_MSB                                            15
#define CE11_SRC_WATERMARK_HIGH_MASK                                           0xffff
#define CE11_SRC_WATERMARK_HIGH_GET(x)                                         (((x) & CE11_SRC_WATERMARK_HIGH_MASK) >> CE11_SRC_WATERMARK_HIGH_LSB)
#define CE11_SRC_WATERMARK_HIGH_SET(x)                                         (((0 | (x)) << CE11_SRC_WATERMARK_HIGH_LSB) & CE11_SRC_WATERMARK_HIGH_MASK)
#define CE11_SRC_WATERMARK_HIGH_RESET                                          0x0
#define CE11_SRC_WATERMARK_ADDRESS                                             (0x4c + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_SRC_WATERMARK_RSTMASK                                             0xffffffff
#define CE11_SRC_WATERMARK_RESET                                               0x0

// 0x50 (CE11_DST_WATERMARK)
#define CE11_DST_WATERMARK_LOW_LSB                                             16
#define CE11_DST_WATERMARK_LOW_MSB                                             31
#define CE11_DST_WATERMARK_LOW_MASK                                            0xffff0000
#define CE11_DST_WATERMARK_LOW_GET(x)                                          (((x) & CE11_DST_WATERMARK_LOW_MASK) >> CE11_DST_WATERMARK_LOW_LSB)
#define CE11_DST_WATERMARK_LOW_SET(x)                                          (((0 | (x)) << CE11_DST_WATERMARK_LOW_LSB) & CE11_DST_WATERMARK_LOW_MASK)
#define CE11_DST_WATERMARK_LOW_RESET                                           0x0
#define CE11_DST_WATERMARK_HIGH_LSB                                            0
#define CE11_DST_WATERMARK_HIGH_MSB                                            15
#define CE11_DST_WATERMARK_HIGH_MASK                                           0xffff
#define CE11_DST_WATERMARK_HIGH_GET(x)                                         (((x) & CE11_DST_WATERMARK_HIGH_MASK) >> CE11_DST_WATERMARK_HIGH_LSB)
#define CE11_DST_WATERMARK_HIGH_SET(x)                                         (((0 | (x)) << CE11_DST_WATERMARK_HIGH_LSB) & CE11_DST_WATERMARK_HIGH_MASK)
#define CE11_DST_WATERMARK_HIGH_RESET                                          0x0
#define CE11_DST_WATERMARK_ADDRESS                                             (0x50 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_DST_WATERMARK_RSTMASK                                             0xffffffff
#define CE11_DST_WATERMARK_RESET                                               0x0

// 0x54 (CE11_CE_DEBUG)
#define CE11_CE_DEBUG_SEL_LSB                                                  0
#define CE11_CE_DEBUG_SEL_MSB                                                  5
#define CE11_CE_DEBUG_SEL_MASK                                                 0x3f
#define CE11_CE_DEBUG_SEL_GET(x)                                               (((x) & CE11_CE_DEBUG_SEL_MASK) >> CE11_CE_DEBUG_SEL_LSB)
#define CE11_CE_DEBUG_SEL_SET(x)                                               (((0 | (x)) << CE11_CE_DEBUG_SEL_LSB) & CE11_CE_DEBUG_SEL_MASK)
#define CE11_CE_DEBUG_SEL_RESET                                                0x0
#define CE11_CE_DEBUG_ADDRESS                                                  (0x54 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CE_DEBUG_RSTMASK                                                  0x3f
#define CE11_CE_DEBUG_RESET                                                    0x0

// 0x58 (CE11_CE_WATCHDOG)
#define CE11_CE_WATCHDOG_STATUS_LSB                                            16
#define CE11_CE_WATCHDOG_STATUS_MSB                                            31
#define CE11_CE_WATCHDOG_STATUS_MASK                                           0xffff0000
#define CE11_CE_WATCHDOG_STATUS_GET(x)                                         (((x) & CE11_CE_WATCHDOG_STATUS_MASK) >> CE11_CE_WATCHDOG_STATUS_LSB)
#define CE11_CE_WATCHDOG_STATUS_SET(x)                                         (((0 | (x)) << CE11_CE_WATCHDOG_STATUS_LSB) & CE11_CE_WATCHDOG_STATUS_MASK)
#define CE11_CE_WATCHDOG_STATUS_RESET                                          0x0
#define CE11_CE_WATCHDOG_LIMIT_LSB                                             0
#define CE11_CE_WATCHDOG_LIMIT_MSB                                             15
#define CE11_CE_WATCHDOG_LIMIT_MASK                                            0xffff
#define CE11_CE_WATCHDOG_LIMIT_GET(x)                                          (((x) & CE11_CE_WATCHDOG_LIMIT_MASK) >> CE11_CE_WATCHDOG_LIMIT_LSB)
#define CE11_CE_WATCHDOG_LIMIT_SET(x)                                          (((0 | (x)) << CE11_CE_WATCHDOG_LIMIT_LSB) & CE11_CE_WATCHDOG_LIMIT_MASK)
#define CE11_CE_WATCHDOG_LIMIT_RESET                                           0xffff
#define CE11_CE_WATCHDOG_ADDRESS                                               (0x58 + __CE11_CE_REG_CSR_BASE_ADDRESS)
#define CE11_CE_WATCHDOG_RSTMASK                                               0xffffffff
#define CE11_CE_WATCHDOG_RESET                                                 0xffff



#endif /* _CE11_CE_REG_CSR_H_ */
