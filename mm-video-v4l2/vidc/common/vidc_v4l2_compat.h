/* Compatibility shims for missing VIDC V4L2 controls on older kernels */
#ifndef VIDC_V4L2_COMPAT_H
#define VIDC_V4L2_COMPAT_H

/* ---- Encoder-side shims ---- */
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_VP8_MAX_QP
#define V4L2_CID_MPEG_VIDC_VIDEO_VP8_MAX_QP          (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x3e)
#endif

#ifndef V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE
#define V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE         (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x3f)
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE_ENABLED
#define V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE_ENABLED 1
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE_DISABLED
#define V4L2_CID_MPEG_VIDC_VIDEO_DEINTERLACE_DISABLED 0
#endif

#ifndef V4L2_CID_MPEG_VIDC_VIDEO_LTRMODE
#define V4L2_CID_MPEG_VIDC_VIDEO_LTRMODE             (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x40)
#endif
#ifndef V4L2_MPEG_VIDC_VIDEO_LTR_MODE_DISABLE
#define V4L2_MPEG_VIDC_VIDEO_LTR_MODE_DISABLE        0
#endif
#ifndef V4L2_MPEG_VIDC_VIDEO_LTR_MODE_MANUAL
#define V4L2_MPEG_VIDC_VIDEO_LTR_MODE_MANUAL         1
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_LTRCOUNT
#define V4L2_CID_MPEG_VIDC_VIDEO_LTRCOUNT            (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x41)
#endif
#ifndef V4L2_MPEG_VIDC_EXTRADATA_LTR
#define V4L2_MPEG_VIDC_EXTRADATA_LTR                 20
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_USELTRFRAME
#define V4L2_CID_MPEG_VIDC_VIDEO_USELTRFRAME         (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x42)
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_MARKLTRFRAME
#define V4L2_CID_MPEG_VIDC_VIDEO_MARKLTRFRAME        (V4L2_CID_MPEG_MSM_VIDC_BASE + 0x43)
#endif

/* ---- Decoder-side shims (omx_vdec_msm8974.cpp) ---- */
#ifndef V4L2_EVENT_MSM_VIDC_RELEASE_BUFFER_REFERENCE
#define V4L2_EVENT_MSM_VIDC_RELEASE_BUFFER_REFERENCE (V4L2_EVENT_MSM_VIDC_START + 6)
#endif
#ifndef V4L2_EVENT_MSM_VIDC_RELEASE_UNQUEUED_BUFFER
#define V4L2_EVENT_MSM_VIDC_RELEASE_UNQUEUED_BUFFER  (V4L2_EVENT_MSM_VIDC_START + 7)
#endif

#ifndef V4L2_QCOM_BUF_FLAG_READONLY
#define V4L2_QCOM_BUF_FLAG_READONLY 0x400000
#endif

#ifndef V4L2_CID_MPEG_VIDC_VIDEO_CONCEAL_COLOR
#define V4L2_CID_MPEG_VIDC_VIDEO_CONCEAL_COLOR       (V4L2_CID_MPEG_MSM_VIDC_BASE + 46)
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_ALLOC_MODE_OUTPUT
#define V4L2_CID_MPEG_VIDC_VIDEO_ALLOC_MODE_OUTPUT   (V4L2_CID_MPEG_MSM_VIDC_BASE + 31)
#endif
#ifndef V4L2_MPEG_VIDC_VIDEO_DYNAMIC
#define V4L2_MPEG_VIDC_VIDEO_DYNAMIC                 2
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_STREAM_OUTPUT_MODE
#define V4L2_CID_MPEG_VIDC_VIDEO_STREAM_OUTPUT_MODE  (V4L2_CID_MPEG_MSM_VIDC_BASE + 38)
#endif
#ifndef V4L2_CID_MPEG_VIDC_VIDEO_STREAM_OUTPUT_SECONDARY
#define V4L2_CID_MPEG_VIDC_VIDEO_STREAM_OUTPUT_SECONDARY 1
#endif

#ifndef V4L2_MPEG_VIDC_EXTRADATA_FRAME_QP
#define V4L2_MPEG_VIDC_EXTRADATA_FRAME_QP            18
#endif
#ifndef EXTRADATA_FRAME_QP
#define EXTRADATA_FRAME_QP                           0x0000000F
#endif

#ifndef MSM_VIDC_PAYLOAD_COMPAT_DEFINED
#define MSM_VIDC_PAYLOAD_COMPAT_DEFINED
struct msm_vidc_frame_qp_payload {
    unsigned int frame_qp;
};

struct msm_vidc_s3d_frame_packing_payload {
    unsigned int fpa_id;
    unsigned int cancel_flag;
    unsigned int fpa_type;
    unsigned int quin_cunx_flag;
    unsigned int content_interprtation_type;
    unsigned int spatial_flipping_flag;
    unsigned int frame0_flipped_flag;
    unsigned int field_views_flag;
    unsigned int current_frame_is_frame0_flag;
    unsigned int frame0_self_contained_flag;
    unsigned int frame1_self_contained_flag;
    unsigned int frame0_graid_pos_x;
    unsigned int frame0_graid_pos_y;
    unsigned int frame1_graid_pos_x;
    unsigned int frame1_graid_pos_y;
    unsigned int fpa_reserved_byte;
    unsigned int fpa_repetition_period;
    unsigned int fpa_extension_flag;
};
#endif /* MSM_VIDC_PAYLOAD_COMPAT_DEFINED */

#endif /* VIDC_V4L2_COMPAT_H */
