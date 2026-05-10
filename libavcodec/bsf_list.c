static const FFBitStreamFilter * const bitstream_filters[] = {
    &ff_aac_adtstoasc_bsf,
    &ff_dump_extradata_bsf,
    &ff_filter_units_bsf,
    &ff_h264_metadata_bsf,
    &ff_h264_mp4toannexb_bsf,
    &ff_h264_redundant_pps_bsf,
    &ff_hevc_metadata_bsf,
    &ff_hevc_mp4toannexb_bsf,
    &ff_null_bsf,
    &ff_opus_metadata_bsf,
    &ff_pcm_rechunk_bsf,
    NULL };
