// #anon_enum$StreamDirection_In=0$StreamDirection_Out=1
// file src/hostapi/alsa/pa_linux_alsa.c line 596
enum anonymous$5 { StreamDirection_In=0, StreamDirection_Out=1 };

// #anon_enum$StreamMode_In=0$StreamMode_Out=1
// file src/hostapi/oss/pa_unix_oss.c line 196
enum anonymous$4 { StreamMode_In=0, StreamMode_Out=1 };

// #anon_enum$paUtilFixedHostBufferSize=0$paUtilBoundedHostBufferSize=1$paUtilUnknownHostBufferSize=2$paUtilVariableHostBufferSizePartialUsageAllowed=3
// file src/common/pa_process.h line 219
enum anonymous$12 { paUtilFixedHostBufferSize=0, paUtilBoundedHostBufferSize=1, paUtilUnknownHostBufferSize=2, paUtilVariableHostBufferSizePartialUsageAllowed=3 };

// tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]
// file src/common/pa_stream.h line 67
struct anonymous$11;

// tag-#anon#ST[*{S8}$S8$'alsaName'||*{S8}$S8$'name'||S32'isPlug'||S32'hasPlayback'||S32'hasCapture'||U32'$pad0'|]
// file src/hostapi/alsa/pa_linux_alsa.c line 984
struct anonymous$19;

// tag-#anon#ST[*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int32_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int32_Clip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int32_DitherClip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int24_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int24_Clip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int24_DitherClip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int16_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int16_Clip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int16_DitherClip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int8_Clip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_Int8_DitherClip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_UInt8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_UInt8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_UInt8_Clip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Float32_To_UInt8_DitherClip'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Float32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int24_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int16_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_Int8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_UInt8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int32_To_UInt8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Float32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Int32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Int16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Int16_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Int8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_Int8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_UInt8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int24_To_UInt8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_Float32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_Int32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_Int24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_Int8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_Int8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_UInt8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int16_To_UInt8_Dither'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int8_To_Float32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int8_To_Int32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int8_To_Int24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int8_To_Int16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Int8_To_UInt8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'UInt8_To_Float32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'UInt8_To_Int32'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'UInt8_To_Int24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'UInt8_To_Int16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'UInt8_To_Int8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Copy_8_To_8'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Copy_16_To_16'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Copy_24_To_24'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'Copy_32_To_32'|]
// file src/common/pa_converters.h line 138
struct anonymous$25;

// tag-#anon#ST[*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'ZeroU8'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'Zero8'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'Zero16'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'Zero24'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'Zero32'|]
// file src/common/pa_converters.h line 233
struct anonymous;

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$2;

// tag-#anon#ST[ARR1{SYM#tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'$pad0'|]#}$SYM#tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'$pad0'|]#$'__cancel_jmp_buf'||ARR4{*{V}$V$}$*{V}$V$$'__pad'|]
// file /usr/include/pthread.h line 525
struct anonymous$18;

// tag-#anon#ST[ARR8{S64}$S64$'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'$pad0'|]
// file /usr/include/pthread.h line 527
struct anonymous$20;

// tag-#anon#ST[F64'samplingPeriod'||F64'measurementStartTime'||F64'averageLoad'|]
// file src/common/pa_cpuload.h line 56
struct anonymous$10;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$17;

// tag-#anon#ST[S32'fd'||U32'$pad0'||*{cS8}$cS8$'devName'||S32'userChannelCount'||S32'hostChannelCount'||S32'userInterleaved'||U32'$pad1'||*{V}$V$'buffer'||U64'userFormat'||U64'hostFormat'||F64'latency'||U64'hostFrames'||U64'numBufs'||*{*{V}$V$}$*{V}$V$$'userBuffers'|]
// file src/hostapi/oss/pa_unix_oss.c line 149
struct anonymous$3;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous$24;

// tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]
// file src/common/pa_allocation.h line 65
struct anonymous$14;

// tag-#anon#ST[SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#'mtx'|]
// file ./src/os/unix/pa_unix_util.h line 137
struct anonymous$7;

// tag-#anon#ST[SYM#tag-PaUtilHostApiRepresentation#'commonHostApiRep'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'callbackStreamInterface'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'blockingStreamInterface'||*{SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#}$SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#$'deviceInfoMemory'||*{SYM#tag-_jack_client#}$SYM#tag-_jack_client#$'jack_client'||S32'jack_buffer_size'||S32'hostApiIndex'||SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#'mtx'||SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#'cond'||U64'inputBase'||U64'outputBase'||vS32'xrun'||U32'$pad0'||v*{SYM#tag-PaJackStream#}$SYM#tag-PaJackStream#$'toAdd'||v*{SYM#tag-PaJackStream#}$SYM#tag-PaJackStream#$'toRemove'||*{SYM#tag-PaJackStream#}$SYM#tag-PaJackStream#$'processQueue'||vS32'jackIsDown'||U32'$pad1'|]
// file src/hostapi/jack/pa_jack.c line 157
struct anonymous$21;

// tag-#anon#ST[SYM#tag-PaUtilHostApiRepresentation#'inheritedHostApiRep'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'callbackStreamInterface'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'blockingStreamInterface'||*{SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#}$SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#$'allocations'|]
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 113
struct anonymous$15;

// tag-#anon#ST[SYM#tag-PaUtilHostApiRepresentation#'inheritedHostApiRep'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'callbackStreamInterface'||SYM#tag-#anon#ST[*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Close'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Start'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Stop'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'Abort'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsStopped'||*{S32(*{V}$V$)->S32}$S32(*{V}$V$)->S32$'IsActive'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetTime'||*{F64(*{V}$V$)->F64}$F64(*{V}$V$)->F64$'GetCpuLoad'||*{S32(*{V}$V$|*{V}$V$|U64)->S32}$S32(*{V}$V$|*{V}$V$|U64)->S32$'Read'||*{S32(*{V}$V$|*{cV}$cV$|U64)->S32}$S32(*{V}$V$|*{cV}$cV$|U64)->S32$'Write'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetReadAvailable'||*{S64(*{V}$V$)->S64}$S64(*{V}$V$)->S64$'GetWriteAvailable'|]#'blockingStreamInterface'||*{SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#}$SYM#tag-#anon#ST[S64'linkCount'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'linkBlocks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'spareLinks'||*{SYM#tag-PaUtilAllocationGroupLink#}$SYM#tag-PaUtilAllocationGroupLink#$'allocations'|]#$'allocations'||S32'hostApiIndex'||U32'$pad0'|]
// file src/hostapi/oss/pa_unix_oss.c line 130
struct anonymous$1;

// tag-#anon#ST[U64'callbackThread'|]
// file ./src/os/unix/pa_unix_util.h line 112
struct anonymous$0;

// tag-#anon#ST[U64'framesPerUserBuffer'||U64'framesPerHostBuffer'||EN#anon_enum$paUtilFixedHostBufferSize=0$paUtilBoundedHostBufferSize=1$paUtilUnknownHostBufferSize=2$paUtilVariableHostBufferSizePartialUsageAllowed=3#{U32}$U32$'hostBufferSizeMode'||S32'useNonAdaptingProcess'||S32'userOutputSampleFormatIsEqualToHost'||S32'userInputSampleFormatIsEqualToHost'||U64'framesPerTempBuffer'||U32'inputChannelCount'||U32'bytesPerHostInputSample'||U32'bytesPerUserInputSample'||S32'userInputIsInterleaved'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'inputConverter'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'inputZeroer'||U32'outputChannelCount'||U32'bytesPerHostOutputSample'||U32'bytesPerUserOutputSample'||S32'userOutputIsInterleaved'||*{V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V}$V(*{V}$V$|S32|*{V}$V$|S32|U32|*{SYM#tag-PaUtilTriangularDitherGenerator#}$SYM#tag-PaUtilTriangularDitherGenerator#$)->V$'outputConverter'||*{V(*{V}$V$|S32|U32)->V}$V(*{V}$V$|S32|U32)->V$'outputZeroer'||U64'initialFramesInTempInputBuffer'||U64'initialFramesInTempOutputBuffer'||*{V}$V$'tempInputBuffer'||*{*{V}$V$}$*{V}$V$$'tempInputBufferPtrs'||U64'framesInTempInputBuffer'||*{V}$V$'tempOutputBuffer'||*{*{V}$V$}$*{V}$V$$'tempOutputBufferPtrs'||U64'framesInTempOutputBuffer'||*{SYM#tag-PaStreamCallbackTimeInfo#}$SYM#tag-PaStreamCallbackTimeInfo#$'timeInfo'||U64'callbackStatusFlags'||S32'hostInputIsInterleaved'||U32'$pad0'||ARR2{U64}$U64$'hostInputFrameCount'||ARR2{*{SYM#tag-PaUtilChannelDescriptor#}$SYM#tag-PaUtilChannelDescriptor#$}$*{SYM#tag-PaUtilChannelDescriptor#}$SYM#tag-PaUtilChannelDescriptor#$$'hostInputChannels'||S32'hostOutputIsInterleaved'||U32'$pad1'||ARR2{U64}$U64$'hostOutputFrameCount'||ARR2{*{SYM#tag-PaUtilChannelDescriptor#}$SYM#tag-PaUtilChannelDescriptor#$}$*{SYM#tag-PaUtilChannelDescriptor#}$SYM#tag-PaUtilChannelDescriptor#$$'hostOutputChannels'||SYM#tag-PaUtilTriangularDitherGenerator#'ditherGenerator'||U32'$pad2'||F64'samplePeriod'||*{S32(*{cV}$cV$|*{V}$V$|U64|*{cSYM#tag-PaStreamCallbackTimeInfo#}$cSYM#tag-PaStreamCallbackTimeInfo#$|U64|*{V}$V$)->S32}$S32(*{cV}$cV$|*{V}$V$|U64|*{cSYM#tag-PaStreamCallbackTimeInfo#}$cSYM#tag-PaStreamCallbackTimeInfo#$|U64|*{V}$V$)->S32$'streamCallback'||*{V}$V$'userData'|]
// file src/common/pa_process.h line 253
struct anonymous$13;

// tag-#anon#ST[U64'hostSampleFormat'||S32'numUserChannels'||S32'numHostChannels'||S32'userInterleaved'||S32'hostInterleaved'||S32'canMmap'||U32'$pad0'||*{V}$V$'nonMmapBuffer'||U32'nonMmapBufferSize'||S32'device'||S32'deviceIsPlug'||S32'useReventFix'||*{SYM#tag-_snd_pcm#}$SYM#tag-_snd_pcm#$'pcm'||U64'framesPerPeriod'||U64'alsaBufferSize'||ENtag-_snd_pcm_format#{S32}$S32$'nativeFormat'||U32'nfds'||S32'ready'||U32'$pad1'||*{*{V}$V$}$*{V}$V$$'userBuffers'||U64'offset'||EN#anon_enum$StreamDirection_In=0$StreamDirection_Out=1#{U32}$U32$'streamDir'||U32'$pad2'||*{SYM#tag-_snd_pcm_channel_area#}$SYM#tag-_snd_pcm_channel_area#$'channelAreas'||S32'card'||U32'$pad3'|]
// file src/hostapi/alsa/pa_linux_alsa.c line 602
struct anonymous$16;

// tag-#anon#ST[U64'thread'||S32'parentWaiting'||S32'stopRequested'||S32'locked'||U32'$pad0'||SYM#tag-#anon#ST[SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#'mtx'|]#'mtx'||SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#'cond'||vS32'stopRequest'||U32'$pad1'|]
// file ./src/os/unix/pa_unix_util.h line 147
struct anonymous$6;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$22;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$23;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$9;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$8;

// tag-JackOptions
// file /usr/include/jack/types.h line 90
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /usr/include/jack/types.h line 149
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

// tag-PaAlsaDeviceInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 677
struct PaAlsaDeviceInfo;

// tag-PaAlsaHostApiRepresentation
// file src/hostapi/alsa/pa_linux_alsa.c line 664
struct PaAlsaHostApiRepresentation;

// tag-PaAlsaStream
// file src/hostapi/alsa/pa_linux_alsa.c line 628
struct PaAlsaStream;

// tag-PaAlsaStreamInfo
// file ./include/pa_linux_alsa.h line 53
struct PaAlsaStreamInfo;

// tag-PaDeviceInfo
// file ./include/portaudio.h line 449
struct PaDeviceInfo;

// tag-PaHostApiInfo
// file ./include/portaudio.h line 245
struct PaHostApiInfo;

// tag-PaHostApiTypeId
// file ./include/portaudio.h line 224
enum PaHostApiTypeId { paInDevelopment=0, paDirectSound=1, paMME=2, paASIO=3, paSoundManager=4, paCoreAudio=5, paOSS=7, paALSA=8, paAL=9, paBeOS=10, paWDMKS=11, paJACK=12, paWASAPI=13, paAudioScienceHPI=14 };

// tag-PaHostErrorInfo
// file ./include/portaudio.h line 338
struct PaHostErrorInfo;

// tag-PaJackStream
// file src/hostapi/jack/pa_jack.c line 155
struct PaJackStream;

// tag-PaOssStream
// file src/hostapi/oss/pa_unix_oss.c line 165
struct PaOssStream;

// tag-PaSkeletonStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 356
struct PaSkeletonStream;

// tag-PaStreamCallbackTimeInfo
// file ./include/portaudio.h line 648
struct PaStreamCallbackTimeInfo;

// tag-PaStreamInfo
// file ./include/portaudio.h line 988
struct PaStreamInfo;

// tag-PaStreamParameters
// file ./include/portaudio.h line 487
struct PaStreamParameters;

// tag-PaUtilAllocationGroupLink
// file src/common/pa_allocation.h line 68
struct PaUtilAllocationGroupLink;

// tag-PaUtilChannelDescriptor
// file src/common/pa_process.h line 242
struct PaUtilChannelDescriptor;

// tag-PaUtilHostApiRepresentation
// file src/common/pa_util.h line 60
struct PaUtilHostApiRepresentation;

// tag-PaUtilHostApiSpecificStreamInfoHeader
// file src/common/pa_hostapi.h line 182
struct PaUtilHostApiSpecificStreamInfoHeader;

// tag-PaUtilPrivatePaFrontHostApiInfo
// file src/common/pa_hostapi.h line 167
struct PaUtilPrivatePaFrontHostApiInfo;

// tag-PaUtilRingBuffer
// file ./src/common/pa_ringbuffer.h line 93
struct PaUtilRingBuffer;

// tag-PaUtilStreamRepresentation
// file src/common/pa_stream.h line 147
struct PaUtilStreamRepresentation;

// tag-PaUtilTriangularDitherGenerator
// file src/common/pa_converters.h line 57
struct PaUtilTriangularDitherGenerator;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__jmp_buf_tag
// file /usr/include/pthread.h line 744
struct __jmp_buf_tag;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_jack_client
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-_snd_config
// file /usr/include/alsa/conf.h line 69
struct _snd_config;

// tag-_snd_config_iterator
// file /usr/include/alsa/conf.h line 77
struct _snd_config_iterator;

// tag-_snd_ctl
// file /usr/include/alsa/control.h line 214
struct _snd_ctl;

// tag-_snd_ctl_card_info
// file /usr/include/alsa/control.h line 54
struct _snd_ctl_card_info;

// tag-_snd_output
// file /usr/include/alsa/output.h line 54
struct _snd_output;

// tag-_snd_pcm
// file /usr/include/alsa/pcm.h line 354
struct _snd_pcm;

// tag-_snd_pcm_access
// file /usr/include/alsa/pcm.h line 108
enum _snd_pcm_access { SND_PCM_ACCESS_MMAP_INTERLEAVED=0, SND_PCM_ACCESS_MMAP_NONINTERLEAVED=1, SND_PCM_ACCESS_MMAP_COMPLEX=2, SND_PCM_ACCESS_RW_INTERLEAVED=3, SND_PCM_ACCESS_RW_NONINTERLEAVED=4, SND_PCM_ACCESS_LAST=4 };

// tag-_snd_pcm_channel_area
// file /usr/include/alsa/pcm.h line 428
struct _snd_pcm_channel_area;

// tag-_snd_pcm_format
// file /usr/include/alsa/pcm.h line 123
enum _snd_pcm_format { SND_PCM_FORMAT_UNKNOWN=-1, SND_PCM_FORMAT_S8=0, SND_PCM_FORMAT_U8=1, SND_PCM_FORMAT_S16_LE=2, SND_PCM_FORMAT_S16_BE=3, SND_PCM_FORMAT_U16_LE=4, SND_PCM_FORMAT_U16_BE=5, SND_PCM_FORMAT_S24_LE=6, SND_PCM_FORMAT_S24_BE=7, SND_PCM_FORMAT_U24_LE=8, SND_PCM_FORMAT_U24_BE=9, SND_PCM_FORMAT_S32_LE=10, SND_PCM_FORMAT_S32_BE=11, SND_PCM_FORMAT_U32_LE=12, SND_PCM_FORMAT_U32_BE=13, SND_PCM_FORMAT_FLOAT_LE=14, SND_PCM_FORMAT_FLOAT_BE=15, SND_PCM_FORMAT_FLOAT64_LE=16, SND_PCM_FORMAT_FLOAT64_BE=17, SND_PCM_FORMAT_IEC958_SUBFRAME_LE=18, SND_PCM_FORMAT_IEC958_SUBFRAME_BE=19, SND_PCM_FORMAT_MU_LAW=20, SND_PCM_FORMAT_A_LAW=21, SND_PCM_FORMAT_IMA_ADPCM=22, SND_PCM_FORMAT_MPEG=23, SND_PCM_FORMAT_GSM=24, SND_PCM_FORMAT_SPECIAL=31, SND_PCM_FORMAT_S24_3LE=32, SND_PCM_FORMAT_S24_3BE=33, SND_PCM_FORMAT_U24_3LE=34, SND_PCM_FORMAT_U24_3BE=35, SND_PCM_FORMAT_S20_3LE=36, SND_PCM_FORMAT_S20_3BE=37, SND_PCM_FORMAT_U20_3LE=38, SND_PCM_FORMAT_U20_3BE=39, SND_PCM_FORMAT_S18_3LE=40, SND_PCM_FORMAT_S18_3BE=41, SND_PCM_FORMAT_U18_3LE=42, SND_PCM_FORMAT_U18_3BE=43, SND_PCM_FORMAT_G723_24=44, SND_PCM_FORMAT_G723_24_1B=45, SND_PCM_FORMAT_G723_40=46, SND_PCM_FORMAT_G723_40_1B=47, SND_PCM_FORMAT_DSD_U8=48, SND_PCM_FORMAT_DSD_U16_LE=49, SND_PCM_FORMAT_DSD_U32_LE=50, SND_PCM_FORMAT_DSD_U16_BE=51, SND_PCM_FORMAT_DSD_U32_BE=52, SND_PCM_FORMAT_LAST=52, SND_PCM_FORMAT_S16=2, SND_PCM_FORMAT_U16=4, SND_PCM_FORMAT_S24=6, SND_PCM_FORMAT_U24=8, SND_PCM_FORMAT_S32=10, SND_PCM_FORMAT_U32=12, SND_PCM_FORMAT_FLOAT=14, SND_PCM_FORMAT_FLOAT64=16, SND_PCM_FORMAT_IEC958_SUBFRAME=18 };

// tag-_snd_pcm_hw_params
// file /usr/include/alsa/pcm.h line 62
struct _snd_pcm_hw_params;

// tag-_snd_pcm_info
// file /usr/include/alsa/pcm.h line 46
struct _snd_pcm_info;

// tag-_snd_pcm_state
// file /usr/include/alsa/pcm.h line 273
enum _snd_pcm_state { SND_PCM_STATE_OPEN=0, SND_PCM_STATE_SETUP=1, SND_PCM_STATE_PREPARED=2, SND_PCM_STATE_RUNNING=3, SND_PCM_STATE_XRUN=4, SND_PCM_STATE_DRAINING=5, SND_PCM_STATE_PAUSED=6, SND_PCM_STATE_SUSPENDED=7, SND_PCM_STATE_DISCONNECTED=8, SND_PCM_STATE_LAST=8 };

// tag-_snd_pcm_status
// file /usr/include/alsa/pcm.h line 67
struct _snd_pcm_status;

// tag-_snd_pcm_stream
// file /usr/include/alsa/pcm.h line 99
enum _snd_pcm_stream { SND_PCM_STREAM_PLAYBACK=0, SND_PCM_STREAM_CAPTURE=1, SND_PCM_STREAM_LAST=1 };

// tag-_snd_pcm_sw_params
// file /usr/include/alsa/pcm.h line 65
struct _snd_pcm_sw_params;

// tag-_snd_pcm_tstamp
// file /usr/include/alsa/pcm.h line 314
enum _snd_pcm_tstamp { SND_PCM_TSTAMP_NONE=0, SND_PCM_TSTAMP_ENABLE=1, SND_PCM_TSTAMP_MMAP=1, SND_PCM_TSTAMP_LAST=1 };

// tag-audio_buf_info
// file /usr/include/linux/soundcard.h line 568
struct audio_buf_info;

// tag-count_info
// file /usr/include/linux/soundcard.h line 602
struct count_info;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// AbortStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 690
static signed int AbortStream(void *s);
// AbortStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3133
static signed int AbortStream$link1(void *s$link1);
// AbortStream$link2
// file src/hostapi/jack/pa_jack.c line 1713
static signed int AbortStream$link2(void *s$link2);
// AbortStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1862
static signed int AbortStream$link3(void *s$link3);
// AdaptingInputOnlyProcess
// file src/common/pa_process.c line 970
static unsigned long int AdaptingInputOnlyProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostInputChannels, unsigned long int framesToProcess);
// AdaptingOutputOnlyProcess
// file src/common/pa_process.c line 1077
static unsigned long int AdaptingOutputOnlyProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostOutputChannels, unsigned long int framesToProcess);
// AdaptingProcess
// file src/common/pa_process.c line 1287
static unsigned long int AdaptingProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, signed int processPartialUserBuffers);
// AddOpenStream
// file src/common/pa_front.c line 271
static void AddOpenStream(void *stream);
// AddStream
// file src/hostapi/jack/pa_jack.c line 1024
static signed int AddStream(struct PaJackStream *stream);
// AllocateLinks
// file src/common/pa_allocation.c line 75
static struct PaUtilAllocationGroupLink * AllocateLinks(signed long int count, struct PaUtilAllocationGroupLink *nextBlock, struct PaUtilAllocationGroupLink *nextSpare);
// AlsaOpen
// file src/hostapi/alsa/pa_linux_alsa.c line 1713
static signed int AlsaOpen(const struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *params, enum anonymous$5 streamDir, struct _snd_pcm **pcm);
// AlsaRestart
// file src/hostapi/alsa/pa_linux_alsa.c line 3240
static signed int AlsaRestart(struct PaAlsaStream *stream);
// AlsaStart
// file src/hostapi/alsa/pa_linux_alsa.c line 2909
static signed int AlsaStart(struct PaAlsaStream *stream, signed int priming);
// AlsaStop
// file src/hostapi/alsa/pa_linux_alsa.c line 3020
static signed int AlsaStop(struct PaAlsaStream *stream, signed int abort);
// BlockingBegin
// file src/hostapi/jack/pa_jack.c line 307
static signed int BlockingBegin(struct PaJackStream *stream, signed int minimum_buffer_size);
// BlockingCallback
// file src/hostapi/jack/pa_jack.c line 276
static signed int BlockingCallback(const void *inputBuffer, void *outputBuffer, unsigned long int framesPerBuffer, const struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int statusFlags, void *userData);
// BlockingEnd
// file src/hostapi/jack/pa_jack.c line 347
static void BlockingEnd(struct PaJackStream *stream);
// BlockingGetStreamReadAvailable
// file src/hostapi/jack/pa_jack.c line 420
static signed long int BlockingGetStreamReadAvailable(void *s);
// BlockingGetStreamWriteAvailable
// file src/hostapi/jack/pa_jack.c line 429
static signed long int BlockingGetStreamWriteAvailable(void *s);
// BlockingInitFIFO
// file src/hostapi/jack/pa_jack.c line 258
static signed int BlockingInitFIFO(struct PaUtilRingBuffer *rbuf, signed long int numFrames, signed long int bytesPerFrame);
// BlockingReadStream
// file src/hostapi/jack/pa_jack.c line 355
static signed int BlockingReadStream(void *s, void *data, unsigned long int numFrames);
// BlockingTermFIFO
// file src/hostapi/jack/pa_jack.c line 268
static signed int BlockingTermFIFO(struct PaUtilRingBuffer *rbuf);
// BlockingWaitEmpty
// file src/hostapi/jack/pa_jack.c line 438
static signed int BlockingWaitEmpty(void *s);
// BlockingWriteStream
// file src/hostapi/jack/pa_jack.c line 381
static signed int BlockingWriteStream(void *s, const void *data, unsigned long int numFrames);
// BoostPriority
// file src/os/unix/pa_unix_util.c line 245
static signed int BoostPriority(struct anonymous$6 *self);
// BuildDeviceList
// file src/hostapi/alsa/pa_linux_alsa.c line 1228
static signed int BuildDeviceList(struct PaAlsaHostApiRepresentation *alsaApi);
// BuildDeviceList$link1
// file src/hostapi/jack/pa_jack.c line 459
static signed int BuildDeviceList$link1(struct anonymous$21 *jackApi);
// BuildDeviceList$link2
// file src/hostapi/oss/pa_unix_oss.c line 521
static signed int BuildDeviceList$link2(struct anonymous$1 *ossApi);
// CalcHigherLogTwo
// file src/hostapi/oss/pa_unix_oss.c line 321
static signed int CalcHigherLogTwo(signed int n);
// CalculateFrameShift
// file src/common/pa_process.c line 73
static unsigned long int CalculateFrameShift(unsigned long int M, unsigned long int N);
// CalculatePollTimeout
// file src/hostapi/alsa/pa_linux_alsa.c line 2218
static signed int CalculatePollTimeout(const struct PaAlsaStream *stream, unsigned long int frames);
// CalculateTimeInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 3405
static void CalculateTimeInfo(struct PaAlsaStream *stream, struct PaStreamCallbackTimeInfo *timeInfo);
// CallbackThreadFunc
// file src/hostapi/alsa/pa_linux_alsa.c line 4172
static void * CallbackThreadFunc(void *userData);
// CallbackThreadFunc::1::1::__cancel_routine$object
//
void __cancel_routine$object(void *);
// CleanUpStream
// file src/hostapi/jack/pa_jack.c line 972
static void CleanUpStream(struct PaJackStream *stream, signed int terminateStreamRepresentation, signed int terminateBufferProcessor);
// CloseOpenStreams
// file src/common/pa_front.c line 306
static void CloseOpenStreams(void);
// CloseStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 639
static signed int CloseStream(void *s);
// CloseStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2877
static signed int CloseStream$link1(void *s$link1);
// CloseStream$link2
// file src/hostapi/jack/pa_jack.c line 1330
static signed int CloseStream$link2(void *s$link2);
// CloseStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1779
static signed int CloseStream$link3(void *s$link3);
// ContinuePoll
// file src/hostapi/alsa/pa_linux_alsa.c line 3325
static signed int ContinuePoll(const struct PaAlsaStream *stream, enum anonymous$5 streamDir, signed int *pollTimeout, signed int *continuePoll);
// CopyTempOutputBuffersToHostOutputBuffers
// file src/common/pa_process.c line 1206
static void CopyTempOutputBuffersToHostOutputBuffers(struct anonymous$13 *bp);
// Copy_16_To_16
// file src/common/pa_converters.c line 1715
static void Copy_16_To_16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Copy_24_To_24
// file src/common/pa_converters.c line 1736
static void Copy_24_To_24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Copy_32_To_32
// file src/common/pa_converters.c line 1759
static void Copy_32_To_32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Copy_8_To_8
// file src/common/pa_converters.c line 1694
static void Copy_8_To_8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// CountHostApiInitializers
// file src/common/pa_front.c line 129
static signed int CountHostApiInitializers(void);
// ExampleHostProcessingLoop
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 550
static void ExampleHostProcessingLoop(void *inputBuffer, void *outputBuffer, void *userData);
// ExtractAddress
// file src/hostapi/alsa/pa_linux_alsa.c line 3511
static unsigned char * ExtractAddress(const struct _snd_pcm_channel_area *area, unsigned long int offset);
// FillInDevInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 1150
static signed int FillInDevInfo(struct PaAlsaHostApiRepresentation *alsaApi, struct anonymous$19 *deviceHwInfo, signed int blocking, struct PaAlsaDeviceInfo *devInfo, signed int *devIdx);
// FindDeviceName
// file src/hostapi/alsa/pa_linux_alsa.c line 1031
static const struct anonymous$19 * FindDeviceName(const char *name);
// FindHostApi
// file src/common/pa_front.c line 243
static signed int FindHostApi(signed int device, signed int *hostSpecificDeviceIndex);
// Float32_To_Int16
// file src/common/pa_converters.c line 593
static void Float32_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int16_Clip
// file src/common/pa_converters.c line 647
static void Float32_To_Int16_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int16_Dither
// file src/common/pa_converters.c line 619
static void Float32_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int16_DitherClip
// file src/common/pa_converters.c line 673
static void Float32_To_Int16_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int24
// file src/common/pa_converters.c line 451
static void Float32_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int24_Clip
// file src/common/pa_converters.c line 521
static void Float32_To_Int24_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int24_Dither
// file src/common/pa_converters.c line 485
static void Float32_To_Int24_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int24_DitherClip
// file src/common/pa_converters.c line 556
static void Float32_To_Int24_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int32
// file src/common/pa_converters.c line 334
static void Float32_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int32_Clip
// file src/common/pa_converters.c line 390
static void Float32_To_Int32_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int32_Dither
// file src/common/pa_converters.c line 361
static void Float32_To_Int32_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int32_DitherClip
// file src/common/pa_converters.c line 419
static void Float32_To_Int32_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int8
// file src/common/pa_converters.c line 703
static void Float32_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int8_Clip
// file src/common/pa_converters.c line 747
static void Float32_To_Int8_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int8_Dither
// file src/common/pa_converters.c line 724
static void Float32_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_Int8_DitherClip
// file src/common/pa_converters.c line 769
static void Float32_To_Int8_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_UInt8
// file src/common/pa_converters.c line 794
static void Float32_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_UInt8_Clip
// file src/common/pa_converters.c line 838
static void Float32_To_UInt8_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_UInt8_Dither
// file src/common/pa_converters.c line 815
static void Float32_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Float32_To_UInt8_DitherClip
// file src/common/pa_converters.c line 860
static void Float32_To_UInt8_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// GCD
// file src/common/pa_process.c line 60
static unsigned long int GCD(unsigned long int a, unsigned long int b);
// GetAlsaStreamPointer
// file src/hostapi/alsa/pa_linux_alsa.c line 4566
static signed int GetAlsaStreamPointer(void *s, struct PaAlsaStream **stream);
// GetAvailableFormats
// file src/hostapi/alsa/pa_linux_alsa.c line 1521
static unsigned long int GetAvailableFormats(struct _snd_pcm *pcm);
// GetAvailableFormats$link1
// file src/hostapi/oss/pa_unix_oss.c line 951
static signed int GetAvailableFormats$link1(struct anonymous$3 *component, unsigned long int *availableFormats);
// GetDeviceInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 726
static const struct PaAlsaDeviceInfo * GetDeviceInfo(const struct PaUtilHostApiRepresentation *hostApi, signed int device);
// GetExactSampleRate
// file src/hostapi/alsa/pa_linux_alsa.c line 3224
static signed int GetExactSampleRate(struct _snd_pcm_hw_params *hwParams, double *sampleRate);
// GetStreamCpuLoad
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 743
static double GetStreamCpuLoad(void *s);
// GetStreamCpuLoad$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3183
static double GetStreamCpuLoad$link1(void *s$link1);
// GetStreamCpuLoad$link2
// file src/hostapi/jack/pa_jack.c line 1742
static double GetStreamCpuLoad$link2(void *s$link2);
// GetStreamCpuLoad$link3
// file src/hostapi/oss/pa_unix_oss.c line 1912
static double GetStreamCpuLoad$link3(void *s$link3);
// GetStreamReadAvailable
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 791
static signed long int GetStreamReadAvailable(void *s);
// GetStreamReadAvailable$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4493
static signed long int GetStreamReadAvailable$link1(void *s$link1);
// GetStreamReadAvailable$link2
// file src/hostapi/oss/pa_unix_oss.c line 2014
static signed long int GetStreamReadAvailable$link2(void *s$link2);
// GetStreamTime
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 730
static double GetStreamTime(void *s);
// GetStreamTime$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3156
static double GetStreamTime$link1(void *s$link1);
// GetStreamTime$link2
// file src/hostapi/jack/pa_jack.c line 1733
static double GetStreamTime$link2(void *s$link2);
// GetStreamTime$link3
// file src/hostapi/oss/pa_unix_oss.c line 1887
static double GetStreamTime$link3(void *s$link3);
// GetStreamWriteAvailable
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 804
static signed long int GetStreamWriteAvailable(void *s);
// GetStreamWriteAvailable$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4515
static signed long int GetStreamWriteAvailable$link1(void *s$link1);
// GetStreamWriteAvailable$link2
// file src/hostapi/oss/pa_unix_oss.c line 2029
static signed long int GetStreamWriteAvailable$link2(void *s$link2);
// GropeDevice
// file src/hostapi/alsa/pa_linux_alsa.c line 835
static signed int GropeDevice(struct _snd_pcm *pcm, signed int isPlug, enum anonymous$5 mode, signed int openBlocking, struct PaAlsaDeviceInfo *devInfo);
// IgnorePlugin
// file src/hostapi/alsa/pa_linux_alsa.c line 1065
static signed int IgnorePlugin(const char *pluginId);
// InitializeDeviceInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 951
static void InitializeDeviceInfo(struct PaDeviceInfo *deviceInfo);
// InitializeHostApis
// file src/common/pa_front.c line 161
static signed int InitializeHostApis(void);
// InitializeStream
// file src/hostapi/jack/pa_jack.c line 926
static signed int InitializeStream(struct PaJackStream *stream, struct anonymous$21 *hostApi, signed int numInputChannels, signed int numOutputChannels);
// Int16_To_Float32
// file src/common/pa_converters.c line 1317
static void Int16_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_Int24
// file src/common/pa_converters.c line 1362
static void Int16_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_Int32
// file src/common/pa_converters.c line 1338
static void Int16_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_Int8
// file src/common/pa_converters.c line 1394
static void Int16_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_Int8_Dither
// file src/common/pa_converters.c line 1414
static void Int16_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_UInt8
// file src/common/pa_converters.c line 1434
static void Int16_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int16_To_UInt8_Dither
// file src/common/pa_converters.c line 1454
static void Int16_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Float32
// file src/common/pa_converters.c line 1073
static void Int24_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Int16
// file src/common/pa_converters.c line 1139
static void Int24_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Int16_Dither
// file src/common/pa_converters.c line 1173
static void Int24_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Int32
// file src/common/pa_converters.c line 1106
static void Int24_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Int8
// file src/common/pa_converters.c line 1207
static void Int24_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_Int8_Dither
// file src/common/pa_converters.c line 1237
static void Int24_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_UInt8
// file src/common/pa_converters.c line 1271
static void Int24_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int24_To_UInt8_Dither
// file src/common/pa_converters.c line 1301
static void Int24_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Float32
// file src/common/pa_converters.c line 885
static void Int32_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int16
// file src/common/pa_converters.c line 949
static void Int32_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int16_Dither
// file src/common/pa_converters.c line 969
static void Int32_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int24
// file src/common/pa_converters.c line 905
static void Int32_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int24_Dither
// file src/common/pa_converters.c line 933
static void Int32_To_Int24_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int8
// file src/common/pa_converters.c line 991
static void Int32_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_Int8_Dither
// file src/common/pa_converters.c line 1011
static void Int32_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_UInt8
// file src/common/pa_converters.c line 1033
static void Int32_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int32_To_UInt8_Dither
// file src/common/pa_converters.c line 1053
static void Int32_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int8_To_Float32
// file src/common/pa_converters.c line 1474
static void Int8_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int8_To_Int16
// file src/common/pa_converters.c line 1544
static void Int8_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int8_To_Int24
// file src/common/pa_converters.c line 1515
static void Int8_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int8_To_Int32
// file src/common/pa_converters.c line 1495
static void Int8_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// Int8_To_UInt8
// file src/common/pa_converters.c line 1564
static void Int8_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// IsFormatSupported
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 260
static signed int IsFormatSupported(struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate);
// IsFormatSupported$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 1827
static signed int IsFormatSupported$link1(struct PaUtilHostApiRepresentation *hostApi$link1, const struct PaStreamParameters *inputParameters$link1, const struct PaStreamParameters *outputParameters$link1, double sampleRate$link1);
// IsFormatSupported$link2
// file src/hostapi/jack/pa_jack.c line 839
static signed int IsFormatSupported$link2(struct PaUtilHostApiRepresentation *hostApi$link2, const struct PaStreamParameters *inputParameters$link2, const struct PaStreamParameters *outputParameters$link2, double sampleRate$link2);
// IsFormatSupported$link3
// file src/hostapi/oss/pa_unix_oss.c line 605
static signed int IsFormatSupported$link3(struct PaUtilHostApiRepresentation *hostApi$link3, const struct PaStreamParameters *inputParameters$link3, const struct PaStreamParameters *outputParameters$link3, double sampleRate$link3);
// IsStreamActive
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 717
static signed int IsStreamActive(void *s);
// IsStreamActive$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3150
static signed int IsStreamActive$link1(void *s$link1);
// IsStreamActive$link2
// file src/hostapi/jack/pa_jack.c line 1726
static signed int IsStreamActive$link2(void *s$link2);
// IsStreamActive$link3
// file src/hostapi/oss/pa_unix_oss.c line 1880
static signed int IsStreamActive$link3(void *s$link3);
// IsStreamStopped
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 704
static signed int IsStreamStopped(void *s);
// IsStreamStopped$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3142
static signed int IsStreamStopped$link1(void *s$link1);
// IsStreamStopped$link2
// file src/hostapi/jack/pa_jack.c line 1719
static signed int IsStreamStopped$link2(void *s$link2);
// IsStreamStopped$link3
// file src/hostapi/oss/pa_unix_oss.c line 1870
static signed int IsStreamStopped$link3(void *s$link3);
// JackCallback
// file src/hostapi/jack/pa_jack.c line 1501
static signed int JackCallback(unsigned int frames, void *userData);
// JackErrorCallback
// file src/hostapi/jack/pa_jack.c line 652
static void JackErrorCallback(const char *msg);
// JackOnShutdown
// file src/hostapi/jack/pa_jack.c line 662
static void JackOnShutdown(void *arg);
// JackSrCb
// file src/hostapi/jack/pa_jack.c line 681
static signed int JackSrCb(unsigned int nframes, void *arg);
// JackXRunCb
// file src/hostapi/jack/pa_jack.c line 701
static signed int JackXRunCb(void *arg);
// LCM
// file src/common/pa_process.c line 66
static unsigned long int LCM(unsigned long int a, unsigned long int b);
// LogAllAvailableFormats
// file src/hostapi/alsa/pa_linux_alsa.c line 1556
static void LogAllAvailableFormats(struct _snd_pcm *pcm);
// ModifyBlocking
// file src/hostapi/oss/pa_unix_oss.c line 788
static signed int ModifyBlocking(signed int fd, signed int blocking);
// NonAdaptingProcess
// file src/common/pa_process.c line 704
static unsigned long int NonAdaptingProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostInputChannels, struct PaUtilChannelDescriptor *hostOutputChannels, unsigned long int framesToProcess);
// OnExit
// file src/hostapi/alsa/pa_linux_alsa.c line 3383
static void OnExit(void *data);
// OnExit$link1
// file src/hostapi/oss/pa_unix_oss.c line 1555
static void OnExit$link1(void *data$link1);
// OpenDevices
// file src/hostapi/oss/pa_unix_oss.c line 811
static signed int OpenDevices(const char *idevName, const char *odevName, signed int *idev, signed int *odev);
// OpenPcm
// file src/hostapi/alsa/pa_linux_alsa.c line 1122
static signed int OpenPcm(struct _snd_pcm **pcmp, const char *name, enum _snd_pcm_stream stream, signed int mode, signed int waitOnBusy);
// OpenStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 371
static signed int OpenStream(struct PaUtilHostApiRepresentation *hostApi, void **s, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData);
// OpenStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2792
static signed int OpenStream$link1(struct PaUtilHostApiRepresentation *hostApi$link1, void **s$link1, const struct PaStreamParameters *inputParameters$link1, const struct PaStreamParameters *outputParameters$link1, double sampleRate$link1, unsigned long int framesPerBuffer$link1, unsigned long int streamFlags$link1, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link1);
// OpenStream$link2
// file src/hostapi/jack/pa_jack.c line 1067
static signed int OpenStream$link2(struct PaUtilHostApiRepresentation *hostApi$link2, void **s$link2, const struct PaStreamParameters *inputParameters$link2, const struct PaStreamParameters *outputParameters$link2, double sampleRate$link2, unsigned long int framesPerBuffer$link2, unsigned long int streamFlags$link2, signed int (*streamCallback$link1)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link2);
// OpenStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1184
static signed int OpenStream$link3(struct PaUtilHostApiRepresentation *hostApi$link3, void **s$link3, const struct PaStreamParameters *inputParameters$link3, const struct PaStreamParameters *outputParameters$link3, double sampleRate$link3, unsigned long int framesPerBuffer$link3, unsigned long int streamFlags$link3, signed int (*streamCallback$link2)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link3);
// OpenStream::callback$object
//
signed int callback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// OpenStream::streamCallback$link1$object
//
signed int streamCallback$link1$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// OpenStream::streamCallback$link2$object
//
signed int streamCallback$link2$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// OpenStream::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// Pa2AlsaFormat
// file src/hostapi/alsa/pa_linux_alsa.c line 1677
static enum _snd_pcm_format Pa2AlsaFormat(unsigned long int paFormat);
// Pa2OssFormat
// file src/hostapi/oss/pa_unix_oss.c line 928
static signed int Pa2OssFormat(unsigned long int paFormat, signed int *ossFormat);
// PaAlsaStreamComponent_BeginPolling
// file src/hostapi/alsa/pa_linux_alsa.c line 3636
static signed int PaAlsaStreamComponent_BeginPolling(struct anonymous$16 *self, struct pollfd *pfds);
// PaAlsaStreamComponent_DetermineFramesPerBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2265
static signed int PaAlsaStreamComponent_DetermineFramesPerBuffer(struct anonymous$16 *self, const struct PaStreamParameters *params, unsigned long int framesPerUserBuffer, double sampleRate, struct _snd_pcm_hw_params *hwParams, signed int *accurate);
// PaAlsaStreamComponent_DoChannelAdaption
// file src/hostapi/alsa/pa_linux_alsa.c line 3521
static signed int PaAlsaStreamComponent_DoChannelAdaption(struct anonymous$16 *self, struct anonymous$13 *bp, signed int numFrames);
// PaAlsaStreamComponent_EndPolling
// file src/hostapi/alsa/pa_linux_alsa.c line 3654
static signed int PaAlsaStreamComponent_EndPolling(struct anonymous$16 *self, struct pollfd *pfds, signed int *shouldPoll, signed int *xrun);
// PaAlsaStreamComponent_EndProcessing
// file src/hostapi/alsa/pa_linux_alsa.c line 3462
static signed int PaAlsaStreamComponent_EndProcessing(struct anonymous$16 *self, unsigned long int numFrames, signed int *xrun);
// PaAlsaStreamComponent_FinishConfigure
// file src/hostapi/alsa/pa_linux_alsa.c line 2073
static signed int PaAlsaStreamComponent_FinishConfigure(struct anonymous$16 *self, struct _snd_pcm_hw_params *hwParams, const struct PaStreamParameters *params, signed int primeBuffers, double sampleRate, double *latency);
// PaAlsaStreamComponent_GetAvailableFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3612
static signed int PaAlsaStreamComponent_GetAvailableFrames(struct anonymous$16 *self, unsigned long int *numFrames, signed int *xrunOccurred);
// PaAlsaStreamComponent_InitialConfigure
// file src/hostapi/alsa/pa_linux_alsa.c line 1958
static signed int PaAlsaStreamComponent_InitialConfigure(struct anonymous$16 *self, const struct PaStreamParameters *params, signed int primeBuffers, struct _snd_pcm_hw_params *hwParams, double *sampleRate);
// PaAlsaStreamComponent_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 1872
static signed int PaAlsaStreamComponent_Initialize(struct anonymous$16 *self, struct PaAlsaHostApiRepresentation *alsaApi, const struct PaStreamParameters *params, enum anonymous$5 streamDir, signed int callbackMode);
// PaAlsaStreamComponent_RegisterChannels
// file src/hostapi/alsa/pa_linux_alsa.c line 3947
static signed int PaAlsaStreamComponent_RegisterChannels(struct anonymous$16 *self, struct anonymous$13 *bp, unsigned long int *numFrames, signed int *xrun);
// PaAlsaStreamComponent_RegisterChannels::1::setChannel$object
//
void setChannel$object(struct anonymous$13 *, unsigned int, void *, unsigned int);
// PaAlsaStreamComponent_Terminate
// file src/hostapi/alsa/pa_linux_alsa.c line 1940
static void PaAlsaStreamComponent_Terminate(struct anonymous$16 *self);
// PaAlsaStream_Configure
// file src/hostapi/alsa/pa_linux_alsa.c line 2706
static signed int PaAlsaStream_Configure(struct PaAlsaStream *self, const struct PaStreamParameters *inParams, const struct PaStreamParameters *outParams, double sampleRate, unsigned long int framesPerUserBuffer, double *inputLatency, double *outputLatency, enum anonymous$12 *hostBufferSizeMode);
// PaAlsaStream_DetermineFramesPerBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2517
static signed int PaAlsaStream_DetermineFramesPerBuffer(struct PaAlsaStream *self, double sampleRate, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, unsigned long int framesPerUserBuffer, struct _snd_pcm_hw_params *hwParamsCapture, struct _snd_pcm_hw_params *hwParamsPlayback, enum anonymous$12 *hostBufferSizeMode);
// PaAlsaStream_EndProcessing
// file src/hostapi/alsa/pa_linux_alsa.c line 3586
static signed int PaAlsaStream_EndProcessing(struct PaAlsaStream *self, unsigned long int numFrames, signed int *xrunOccurred);
// PaAlsaStream_GetAvailableFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3701
static signed int PaAlsaStream_GetAvailableFrames(struct PaAlsaStream *self, signed int queryCapture, signed int queryPlayback, unsigned long int *available, signed int *xrunOccurred);
// PaAlsaStream_HandleXrun
// file src/hostapi/alsa/pa_linux_alsa.c line 3259
static signed int PaAlsaStream_HandleXrun(struct PaAlsaStream *self);
// PaAlsaStream_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 2137
static signed int PaAlsaStream_Initialize(struct PaAlsaStream *self, struct PaAlsaHostApiRepresentation *alsaApi, const struct PaStreamParameters *inParams, const struct PaStreamParameters *outParams, double sampleRate, unsigned long int framesPerUserBuffer, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), unsigned long int streamFlags, void *userData);
// PaAlsaStream_Initialize::callback$object
//
signed int callback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// PaAlsaStream_SetUpBuffers
// file src/hostapi/alsa/pa_linux_alsa.c line 4062
static signed int PaAlsaStream_SetUpBuffers(struct PaAlsaStream *self, unsigned long int *numFrames, signed int *xrunOccurred);
// PaAlsaStream_Terminate
// file src/hostapi/alsa/pa_linux_alsa.c line 2194
static void PaAlsaStream_Terminate(struct PaAlsaStream *self);
// PaAlsaStream_WaitForFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3758
static signed int PaAlsaStream_WaitForFrames(struct PaAlsaStream *self, unsigned long int *framesAvail, signed int *xrunOccurred);
// PaAlsaVersionNum
// file src/hostapi/alsa/pa_linux_alsa.c line 970
static unsigned int PaAlsaVersionNum(void);
// PaAlsa_AlignForward
// file src/hostapi/alsa/pa_linux_alsa.c line 2240
static unsigned long int PaAlsa_AlignForward(unsigned long int v, unsigned long int align);
// PaAlsa_CloseLibrary
// file src/hostapi/alsa/pa_linux_alsa.c line 553
static void PaAlsa_CloseLibrary();
// PaAlsa_EnableRealtimeScheduling
// file src/hostapi/alsa/pa_linux_alsa.c line 4552
void PaAlsa_EnableRealtimeScheduling(void *s, signed int enable);
// PaAlsa_GetFramesPerHostBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2253
static unsigned long int PaAlsa_GetFramesPerHostBuffer(unsigned long int userFramesPerBuffer, double suggestedLatency, double sampleRate);
// PaAlsa_GetStreamInputCard
// file src/hostapi/alsa/pa_linux_alsa.c line 4585
signed int PaAlsa_GetStreamInputCard(void *s, signed int *card);
// PaAlsa_GetStreamOutputCard
// file src/hostapi/alsa/pa_linux_alsa.c line 4602
signed int PaAlsa_GetStreamOutputCard(void *s, signed int *card);
// PaAlsa_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 738
signed int PaAlsa_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex);
// PaAlsa_InitializeStreamInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 4544
void PaAlsa_InitializeStreamInfo(struct PaAlsaStreamInfo *info);
// PaAlsa_LoadLibrary
// file src/hostapi/alsa/pa_linux_alsa.c line 352
static signed int PaAlsa_LoadLibrary();
// PaAlsa_SetLibraryPathName
// file src/hostapi/alsa/pa_linux_alsa.c line 543
void PaAlsa_SetLibraryPathName(const char *pathName);
// PaAlsa_SetNumPeriods
// file src/hostapi/alsa/pa_linux_alsa.c line 590
signed int PaAlsa_SetNumPeriods(signed int numPeriods);
// PaAlsa_SetRetriesBusy
// file src/hostapi/alsa/pa_linux_alsa.c line 4619
signed int PaAlsa_SetRetriesBusy(signed int retries);
// PaAlsa_StrDup
// file src/hostapi/alsa/pa_linux_alsa.c line 1046
static signed int PaAlsa_StrDup(struct PaAlsaHostApiRepresentation *alsaApi, char **dst, const char *src);
// PaJack_GetClientName
// file src/hostapi/jack/pa_jack.c line 1759
signed int PaJack_GetClientName(const char **clientName);
// PaJack_Initialize
// file src/hostapi/jack/pa_jack.c line 709
signed int PaJack_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex);
// PaJack_SetClientName
// file src/hostapi/jack/pa_jack.c line 1748
signed int PaJack_SetClientName(const char *name);
// PaOSS_AudioThreadProc
// file src/hostapi/oss/pa_unix_oss.c line 1601
static void * PaOSS_AudioThreadProc(void *userData);
// PaOSS_AudioThreadProc::1::1::__cancel_routine$object
//
void __cancel_routine$object(void *);
// PaOSS_GetStreamInputDevice
// file src/hostapi/oss/pa_unix_oss.c line 2046
const char * PaOSS_GetStreamInputDevice(void *s);
// PaOSS_GetStreamOutputDevice
// file src/hostapi/oss/pa_unix_oss.c line 2058
const char * PaOSS_GetStreamOutputDevice(void *s);
// PaOSS_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 241
signed int PaOSS_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex);
// PaOssStreamComponent_BufferSize
// file src/hostapi/oss/pa_unix_oss.c line 981
static unsigned long int PaOssStreamComponent_BufferSize(struct anonymous$3 *component);
// PaOssStreamComponent_Configure
// file src/hostapi/oss/pa_unix_oss.c line 988
static signed int PaOssStreamComponent_Configure(struct anonymous$3 *component, double sampleRate, unsigned long int framesPerBuffer, enum anonymous$4 streamMode, struct anonymous$3 *master);
// PaOssStreamComponent_FrameSize
// file src/hostapi/oss/pa_unix_oss.c line 973
static unsigned int PaOssStreamComponent_FrameSize(struct anonymous$3 *component);
// PaOssStreamComponent_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 747
static signed int PaOssStreamComponent_Initialize(struct anonymous$3 *component, const struct PaStreamParameters *parameters, signed int callbackMode, signed int fd, const char *deviceName);
// PaOssStreamComponent_Read
// file src/hostapi/oss/pa_unix_oss.c line 1086
static signed int PaOssStreamComponent_Read(struct anonymous$3 *component, unsigned long int *frames);
// PaOssStreamComponent_Terminate
// file src/hostapi/oss/pa_unix_oss.c line 773
static void PaOssStreamComponent_Terminate(struct anonymous$3 *component);
// PaOssStreamComponent_Write
// file src/hostapi/oss/pa_unix_oss.c line 1100
static signed int PaOssStreamComponent_Write(struct anonymous$3 *component, unsigned long int *frames);
// PaOssStream_Configure
// file src/hostapi/oss/pa_unix_oss.c line 1119
static signed int PaOssStream_Configure(struct PaOssStream *stream, double sampleRate, unsigned long int framesPerBuffer, double *inputLatency, double *outputLatency);
// PaOssStream_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 852
static signed int PaOssStream_Initialize(struct PaOssStream *stream, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData, unsigned long int streamFlags, struct anonymous$1 *ossApi);
// PaOssStream_Initialize::callback$object
//
signed int callback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// PaOssStream_Prepare
// file src/hostapi/oss/pa_unix_oss.c line 1461
static signed int PaOssStream_Prepare(struct PaOssStream *stream);
// PaOssStream_Stop
// file src/hostapi/oss/pa_unix_oss.c line 1520
static signed int PaOssStream_Stop(struct PaOssStream *stream, signed int abort);
// PaOssStream_Terminate
// file src/hostapi/oss/pa_unix_oss.c line 908
static void PaOssStream_Terminate(struct PaOssStream *stream);
// PaOssStream_WaitForFrames
// file src/hostapi/oss/pa_unix_oss.c line 1301
static signed int PaOssStream_WaitForFrames(struct PaOssStream *stream, unsigned long int *frames);
// PaSkeleton_Initialize
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 126
signed int PaSkeleton_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex);
// PaUnixMutex_Initialize
// file ./src/os/unix/pa_unix_util.h line 142
signed int PaUnixMutex_Initialize(struct anonymous$7 *self);
// PaUnixMutex_Lock
// file ./src/os/unix/pa_unix_util.h line 144
signed int PaUnixMutex_Lock(struct anonymous$7 *self);
// PaUnixMutex_Terminate
// file ./src/os/unix/pa_unix_util.h line 143
signed int PaUnixMutex_Terminate(struct anonymous$7 *self);
// PaUnixMutex_Unlock
// file ./src/os/unix/pa_unix_util.h line 145
signed int PaUnixMutex_Unlock(struct anonymous$7 *self);
// PaUnixThread_New
// file ./src/os/unix/pa_unix_util.h line 193
signed int PaUnixThread_New(struct anonymous$6 *self, void * (*threadFunc)(void *), void *threadArg, double waitForChild, signed int rtSched);
// PaUnixThread_New::threadFunc$object
//
void * threadFunc$object(void *);
// PaUnixThread_NotifyParent
// file ./src/os/unix/pa_unix_util.h line 215
signed int PaUnixThread_NotifyParent(struct anonymous$6 *self);
// PaUnixThread_PrepareNotify
// file ./src/os/unix/pa_unix_util.h line 209
signed int PaUnixThread_PrepareNotify(struct anonymous$6 *self);
// PaUnixThread_StopRequested
// file ./src/os/unix/pa_unix_util.h line 219
signed int PaUnixThread_StopRequested(struct anonymous$6 *self);
// PaUnixThread_Terminate
// file ./src/os/unix/pa_unix_util.h line 201
signed int PaUnixThread_Terminate(struct anonymous$6 *self, signed int wait, signed int *exitResult);
// PaUnixThreading_Initialize
// file ./src/os/unix/pa_unix_util.h line 160
signed int PaUnixThreading_Initialize();
// PaUtil_AdvanceRingBufferReadIndex
// file src/common/pa_ringbuffer.c line 187
signed long int PaUtil_AdvanceRingBufferReadIndex(struct PaUtilRingBuffer *rbuf, signed long int elementCount);
// PaUtil_AdvanceRingBufferWriteIndex
// file ./src/common/pa_ringbuffer.h line 197
signed long int PaUtil_AdvanceRingBufferWriteIndex(struct PaUtilRingBuffer *rbuf, signed long int elementCount);
// PaUtil_AllocateMemory
// file src/common/pa_util.h line 121
void * PaUtil_AllocateMemory(signed long int size);
// PaUtil_BeginBufferProcessing
// file src/common/pa_process.c line 669
void PaUtil_BeginBufferProcessing(struct anonymous$13 *bp, struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int callbackStatusFlags);
// PaUtil_BeginCpuLoadMeasurement
// file src/common/pa_cpuload.c line 73
void PaUtil_BeginCpuLoadMeasurement(struct anonymous$10 *measurer);
// PaUtil_CancelThreading
// file ./src/os/unix/pa_unix_util.h line 119
signed int PaUtil_CancelThreading(struct anonymous$0 *threading, signed int wait, signed int *exitResult);
// PaUtil_CopyInput
// file src/common/pa_process.c line 1660
unsigned long int PaUtil_CopyInput(struct anonymous$13 *bp, void **buffer, unsigned long int frameCount);
// PaUtil_CopyOutput
// file src/common/pa_process.c line 1731
unsigned long int PaUtil_CopyOutput(struct anonymous$13 *bp, const void **buffer, unsigned long int frameCount);
// PaUtil_CountCurrentlyAllocatedBlocks
// file src/os/unix/pa_unix_util.c line 98
signed int PaUtil_CountCurrentlyAllocatedBlocks(void);
// PaUtil_CreateAllocationGroup
// file src/common/pa_allocation.c line 103
struct anonymous$14 * PaUtil_CreateAllocationGroup(void);
// PaUtil_DebugPrint
// file src/common/pa_debugprint.c line 88
void PaUtil_DebugPrint(const char *format, ...);
// PaUtil_DestroyAllocationGroup
// file src/common/pa_allocation.c line 130
void PaUtil_DestroyAllocationGroup(struct anonymous$14 *group);
// PaUtil_DeviceIndexToHostApiDeviceIndex
// file src/common/pa_front.c line 490
signed int PaUtil_DeviceIndexToHostApiDeviceIndex(signed int *hostApiDevice, signed int device, struct PaUtilHostApiRepresentation *hostApi);
// PaUtil_DummyGetCpuLoad
// file src/common/pa_stream.c line 147
double PaUtil_DummyGetCpuLoad(void *stream);
// PaUtil_DummyGetReadAvailable
// file src/common/pa_stream.c line 131
signed long int PaUtil_DummyGetReadAvailable(void *stream);
// PaUtil_DummyGetWriteAvailable
// file src/common/pa_stream.c line 139
signed long int PaUtil_DummyGetWriteAvailable(void *stream);
// PaUtil_DummyRead
// file src/common/pa_stream.c line 107
signed int PaUtil_DummyRead(void *stream, void *buffer, unsigned long int frames);
// PaUtil_DummyWrite
// file src/common/pa_stream.c line 119
signed int PaUtil_DummyWrite(void *stream, const void *buffer, unsigned long int frames);
// PaUtil_EndBufferProcessing
// file src/common/pa_process.c line 1482
unsigned long int PaUtil_EndBufferProcessing(struct anonymous$13 *bp, signed int *streamCallbackResult);
// PaUtil_EndCpuLoadMeasurement
// file src/common/pa_cpuload.c line 79
void PaUtil_EndCpuLoadMeasurement(struct anonymous$10 *measurer, unsigned long int framesProcessed);
// PaUtil_FlushRingBuffer
// file src/common/pa_ringbuffer.c line 93
void PaUtil_FlushRingBuffer(struct PaUtilRingBuffer *rbuf);
// PaUtil_FreeAllAllocations
// file src/common/pa_allocation.c line 220
void PaUtil_FreeAllAllocations(struct anonymous$14 *group);
// PaUtil_FreeMemory
// file src/common/pa_util.h line 125
void PaUtil_FreeMemory(void *block);
// PaUtil_Generate16BitTriangularDither
// file src/common/pa_dither.h line 84
signed int PaUtil_Generate16BitTriangularDither(struct PaUtilTriangularDitherGenerator *state);
// PaUtil_GenerateFloatTriangularDither
// file src/common/pa_dither.h line 99
float PaUtil_GenerateFloatTriangularDither(struct PaUtilTriangularDitherGenerator *state);
// PaUtil_GetBufferProcessorInputLatencyFrames
// file src/common/pa_process.c line 431
unsigned long int PaUtil_GetBufferProcessorInputLatencyFrames(struct anonymous$13 *bp);
// PaUtil_GetBufferProcessorOutputLatencyFrames
// file src/common/pa_process.c line 437
unsigned long int PaUtil_GetBufferProcessorOutputLatencyFrames(struct anonymous$13 *bp);
// PaUtil_GetCpuLoad
// file src/common/pa_cpuload.c line 102
double PaUtil_GetCpuLoad(struct anonymous$10 *measurer);
// PaUtil_GetHostApiRepresentation
// file src/common/pa_front.c line 461
signed int PaUtil_GetHostApiRepresentation(struct PaUtilHostApiRepresentation **hostApi, enum PaHostApiTypeId type);
// PaUtil_GetRingBufferReadAvailable
// file ./src/common/pa_ringbuffer.h line 139
signed long int PaUtil_GetRingBufferReadAvailable(const struct PaUtilRingBuffer *rbuf);
// PaUtil_GetRingBufferReadRegions
// file src/common/pa_ringbuffer.c line 154
signed long int PaUtil_GetRingBufferReadRegions(struct PaUtilRingBuffer *rbuf, signed long int elementCount, void **dataPtr1, signed long int *sizePtr1, void **dataPtr2, signed long int *sizePtr2);
// PaUtil_GetRingBufferWriteAvailable
// file ./src/common/pa_ringbuffer.h line 131
signed long int PaUtil_GetRingBufferWriteAvailable(const struct PaUtilRingBuffer *rbuf);
// PaUtil_GetRingBufferWriteRegions
// file src/common/pa_ringbuffer.c line 104
signed long int PaUtil_GetRingBufferWriteRegions(struct PaUtilRingBuffer *rbuf, signed long int elementCount, void **dataPtr1, signed long int *sizePtr1, void **dataPtr2, signed long int *sizePtr2);
// PaUtil_GetTime
// file src/common/pa_util.h line 149
double PaUtil_GetTime(void);
// PaUtil_GroupAllocateMemory
// file src/common/pa_allocation.c line 146
void * PaUtil_GroupAllocateMemory(struct anonymous$14 *group, signed long int size);
// PaUtil_GroupFreeMemory
// file src/common/pa_allocation.c line 183
void PaUtil_GroupFreeMemory(struct anonymous$14 *group, void *buffer);
// PaUtil_InitializeBufferProcessor
// file src/common/pa_process.c line 90
signed int PaUtil_InitializeBufferProcessor(struct anonymous$13 *bp, signed int inputChannelCount, unsigned long int userInputSampleFormat, unsigned long int hostInputSampleFormat, signed int outputChannelCount, unsigned long int userOutputSampleFormat, unsigned long int hostOutputSampleFormat, double sampleRate, unsigned long int streamFlags, unsigned long int framesPerUserBuffer, unsigned long int framesPerHostBuffer, enum anonymous$12 hostBufferSizeMode, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData);
// PaUtil_InitializeBufferProcessor::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// PaUtil_InitializeClock
// file src/common/pa_util.h line 142
void PaUtil_InitializeClock(void);
// PaUtil_InitializeCpuLoadMeasurer
// file src/common/pa_cpuload.c line 60
void PaUtil_InitializeCpuLoadMeasurer(struct anonymous$10 *measurer, double sampleRate);
// PaUtil_InitializeDeviceInfo
// file src/hostapi/oss/pa_unix_oss.c line 292
signed int PaUtil_InitializeDeviceInfo(struct PaDeviceInfo *deviceInfo, const char *name, signed int hostApiIndex, signed int maxInputChannels, signed int maxOutputChannels, double defaultLowInputLatency, double defaultLowOutputLatency, double defaultHighInputLatency, double defaultHighOutputLatency, double defaultSampleRate, struct anonymous$14 *allocations);
// PaUtil_InitializeRingBuffer
// file ./src/common/pa_ringbuffer.h line 117
signed long int PaUtil_InitializeRingBuffer(struct PaUtilRingBuffer *rbuf, signed long int elementSizeBytes, signed long int elementCount, void *dataPtr);
// PaUtil_InitializeStreamInterface
// file src/common/pa_stream.c line 51
void PaUtil_InitializeStreamInterface(struct anonymous$11 *streamInterface, signed int (*Close)(void *), signed int (*Start)(void *), signed int (*Stop)(void *), signed int (*Abort)(void *), signed int (*IsStopped)(void *), signed int (*IsActive)(void *), double (*GetTime)(void *), double (*GetCpuLoad)(void *), signed int (*Read)(void *, void *, unsigned long int), signed int (*Write)(void *, const void *, unsigned long int), signed long int (*GetReadAvailable)(void *), signed long int (*GetWriteAvailable)(void *));
// PaUtil_InitializeStreamInterface::Abort$object
//
signed int Abort$object(void *);
// PaUtil_InitializeStreamInterface::Close$object
//
signed int Close$object(void *);
// PaUtil_InitializeStreamInterface::GetCpuLoad$object
//
double GetCpuLoad$object(void *);
// PaUtil_InitializeStreamInterface::GetReadAvailable$object
//
signed long int GetReadAvailable$object(void *);
// PaUtil_InitializeStreamInterface::GetTime$object
//
double GetTime$object(void *);
// PaUtil_InitializeStreamInterface::GetWriteAvailable$object
//
signed long int GetWriteAvailable$object(void *);
// PaUtil_InitializeStreamInterface::IsActive$object
//
signed int IsActive$object(void *);
// PaUtil_InitializeStreamInterface::IsStopped$object
//
signed int IsStopped$object(void *);
// PaUtil_InitializeStreamInterface::Read$object
//
signed int Read$object(void *, void *, unsigned long int);
// PaUtil_InitializeStreamInterface::Start$object
//
signed int Start$object(void *);
// PaUtil_InitializeStreamInterface::Stop$object
//
signed int Stop$object(void *);
// PaUtil_InitializeStreamInterface::Write$object
//
signed int Write$object(void *, const void *, unsigned long int);
// PaUtil_InitializeStreamRepresentation
// file src/common/pa_stream.c line 80
void PaUtil_InitializeStreamRepresentation(struct PaUtilStreamRepresentation *streamRepresentation, struct anonymous$11 *streamInterface, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData);
// PaUtil_InitializeStreamRepresentation::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// PaUtil_InitializeThreading
// file ./src/os/unix/pa_unix_util.h line 116
signed int PaUtil_InitializeThreading(struct anonymous$0 *threading);
// PaUtil_InitializeTriangularDitherState
// file src/common/pa_dither.c line 57
void PaUtil_InitializeTriangularDitherState(struct PaUtilTriangularDitherGenerator *state);
// PaUtil_IsBufferProcessorOutputEmpty
// file src/common/pa_process.c line 1654
signed int PaUtil_IsBufferProcessorOutputEmpty(struct anonymous$13 *bp);
// PaUtil_ReadRingBuffer
// file ./src/common/pa_ringbuffer.h line 163
signed long int PaUtil_ReadRingBuffer(struct PaUtilRingBuffer *rbuf, void *data, signed long int elementCount);
// PaUtil_ResetBufferProcessor
// file src/common/pa_process.c line 408
void PaUtil_ResetBufferProcessor(struct anonymous$13 *bp);
// PaUtil_ResetCpuLoadMeasurer
// file src/common/pa_cpuload.c line 68
void PaUtil_ResetCpuLoadMeasurer(struct anonymous$10 *measurer);
// PaUtil_SelectClosestAvailableFormat
// file src/common/pa_converters.c line 70
unsigned long int PaUtil_SelectClosestAvailableFormat(unsigned long int availableFormats, unsigned long int format);
// PaUtil_SelectConverter
// file src/common/pa_converters.c line 178
void (*PaUtil_SelectConverter(unsigned long int sourceFormat, unsigned long int destinationFormat, unsigned long int flags))(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
// PaUtil_SelectZeroer
// file src/common/pa_converters.c line 1857
void (*PaUtil_SelectZeroer(unsigned long int destinationFormat))(void *, signed int, unsigned int);
// PaUtil_Set2ndInputChannel
// file src/common/pa_process.c line 512
void PaUtil_Set2ndInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride);
// PaUtil_Set2ndInputFrameCount
// file src/common/pa_process.c line 505
void PaUtil_Set2ndInputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount);
// PaUtil_Set2ndInterleavedInputChannels
// file src/common/pa_process.c line 522
void PaUtil_Set2ndInterleavedInputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount);
// PaUtil_Set2ndInterleavedOutputChannels
// file src/common/pa_process.c line 637
void PaUtil_Set2ndInterleavedOutputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount);
// PaUtil_Set2ndNonInterleavedInputChannel
// file src/common/pa_process.c line 545
void PaUtil_Set2ndNonInterleavedInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data);
// PaUtil_Set2ndNonInterleavedOutputChannel
// file src/common/pa_process.c line 659
void PaUtil_Set2ndNonInterleavedOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data);
// PaUtil_Set2ndOutputChannel
// file src/common/pa_process.c line 626
void PaUtil_Set2ndOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride);
// PaUtil_Set2ndOutputFrameCount
// file src/common/pa_process.c line 619
void PaUtil_Set2ndOutputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount);
// PaUtil_SetDebugPrintFunction
// file src/common/pa_debugprint.c line 68
void PaUtil_SetDebugPrintFunction(void (*cb)(const char *));
// PaUtil_SetDebugPrintFunction::cb$object
//
void cb$object(const char *);
// PaUtil_SetInputChannel
// file src/common/pa_process.c line 461
void PaUtil_SetInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride);
// PaUtil_SetInputFrameCount
// file src/common/pa_process.c line 443
void PaUtil_SetInputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount);
// PaUtil_SetInterleavedInputChannels
// file src/common/pa_process.c line 471
void PaUtil_SetInterleavedInputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount);
// PaUtil_SetInterleavedOutputChannels
// file src/common/pa_process.c line 587
void PaUtil_SetInterleavedOutputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount);
// PaUtil_SetLastHostErrorInfo
// file src/common/pa_front.c line 106
void PaUtil_SetLastHostErrorInfo(enum PaHostApiTypeId hostApiType, signed long int errorCode, const char *errorText);
// PaUtil_SetNoInput
// file src/common/pa_process.c line 453
void PaUtil_SetNoInput(struct anonymous$13 *bp);
// PaUtil_SetNoOutput
// file src/common/pa_process.c line 566
void PaUtil_SetNoOutput(struct anonymous$13 *bp);
// PaUtil_SetNonInterleavedInputChannel
// file src/common/pa_process.c line 494
void PaUtil_SetNonInterleavedInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data);
// PaUtil_SetNonInterleavedOutputChannel
// file src/common/pa_process.c line 609
void PaUtil_SetNonInterleavedOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data);
// PaUtil_SetOutputChannel
// file src/common/pa_process.c line 576
void PaUtil_SetOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride);
// PaUtil_SetOutputFrameCount
// file src/common/pa_process.c line 556
void PaUtil_SetOutputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount);
// PaUtil_StartThreading
// file ./src/os/unix/pa_unix_util.h line 118
signed int PaUtil_StartThreading(struct anonymous$0 *threading, void * (*threadRoutine)(void *), void *data);
// PaUtil_StartThreading::threadRoutine$object
//
void * threadRoutine$object(void *);
// PaUtil_TerminateBufferProcessor
// file src/common/pa_process.c line 386
void PaUtil_TerminateBufferProcessor(struct anonymous$13 *bp);
// PaUtil_TerminateStreamRepresentation
// file src/common/pa_stream.c line 101
void PaUtil_TerminateStreamRepresentation(struct PaUtilStreamRepresentation *streamRepresentation);
// PaUtil_TerminateThreading
// file ./src/os/unix/pa_unix_util.h line 117
void PaUtil_TerminateThreading(struct anonymous$0 *threading);
// PaUtil_TraceStubToSatisfyLinker
// file src/common/pa_trace.c line 234
signed int PaUtil_TraceStubToSatisfyLinker(void);
// PaUtil_ValidateStreamPointer
// file src/common/pa_front.c line 1316
signed int PaUtil_ValidateStreamPointer(void *stream);
// PaUtil_WriteRingBuffer
// file ./src/common/pa_ringbuffer.h line 151
signed long int PaUtil_WriteRingBuffer(struct PaUtilRingBuffer *rbuf, const void *data, signed long int elementCount);
// PaUtil_ZeroOutput
// file src/common/pa_process.c line 1805
unsigned long int PaUtil_ZeroOutput(struct anonymous$13 *bp, unsigned long int frameCount);
// Pa_AbortStream
// file src/common/pa_front.c line 1444
signed int Pa_AbortStream(void *stream);
// Pa_CloseStream
// file ./include/portaudio.h line 894
signed int Pa_CloseStream(void *stream);
// Pa_GetDefaultHostApi
// file src/common/pa_front.c line 533
signed int Pa_GetDefaultHostApi(void);
// Pa_GetDefaultInputDevice
// file src/common/pa_front.c line 662
signed int Pa_GetDefaultInputDevice(void);
// Pa_GetDefaultOutputDevice
// file src/common/pa_front.c line 685
signed int Pa_GetDefaultOutputDevice(void);
// Pa_GetDeviceCount
// file src/common/pa_front.c line 641
signed int Pa_GetDeviceCount(void);
// Pa_GetDeviceInfo
// file src/common/pa_front.c line 708
const struct PaDeviceInfo * Pa_GetDeviceInfo(signed int device);
// Pa_GetErrorText
// file src/common/pa_front.c line 381
const char * Pa_GetErrorText(signed int errorCode);
// Pa_GetHostApiCount
// file src/common/pa_front.c line 512
signed int Pa_GetHostApiCount(void);
// Pa_GetHostApiInfo
// file src/common/pa_front.c line 562
const struct PaHostApiInfo * Pa_GetHostApiInfo(signed int hostApi);
// Pa_GetLastHostErrorInfo
// file src/common/pa_front.c line 375
const struct PaHostErrorInfo * Pa_GetLastHostErrorInfo(void);
// Pa_GetSampleSize
// file src/common/pa_front.c line 1761
signed int Pa_GetSampleSize(unsigned long int format);
// Pa_GetStreamCpuLoad
// file src/common/pa_front.c line 1568
double Pa_GetStreamCpuLoad(void *stream);
// Pa_GetStreamHostApiType
// file src/common/pa_front.c line 1734
enum PaHostApiTypeId Pa_GetStreamHostApiType(void *stream);
// Pa_GetStreamInfo
// file src/common/pa_front.c line 1503
const struct PaStreamInfo * Pa_GetStreamInfo(void *stream);
// Pa_GetStreamReadAvailable
// file src/common/pa_front.c line 1677
signed long int Pa_GetStreamReadAvailable(void *stream);
// Pa_GetStreamTime
// file src/common/pa_front.c line 1539
double Pa_GetStreamTime(void *stream);
// Pa_GetStreamWriteAvailable
// file src/common/pa_front.c line 1706
signed long int Pa_GetStreamWriteAvailable(void *stream);
// Pa_GetVersion
// file src/common/pa_front.c line 86
signed int Pa_GetVersion(void);
// Pa_GetVersionText
// file src/common/pa_front.c line 92
const char * Pa_GetVersionText(void);
// Pa_HostApiDeviceIndexToDeviceIndex
// file src/common/pa_front.c line 603
signed int Pa_HostApiDeviceIndexToDeviceIndex(signed int hostApi, signed int hostApiDeviceIndex);
// Pa_HostApiTypeIdToHostApiIndex
// file src/common/pa_front.c line 429
signed int Pa_HostApiTypeIdToHostApiIndex(enum PaHostApiTypeId type);
// Pa_Initialize
// file ./include/portaudio.h line 132
signed int Pa_Initialize(void);
// Pa_IsFormatSupported
// file src/common/pa_front.c line 993
signed int Pa_IsFormatSupported(const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate);
// Pa_IsStreamActive
// file src/common/pa_front.c line 1486
signed int Pa_IsStreamActive(void *stream);
// Pa_IsStreamStopped
// file src/common/pa_front.c line 1470
signed int Pa_IsStreamStopped(void *stream);
// Pa_OpenDefaultStream
// file ./include/portaudio.h line 881
signed int Pa_OpenDefaultStream(void **stream, signed int inputChannelCount, signed int outputChannelCount, unsigned long int sampleFormat, double sampleRate, unsigned long int framesPerBuffer, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData);
// Pa_OpenDefaultStream::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// Pa_OpenStream
// file src/common/pa_front.c line 1097
signed int Pa_OpenStream(void **stream, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData);
// Pa_OpenStream::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// Pa_ReadStream
// file src/common/pa_front.c line 1598
signed int Pa_ReadStream(void *stream, void *buffer, unsigned long int frames);
// Pa_SetStreamFinishedCallback
// file src/common/pa_front.c line 1363
signed int Pa_SetStreamFinishedCallback(void *stream, void (*streamFinishedCallback)(void *));
// Pa_SetStreamFinishedCallback::streamFinishedCallback$object
//
void streamFinishedCallback$object(void *);
// Pa_Sleep
// file ./include/portaudio.h line 1176
void Pa_Sleep(signed long int msec);
// Pa_StartStream
// file ./include/portaudio.h line 937
signed int Pa_StartStream(void *stream);
// Pa_StopStream
// file ./include/portaudio.h line 943
signed int Pa_StopStream(void *stream);
// Pa_Terminate
// file ./include/portaudio.h line 151
signed int Pa_Terminate(void);
// Pa_WriteStream
// file src/common/pa_front.c line 1638
signed int Pa_WriteStream(void *stream, const void *buffer, unsigned long int frames);
// QueryDevice
// file src/hostapi/oss/pa_unix_oss.c line 457
static signed int QueryDevice(char *deviceName, struct anonymous$1 *ossApi, struct PaDeviceInfo **deviceInfo);
// QueryDirection
// file src/hostapi/oss/pa_unix_oss.c line 328
static signed int QueryDirection(const char *deviceName, enum anonymous$4 mode, double *defaultSampleRate, signed int *maxChannelCount, double *defaultLowLatency, double *defaultHighLatency);
// ReadStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 757
static signed int ReadStream(void *s, void *buffer, unsigned long int frames);
// ReadStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4365
static signed int ReadStream$link1(void *s$link1, void *buffer$link1, unsigned long int frames$link1);
// ReadStream$link2
// file src/hostapi/oss/pa_unix_oss.c line 1927
static signed int ReadStream$link2(void *s$link2, void *buffer$link2, unsigned long int frames$link2);
// RealProcess
// file src/hostapi/jack/pa_jack.c line 1343
static signed int RealProcess(struct PaJackStream *stream, unsigned int frames);
// RealStop
// file src/hostapi/alsa/pa_linux_alsa.c line 3086
static signed int RealStop(struct PaAlsaStream *stream, signed int abort);
// RealStop$link1
// file src/hostapi/jack/pa_jack.c line 1656
static signed int RealStop$link1(struct PaJackStream *stream$link1, signed int abort$link1);
// RealStop$link2
// file src/hostapi/oss/pa_unix_oss.c line 1822
static signed int RealStop$link2(struct PaOssStream *stream$link2, signed int abort$link2);
// RemoveOpenStream
// file src/common/pa_front.c line 278
static void RemoveOpenStream(void *stream);
// RemoveStream
// file src/hostapi/jack/pa_jack.c line 1046
static signed int RemoveStream(struct PaJackStream *stream);
// SampleFormatIsValid
// file src/common/pa_front.c line 751
static signed int SampleFormatIsValid(unsigned long int format);
// SetApproximateSampleRate
// file src/hostapi/alsa/pa_linux_alsa.c line 3191
static signed int SetApproximateSampleRate(struct _snd_pcm *pcm, struct _snd_pcm_hw_params *hwParams, double sampleRate);
// SetUpBuffers
// file src/hostapi/oss/pa_unix_oss.c line 1574
static signed int SetUpBuffers(struct PaOssStream *stream, unsigned long int framesAvail);
// SilenceBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2890
static void SilenceBuffer(struct PaAlsaStream *stream);
// SkipCardDetailsInName
// file src/hostapi/alsa/pa_linux_alsa.c line 1083
static char * SkipCardDetailsInName(char *infoSkipName, char *cardRefName);
// StartStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 657
static signed int StartStream(void *s);
// StartStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2984
static signed int StartStream$link1(void *s$link1);
// StartStream$link2
// file src/hostapi/jack/pa_jack.c line 1593
static signed int StartStream$link2(void *s$link2);
// StartStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1798
static signed int StartStream$link3(void *s$link3);
// StopStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 676
static signed int StopStream(void *s);
// StopStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3128
static signed int StopStream$link1(void *s$link1);
// StopStream$link2
// file src/hostapi/jack/pa_jack.c line 1707
static signed int StopStream$link2(void *s$link2);
// StopStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1851
static signed int StopStream$link3(void *s$link3);
// Terminate
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 241
static void Terminate(struct PaUtilHostApiRepresentation *hostApi);
// Terminate$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 806
static void Terminate$link1(struct PaUtilHostApiRepresentation *hostApi$link1);
// Terminate$link2
// file src/hostapi/jack/pa_jack.c line 814
static void Terminate$link2(struct PaUtilHostApiRepresentation *hostApi$link2);
// Terminate$link3
// file src/hostapi/oss/pa_unix_oss.c line 592
static void Terminate$link3(struct PaUtilHostApiRepresentation *hostApi$link3);
// TerminateHostApis
// file src/common/pa_front.c line 139
static void TerminateHostApis(void);
// TestParameters
// file src/hostapi/alsa/pa_linux_alsa.c line 1747
static signed int TestParameters(const struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *parameters, double sampleRate, enum anonymous$5 streamDir);
// UInt8_To_Float32
// file src/common/pa_converters.c line 1584
static void UInt8_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// UInt8_To_Int16
// file src/common/pa_converters.c line 1654
static void UInt8_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// UInt8_To_Int24
// file src/common/pa_converters.c line 1625
static void UInt8_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// UInt8_To_Int32
// file src/common/pa_converters.c line 1605
static void UInt8_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// UInt8_To_Int8
// file src/common/pa_converters.c line 1674
static void UInt8_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator);
// UpdateQueue
// file src/hostapi/jack/pa_jack.c line 1423
static signed int UpdateQueue(struct anonymous$21 *hostApi);
// UpdateSampleRate
// file src/hostapi/jack/pa_jack.c line 645
static void UpdateSampleRate(struct PaJackStream *stream, double sampleRate);
// ValidateOpenStreamParameters
// file src/common/pa_front.c line 835
static signed int ValidateOpenStreamParameters(const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), struct PaUtilHostApiRepresentation **hostApi, signed int *hostApiInputDevice, signed int *hostApiOutputDevice);
// ValidateOpenStreamParameters::streamCallback$object
//
signed int streamCallback$object(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
// ValidateParameters
// file src/hostapi/alsa/pa_linux_alsa.c line 1484
static signed int ValidateParameters(const struct PaStreamParameters *parameters, struct PaUtilHostApiRepresentation *hostApi, enum anonymous$5 mode);
// ValidateParameters$link1
// file src/hostapi/oss/pa_unix_oss.c line 726
static signed int ValidateParameters$link1(const struct PaStreamParameters *parameters$link1, const struct PaDeviceInfo *deviceInfo, enum anonymous$4 mode$link1);
// WaitCondition
// file src/hostapi/jack/pa_jack.c line 1004
static signed int WaitCondition(struct anonymous$21 *hostApi);
// WriteStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 774
static signed int WriteStream(void *s, const void *buffer, unsigned long int frames);
// WriteStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4425
static signed int WriteStream$link1(void *s$link1, const void *buffer$link1, unsigned long int frames$link1);
// WriteStream$link2
// file src/hostapi/oss/pa_unix_oss.c line 1971
static signed int WriteStream$link2(void *s$link2, const void *buffer$link2, unsigned long int frames$link2);
// Zero16
// file src/common/pa_converters.c line 1926
static void Zero16(void *destinationBuffer, signed int destinationStride, unsigned int count);
// Zero24
// file src/common/pa_converters.c line 1941
static void Zero24(void *destinationBuffer, signed int destinationStride, unsigned int count);
// Zero32
// file src/common/pa_converters.c line 1958
static void Zero32(void *destinationBuffer, signed int destinationStride, unsigned int count);
// Zero8
// file src/common/pa_converters.c line 1911
static void Zero8(void *destinationBuffer, signed int destinationStride, unsigned int count);
// ZeroU8
// file src/common/pa_converters.c line 1896
static void ZeroU8(void *destinationBuffer, signed int destinationStride, unsigned int count);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __pthread_register_cancel
// file /usr/include/pthread.h line 682
extern void __pthread_register_cancel(struct anonymous$18 *);
// __pthread_unregister_cancel
// file /usr/include/pthread.h line 694
extern void __pthread_unregister_cancel(struct anonymous$18 *);
// __pthread_unwind_next
// file /usr/include/pthread.h line 735
extern void __pthread_unwind_next(struct anonymous$18 *);
// __sigsetjmp
// file /usr/include/pthread.h line 745
extern signed int __sigsetjmp(struct __jmp_buf_tag *, signed int);
// __sync_synchronize
// file gcc_builtin_headers_generic.h line 107
void __sync_synchronize();
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// alsa_snd_asoundlib_version$object
//
const char * alsa_snd_asoundlib_version$object(void);
// alsa_snd_card_next$object
//
signed int alsa_snd_card_next$object(signed int *);
// alsa_snd_config_get_id$object
//
signed int alsa_snd_config_get_id$object(const struct _snd_config *, const char **);
// alsa_snd_config_get_string$object
//
signed int alsa_snd_config_get_string$object(const struct _snd_config *, const char **);
// alsa_snd_config_iterator_end$object
//
struct _snd_config_iterator * alsa_snd_config_iterator_end$object(const struct _snd_config *);
// alsa_snd_config_iterator_entry$object
//
struct _snd_config * alsa_snd_config_iterator_entry$object(struct _snd_config_iterator *);
// alsa_snd_config_iterator_first$object
//
struct _snd_config_iterator * alsa_snd_config_iterator_first$object(const struct _snd_config *);
// alsa_snd_config_iterator_next$object
//
struct _snd_config_iterator * alsa_snd_config_iterator_next$object(struct _snd_config_iterator *);
// alsa_snd_config_search$object
//
signed int alsa_snd_config_search$object(struct _snd_config *, const char *, struct _snd_config **);
// alsa_snd_config_update$object
//
signed int alsa_snd_config_update$object(void);
// alsa_snd_config_update_free_global$object
//
signed int alsa_snd_config_update_free_global$object(void);
// alsa_snd_ctl_card_info$object
//
signed int alsa_snd_ctl_card_info$object(struct _snd_ctl *, struct _snd_ctl_card_info *);
// alsa_snd_ctl_card_info_free$object
//
void alsa_snd_ctl_card_info_free$object(struct _snd_ctl_card_info *);
// alsa_snd_ctl_card_info_get_name$object
//
const char * alsa_snd_ctl_card_info_get_name$object(const struct _snd_ctl_card_info *);
// alsa_snd_ctl_card_info_malloc$object
//
signed int alsa_snd_ctl_card_info_malloc$object(struct _snd_ctl_card_info **);
// alsa_snd_ctl_card_info_sizeof$object
//
unsigned long int alsa_snd_ctl_card_info_sizeof$object(void);
// alsa_snd_ctl_close$object
//
signed int alsa_snd_ctl_close$object(struct _snd_ctl *);
// alsa_snd_ctl_open$object
//
signed int alsa_snd_ctl_open$object(struct _snd_ctl **, const char *, signed int);
// alsa_snd_ctl_pcm_info$object
//
signed int alsa_snd_ctl_pcm_info$object(struct _snd_ctl *, struct _snd_pcm_info *);
// alsa_snd_ctl_pcm_next_device$object
//
signed int alsa_snd_ctl_pcm_next_device$object(struct _snd_ctl *, signed int *);
// alsa_snd_output_stdio_attach$object
//
signed int alsa_snd_output_stdio_attach$object(struct _snd_output **, struct _IO_FILE *, signed int);
// alsa_snd_pcm_area_copy$object
//
signed int alsa_snd_pcm_area_copy$object(const struct _snd_pcm_channel_area *, unsigned long int, const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, enum _snd_pcm_format);
// alsa_snd_pcm_areas_silence$object
//
signed int alsa_snd_pcm_areas_silence$object(const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, unsigned long int, enum _snd_pcm_format);
// alsa_snd_pcm_avail_update$object
//
signed long int alsa_snd_pcm_avail_update$object(struct _snd_pcm *);
// alsa_snd_pcm_close$object
//
signed int alsa_snd_pcm_close$object(struct _snd_pcm *);
// alsa_snd_pcm_delay$object
//
signed int alsa_snd_pcm_delay$object(struct _snd_pcm *, signed long int *);
// alsa_snd_pcm_drain$object
//
signed int alsa_snd_pcm_drain$object(struct _snd_pcm *);
// alsa_snd_pcm_drop$object
//
signed int alsa_snd_pcm_drop$object(struct _snd_pcm *);
// alsa_snd_pcm_format_size$object
//
signed long int alsa_snd_pcm_format_size$object(enum _snd_pcm_format, unsigned long int);
// alsa_snd_pcm_frames_to_bytes$object
//
signed long int alsa_snd_pcm_frames_to_bytes$object(struct _snd_pcm *, signed long int);
// alsa_snd_pcm_hw_params$object
//
signed int alsa_snd_pcm_hw_params$object(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// alsa_snd_pcm_hw_params_any$object
//
signed int alsa_snd_pcm_hw_params_any$object(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// alsa_snd_pcm_hw_params_dump$object
//
signed int alsa_snd_pcm_hw_params_dump$object(struct _snd_pcm_hw_params *, struct _snd_output *);
// alsa_snd_pcm_hw_params_free$object
//
void alsa_snd_pcm_hw_params_free$object(struct _snd_pcm_hw_params *);
// alsa_snd_pcm_hw_params_get_buffer_size$object
//
signed int alsa_snd_pcm_hw_params_get_buffer_size$object(const struct _snd_pcm_hw_params *, unsigned long int *);
// alsa_snd_pcm_hw_params_get_buffer_size_max$object
//
signed int alsa_snd_pcm_hw_params_get_buffer_size_max$object(const struct _snd_pcm_hw_params *, unsigned long int *);
// alsa_snd_pcm_hw_params_get_channels_max$object
//
signed int alsa_snd_pcm_hw_params_get_channels_max$object(const struct _snd_pcm_hw_params *, unsigned int *);
// alsa_snd_pcm_hw_params_get_channels_min$object
//
signed int alsa_snd_pcm_hw_params_get_channels_min$object(const struct _snd_pcm_hw_params *, unsigned int *);
// alsa_snd_pcm_hw_params_get_period_size_max$object
//
signed int alsa_snd_pcm_hw_params_get_period_size_max$object(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// alsa_snd_pcm_hw_params_get_period_size_min$object
//
signed int alsa_snd_pcm_hw_params_get_period_size_min$object(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// alsa_snd_pcm_hw_params_get_periods_max$object
//
signed int alsa_snd_pcm_hw_params_get_periods_max$object(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_get_periods_min$object
//
signed int alsa_snd_pcm_hw_params_get_periods_min$object(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_get_rate_max$object
//
signed int alsa_snd_pcm_hw_params_get_rate_max$object(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_get_rate_min$object
//
signed int alsa_snd_pcm_hw_params_get_rate_min$object(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_get_rate_numden$object
//
signed int alsa_snd_pcm_hw_params_get_rate_numden$object(const struct _snd_pcm_hw_params *, unsigned int *, unsigned int *);
// alsa_snd_pcm_hw_params_malloc$object
//
signed int alsa_snd_pcm_hw_params_malloc$object(struct _snd_pcm_hw_params **);
// alsa_snd_pcm_hw_params_set_access$object
//
signed int alsa_snd_pcm_hw_params_set_access$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access);
// alsa_snd_pcm_hw_params_set_buffer_size$object
//
signed int alsa_snd_pcm_hw_params_set_buffer_size$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int);
// alsa_snd_pcm_hw_params_set_buffer_size_min$object
//
signed int alsa_snd_pcm_hw_params_set_buffer_size_min$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *);
// alsa_snd_pcm_hw_params_set_buffer_size_near$object
//
signed int alsa_snd_pcm_hw_params_set_buffer_size_near$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *);
// alsa_snd_pcm_hw_params_set_channels$object
//
signed int alsa_snd_pcm_hw_params_set_channels$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// alsa_snd_pcm_hw_params_set_format$object
//
signed int alsa_snd_pcm_hw_params_set_format$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format);
// alsa_snd_pcm_hw_params_set_period_size$object
//
signed int alsa_snd_pcm_hw_params_set_period_size$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int);
// alsa_snd_pcm_hw_params_set_period_size_near$object
//
signed int alsa_snd_pcm_hw_params_set_period_size_near$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// alsa_snd_pcm_hw_params_set_periods_integer$object
//
signed int alsa_snd_pcm_hw_params_set_periods_integer$object(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// alsa_snd_pcm_hw_params_set_periods_min$object
//
signed int alsa_snd_pcm_hw_params_set_periods_min$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_set_rate$object
//
signed int alsa_snd_pcm_hw_params_set_rate$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int, signed int);
// alsa_snd_pcm_hw_params_set_rate_near$object
//
signed int alsa_snd_pcm_hw_params_set_rate_near$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// alsa_snd_pcm_hw_params_set_rate_resample$object
//
signed int alsa_snd_pcm_hw_params_set_rate_resample$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// alsa_snd_pcm_hw_params_sizeof$object
//
unsigned long int alsa_snd_pcm_hw_params_sizeof$object(void);
// alsa_snd_pcm_hw_params_test_access$object
//
signed int alsa_snd_pcm_hw_params_test_access$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access);
// alsa_snd_pcm_hw_params_test_format$object
//
signed int alsa_snd_pcm_hw_params_test_format$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format);
// alsa_snd_pcm_hw_params_test_period_size$object
//
signed int alsa_snd_pcm_hw_params_test_period_size$object(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int);
// alsa_snd_pcm_info$object
//
signed int alsa_snd_pcm_info$object(struct _snd_pcm *, struct _snd_pcm_info *);
// alsa_snd_pcm_info_free$object
//
void alsa_snd_pcm_info_free$object(struct _snd_pcm_info *);
// alsa_snd_pcm_info_get_card$object
//
signed int alsa_snd_pcm_info_get_card$object(const struct _snd_pcm_info *);
// alsa_snd_pcm_info_get_name$object
//
const char * alsa_snd_pcm_info_get_name$object(const struct _snd_pcm_info *);
// alsa_snd_pcm_info_malloc$object
//
signed int alsa_snd_pcm_info_malloc$object(struct _snd_pcm_info **);
// alsa_snd_pcm_info_set_device$object
//
void alsa_snd_pcm_info_set_device$object(struct _snd_pcm_info *, unsigned int);
// alsa_snd_pcm_info_set_stream$object
//
void alsa_snd_pcm_info_set_stream$object(struct _snd_pcm_info *, enum _snd_pcm_stream);
// alsa_snd_pcm_info_set_subdevice$object
//
void alsa_snd_pcm_info_set_subdevice$object(struct _snd_pcm_info *, unsigned int);
// alsa_snd_pcm_info_sizeof$object
//
unsigned long int alsa_snd_pcm_info_sizeof$object(void);
// alsa_snd_pcm_link$object
//
signed int alsa_snd_pcm_link$object(struct _snd_pcm *, struct _snd_pcm *);
// alsa_snd_pcm_mmap_begin$object
//
signed int alsa_snd_pcm_mmap_begin$object(struct _snd_pcm *, const struct _snd_pcm_channel_area **, unsigned long int *, unsigned long int *);
// alsa_snd_pcm_mmap_commit$object
//
signed long int alsa_snd_pcm_mmap_commit$object(struct _snd_pcm *, unsigned long int, unsigned long int);
// alsa_snd_pcm_nonblock$object
//
signed int alsa_snd_pcm_nonblock$object(struct _snd_pcm *, signed int);
// alsa_snd_pcm_open$object
//
signed int alsa_snd_pcm_open$object(struct _snd_pcm **, const char *, enum _snd_pcm_stream, signed int);
// alsa_snd_pcm_poll_descriptors$object
//
signed int alsa_snd_pcm_poll_descriptors$object(struct _snd_pcm *, struct pollfd *, unsigned int);
// alsa_snd_pcm_poll_descriptors_count$object
//
signed int alsa_snd_pcm_poll_descriptors_count$object(struct _snd_pcm *);
// alsa_snd_pcm_poll_descriptors_revents$object
//
signed int alsa_snd_pcm_poll_descriptors_revents$object(struct _snd_pcm *, struct pollfd *, unsigned int, unsigned short int *);
// alsa_snd_pcm_prepare$object
//
signed int alsa_snd_pcm_prepare$object(struct _snd_pcm *);
// alsa_snd_pcm_readi$object
//
signed long int alsa_snd_pcm_readi$object(struct _snd_pcm *, void *, unsigned long int);
// alsa_snd_pcm_readn$object
//
signed long int alsa_snd_pcm_readn$object(struct _snd_pcm *, void **, unsigned long int);
// alsa_snd_pcm_recover$object
//
signed int alsa_snd_pcm_recover$object(struct _snd_pcm *, signed int, signed int);
// alsa_snd_pcm_resume$object
//
signed int alsa_snd_pcm_resume$object(struct _snd_pcm *);
// alsa_snd_pcm_start$object
//
signed int alsa_snd_pcm_start$object(struct _snd_pcm *);
// alsa_snd_pcm_state$object
//
enum _snd_pcm_state alsa_snd_pcm_state$object(struct _snd_pcm *);
// alsa_snd_pcm_status$object
//
signed int alsa_snd_pcm_status$object(struct _snd_pcm *, struct _snd_pcm_status *);
// alsa_snd_pcm_status_get_delay$object
//
signed long int alsa_snd_pcm_status_get_delay$object(const struct _snd_pcm_status *);
// alsa_snd_pcm_status_get_state$object
//
enum _snd_pcm_state alsa_snd_pcm_status_get_state$object(const struct _snd_pcm_status *);
// alsa_snd_pcm_status_get_trigger_tstamp$object
//
void alsa_snd_pcm_status_get_trigger_tstamp$object(const struct _snd_pcm_status *, struct timeval *);
// alsa_snd_pcm_status_get_tstamp$object
//
void alsa_snd_pcm_status_get_tstamp$object(const struct _snd_pcm_status *, struct timeval *);
// alsa_snd_pcm_status_sizeof$object
//
unsigned long int alsa_snd_pcm_status_sizeof$object(void);
// alsa_snd_pcm_sw_params$object
//
signed int alsa_snd_pcm_sw_params$object(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// alsa_snd_pcm_sw_params_current$object
//
signed int alsa_snd_pcm_sw_params_current$object(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// alsa_snd_pcm_sw_params_free$object
//
void alsa_snd_pcm_sw_params_free$object(struct _snd_pcm_sw_params *);
// alsa_snd_pcm_sw_params_get_boundary$object
//
signed int alsa_snd_pcm_sw_params_get_boundary$object(const struct _snd_pcm_sw_params *, unsigned long int *);
// alsa_snd_pcm_sw_params_malloc$object
//
signed int alsa_snd_pcm_sw_params_malloc$object(struct _snd_pcm_sw_params **);
// alsa_snd_pcm_sw_params_set_avail_min$object
//
signed int alsa_snd_pcm_sw_params_set_avail_min$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_set_silence_size$object
//
signed int alsa_snd_pcm_sw_params_set_silence_size$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_set_silence_threshold$object
//
signed int alsa_snd_pcm_sw_params_set_silence_threshold$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_set_start_threshold$object
//
signed int alsa_snd_pcm_sw_params_set_start_threshold$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_set_stop_threshold$object
//
signed int alsa_snd_pcm_sw_params_set_stop_threshold$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_set_tstamp_mode$object
//
signed int alsa_snd_pcm_sw_params_set_tstamp_mode$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, enum _snd_pcm_tstamp);
// alsa_snd_pcm_sw_params_set_xfer_align$object
//
signed int alsa_snd_pcm_sw_params_set_xfer_align$object(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// alsa_snd_pcm_sw_params_sizeof$object
//
unsigned long int alsa_snd_pcm_sw_params_sizeof$object(void);
// alsa_snd_pcm_wait$object
//
signed int alsa_snd_pcm_wait$object(struct _snd_pcm *, signed int);
// alsa_snd_pcm_writei$object
//
signed long int alsa_snd_pcm_writei$object(struct _snd_pcm *, const void *, unsigned long int);
// alsa_snd_pcm_writen$object
//
signed long int alsa_snd_pcm_writen$object(struct _snd_pcm *, void **, unsigned long int);
// alsa_snd_strerror$object
//
const char * alsa_snd_strerror$object(signed int);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// fabs
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 181
extern double fabs(double);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// floor
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 184
extern double floor(double);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// ilogb
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 296
extern signed int ilogb(double);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// jack_activate
// file /usr/include/jack/jack.h line 183
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /usr/include/jack/jack.h line 104
signed int jack_client_close(struct _jack_client *);
// jack_client_name_size
// file /usr/include/jack/jack.h line 110
signed int jack_client_name_size(void);
// jack_client_open
// file /usr/include/jack/jack.h line 88
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_connect
// file /usr/include/jack/jack.h line 848
signed int jack_connect(struct _jack_client *, const char *, const char *);
// jack_deactivate
// file /usr/include/jack/jack.h line 192
signed int jack_deactivate(struct _jack_client *);
// jack_frame_time
// file /usr/include/jack/jack.h line 1179
unsigned int jack_frame_time(const struct _jack_client *);
// jack_get_buffer_size
// file /usr/include/jack/jack.h line 565
unsigned int jack_get_buffer_size(struct _jack_client *);
// jack_get_client_name
// file /usr/include/jack/jack.h line 118
char * jack_get_client_name(struct _jack_client *);
// jack_get_ports
// file /usr/include/jack/jack.h line 1137
const char ** jack_get_ports(struct _jack_client *, const char *, const char *, unsigned long int);
// jack_get_sample_rate
// file /usr/include/jack/jack.h line 554
unsigned int jack_get_sample_rate(struct _jack_client *);
// jack_on_shutdown
// file /usr/include/jack/jack.h line 300
void jack_on_shutdown(struct _jack_client *, void (*)(void *), void *);
// jack_port_by_name
// file /usr/include/jack/jack.h line 1147
struct _jack_port * jack_port_by_name(struct _jack_client *, const char *);
// jack_port_connected
// file /usr/include/jack/jack.h line 695
signed int jack_port_connected(const struct _jack_port *);
// jack_port_disconnect
// file /usr/include/jack/jack.h line 878
signed int jack_port_disconnect(struct _jack_client *, struct _jack_port *);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 649
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_get_latency
// file /usr/include/jack/jack.h line 1081
unsigned int jack_port_get_latency(struct _jack_port *);
// jack_port_name
// file /usr/include/jack/jack.h line 657
const char * jack_port_name(const struct _jack_port *);
// jack_port_name_size
// file /usr/include/jack/jack.h line 888
signed int jack_port_name_size(void);
// jack_port_register
// file /usr/include/jack/jack.h line 624
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_port_unregister
// file /usr/include/jack/jack.h line 636
signed int jack_port_unregister(struct _jack_client *, struct _jack_port *);
// jack_set_error_function
// file /usr/include/jack/jack.h line 1287
void jack_set_error_function(void (*)(const char *));
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_set_sample_rate_callback
// file /usr/include/jack/jack.h line 381
signed int jack_set_sample_rate_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_set_xrun_callback
// file /usr/include/jack/jack.h line 441
signed int jack_set_xrun_callback(struct _jack_client *, signed int (*)(void *), void *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// myCallback
// file ./test/patest_ringmix.c line 47
static signed int myCallback(const void *inputBuffer, void *outputBuffer, unsigned long int framesPerBuffer, const struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int statusFlags, void *userData);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// pow
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern double pow(double, double);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setscope
// file /usr/include/pthread.h line 353
extern signed int pthread_attr_setscope(union pthread_attr_t *, signed int);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$9 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$9 *, const union anonymous$23 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$9 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$9 *, union anonymous$8 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$9 *, union anonymous$8 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_equal
// file /usr/include/pthread.h line 280
extern signed int pthread_equal(unsigned long int, unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_getschedparam
// file /usr/include/pthread.h line 436
extern signed int pthread_getschedparam(unsigned long int, signed int *, struct sched_param *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$8 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$8 *, const union anonymous$23 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$8 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous$8 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$8 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setschedparam
// file /usr/include/pthread.h line 431
extern signed int pthread_setschedparam(unsigned long int, signed int, struct sched_param *);
// pthread_testcancel
// file /usr/include/pthread.h line 520
extern void pthread_testcancel(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous$24 *, signed int);
// regfree
// file /usr/include/regex.h line 574
extern void regfree(struct re_pattern_buffer *);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$2 *, struct anonymous$2 *, struct anonymous$2 *, struct timeval *);
// sem_destroy
// file /usr/include/semaphore.h line 39
extern signed int sem_destroy(union anonymous$22 *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$22 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$22 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$22 *);
// snd_asoundlib_version
// file /usr/include/alsa/global.h line 47
const char * snd_asoundlib_version(void);
// snd_card_next
// file /usr/include/alsa/control.h line 223
signed int snd_card_next(signed int *);
// snd_config_get_id
// file /usr/include/alsa/conf.h line 140
signed int snd_config_get_id(const struct _snd_config *, const char **);
// snd_config_get_string
// file /usr/include/alsa/conf.h line 145
signed int snd_config_get_string(const struct _snd_config *, const char **);
// snd_config_iterator_end
// file /usr/include/alsa/conf.h line 152
struct _snd_config_iterator * snd_config_iterator_end(const struct _snd_config *);
// snd_config_iterator_entry
// file /usr/include/alsa/conf.h line 153
struct _snd_config * snd_config_iterator_entry(struct _snd_config_iterator *);
// snd_config_iterator_first
// file /usr/include/alsa/conf.h line 150
struct _snd_config_iterator * snd_config_iterator_first(const struct _snd_config *);
// snd_config_iterator_next
// file /usr/include/alsa/conf.h line 151
struct _snd_config_iterator * snd_config_iterator_next(struct _snd_config_iterator *);
// snd_config_search
// file /usr/include/alsa/conf.h line 97
signed int snd_config_search(struct _snd_config *, const char *, struct _snd_config **);
// snd_config_update
// file /usr/include/alsa/conf.h line 92
signed int snd_config_update(void);
// snd_config_update_free_global
// file /usr/include/alsa/conf.h line 95
signed int snd_config_update_free_global(void);
// snd_ctl_card_info
// file /usr/include/alsa/control.h line 245
signed int snd_ctl_card_info(struct _snd_ctl *, struct _snd_ctl_card_info *);
// snd_ctl_card_info_free
// file /usr/include/alsa/control.h line 333
void snd_ctl_card_info_free(struct _snd_ctl_card_info *);
// snd_ctl_card_info_get_name
// file /usr/include/alsa/control.h line 339
const char * snd_ctl_card_info_get_name(const struct _snd_ctl_card_info *);
// snd_ctl_card_info_malloc
// file /usr/include/alsa/control.h line 332
signed int snd_ctl_card_info_malloc(struct _snd_ctl_card_info **);
// snd_ctl_card_info_sizeof
// file /usr/include/alsa/control.h line 326
unsigned long int snd_ctl_card_info_sizeof(void);
// snd_ctl_close
// file /usr/include/alsa/control.h line 235
signed int snd_ctl_close(struct _snd_ctl *);
// snd_ctl_open
// file /usr/include/alsa/control.h line 232
signed int snd_ctl_open(struct _snd_ctl **, const char *, signed int);
// snd_ctl_pcm_info
// file /usr/include/alsa/control.h line 264
signed int snd_ctl_pcm_info(struct _snd_ctl *, struct _snd_pcm_info *);
// snd_ctl_pcm_next_device
// file /usr/include/alsa/control.h line 263
signed int snd_ctl_pcm_next_device(struct _snd_ctl *, signed int *);
// snd_output_stdio_attach
// file /usr/include/alsa/output.h line 65
signed int snd_output_stdio_attach(struct _snd_output **, struct _IO_FILE *, signed int);
// snd_pcm_area_copy
// file /usr/include/alsa/pcm.h line 1081
signed int snd_pcm_area_copy(const struct _snd_pcm_channel_area *, unsigned long int, const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, enum _snd_pcm_format);
// snd_pcm_areas_silence
// file /usr/include/alsa/pcm.h line 1079
signed int snd_pcm_areas_silence(const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, unsigned long int, enum _snd_pcm_format);
// snd_pcm_avail_update
// file /usr/include/alsa/pcm.h line 490
signed long int snd_pcm_avail_update(struct _snd_pcm *);
// snd_pcm_close
// file /usr/include/alsa/pcm.h line 459
signed int snd_pcm_close(struct _snd_pcm *);
// snd_pcm_delay
// file /usr/include/alsa/pcm.h line 486
signed int snd_pcm_delay(struct _snd_pcm *, signed long int *);
// snd_pcm_drain
// file /usr/include/alsa/pcm.h line 482
signed int snd_pcm_drain(struct _snd_pcm *);
// snd_pcm_drop
// file /usr/include/alsa/pcm.h line 481
signed int snd_pcm_drop(struct _snd_pcm *);
// snd_pcm_format_size
// file /usr/include/alsa/pcm.h line 1065
signed long int snd_pcm_format_size(enum _snd_pcm_format, unsigned long int);
// snd_pcm_frames_to_bytes
// file /usr/include/alsa/pcm.h line 1073
signed long int snd_pcm_frames_to_bytes(struct _snd_pcm *, signed long int);
// snd_pcm_hw_params
// file /usr/include/alsa/pcm.h line 473
signed int snd_pcm_hw_params(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_any
// file /usr/include/alsa/pcm.h line 657
signed int snd_pcm_hw_params_any(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_dump
// file /usr/include/alsa/pcm.h line 1021
signed int snd_pcm_hw_params_dump(struct _snd_pcm_hw_params *, struct _snd_output *);
// snd_pcm_hw_params_free
// file /usr/include/alsa/pcm.h line 711
void snd_pcm_hw_params_free(struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_get_buffer_size
// file /usr/include/alsa/pcm.h line 820
signed int snd_pcm_hw_params_get_buffer_size(const struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_get_buffer_size_max
// file /usr/include/alsa/pcm.h line 822
signed int snd_pcm_hw_params_get_buffer_size_max(const struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_get_channels_max
// file /usr/include/alsa/pcm.h line 742
signed int snd_pcm_hw_params_get_channels_max(const struct _snd_pcm_hw_params *, unsigned int *);
// snd_pcm_hw_params_get_channels_min
// file /usr/include/alsa/pcm.h line 741
signed int snd_pcm_hw_params_get_channels_min(const struct _snd_pcm_hw_params *, unsigned int *);
// snd_pcm_hw_params_get_period_size_max
// file /usr/include/alsa/pcm.h line 784
signed int snd_pcm_hw_params_get_period_size_max(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// snd_pcm_hw_params_get_period_size_min
// file /usr/include/alsa/pcm.h line 783
signed int snd_pcm_hw_params_get_period_size_min(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// snd_pcm_hw_params_get_periods_max
// file /usr/include/alsa/pcm.h line 797
signed int snd_pcm_hw_params_get_periods_max(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_get_periods_min
// file /usr/include/alsa/pcm.h line 796
signed int snd_pcm_hw_params_get_periods_min(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_get_rate_max
// file /usr/include/alsa/pcm.h line 754
signed int snd_pcm_hw_params_get_rate_max(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_get_rate_min
// file /usr/include/alsa/pcm.h line 753
signed int snd_pcm_hw_params_get_rate_min(const struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_get_rate_numden
// file /usr/include/alsa/pcm.h line 672
signed int snd_pcm_hw_params_get_rate_numden(const struct _snd_pcm_hw_params *, unsigned int *, unsigned int *);
// snd_pcm_hw_params_malloc
// file /usr/include/alsa/pcm.h line 710
signed int snd_pcm_hw_params_malloc(struct _snd_pcm_hw_params **);
// snd_pcm_hw_params_set_access
// file /usr/include/alsa/pcm.h line 718
signed int snd_pcm_hw_params_set_access(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access);
// snd_pcm_hw_params_set_buffer_size
// file /usr/include/alsa/pcm.h line 824
signed int snd_pcm_hw_params_set_buffer_size(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int);
// snd_pcm_hw_params_set_buffer_size_min
// file /usr/include/alsa/pcm.h line 825
signed int snd_pcm_hw_params_set_buffer_size_min(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_set_buffer_size_near
// file /usr/include/alsa/pcm.h line 828
signed int snd_pcm_hw_params_set_buffer_size_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *);
// snd_pcm_hw_params_set_channels
// file /usr/include/alsa/pcm.h line 744
signed int snd_pcm_hw_params_set_channels(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// snd_pcm_hw_params_set_format
// file /usr/include/alsa/pcm.h line 726
signed int snd_pcm_hw_params_set_format(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format);
// snd_pcm_hw_params_set_period_size
// file /usr/include/alsa/pcm.h line 786
signed int snd_pcm_hw_params_set_period_size(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int);
// snd_pcm_hw_params_set_period_size_near
// file /usr/include/alsa/pcm.h line 790
signed int snd_pcm_hw_params_set_period_size_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *, signed int *);
// snd_pcm_hw_params_set_periods_integer
// file /usr/include/alsa/pcm.h line 806
signed int snd_pcm_hw_params_set_periods_integer(struct _snd_pcm *, struct _snd_pcm_hw_params *);
// snd_pcm_hw_params_set_periods_min
// file /usr/include/alsa/pcm.h line 800
signed int snd_pcm_hw_params_set_periods_min(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_set_rate
// file /usr/include/alsa/pcm.h line 756
signed int snd_pcm_hw_params_set_rate(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int, signed int);
// snd_pcm_hw_params_set_rate_near
// file /usr/include/alsa/pcm.h line 760
signed int snd_pcm_hw_params_set_rate_near(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *);
// snd_pcm_hw_params_set_rate_resample
// file /usr/include/alsa/pcm.h line 763
signed int snd_pcm_hw_params_set_rate_resample(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int);
// snd_pcm_hw_params_sizeof
// file /usr/include/alsa/pcm.h line 704
unsigned long int snd_pcm_hw_params_sizeof(void);
// snd_pcm_hw_params_test_access
// file /usr/include/alsa/pcm.h line 717
signed int snd_pcm_hw_params_test_access(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access);
// snd_pcm_hw_params_test_format
// file /usr/include/alsa/pcm.h line 725
signed int snd_pcm_hw_params_test_format(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format);
// snd_pcm_hw_params_test_period_size
// file /usr/include/alsa/pcm.h line 785
signed int snd_pcm_hw_params_test_period_size(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int);
// snd_pcm_info
// file /usr/include/alsa/pcm.h line 471
signed int snd_pcm_info(struct _snd_pcm *, struct _snd_pcm_info *);
// snd_pcm_info_free
// file /usr/include/alsa/pcm.h line 630
void snd_pcm_info_free(struct _snd_pcm_info *);
// snd_pcm_info_get_card
// file /usr/include/alsa/pcm.h line 635
signed int snd_pcm_info_get_card(const struct _snd_pcm_info *);
// snd_pcm_info_get_name
// file /usr/include/alsa/pcm.h line 637
const char * snd_pcm_info_get_name(const struct _snd_pcm_info *);
// snd_pcm_info_malloc
// file /usr/include/alsa/pcm.h line 629
signed int snd_pcm_info_malloc(struct _snd_pcm_info **);
// snd_pcm_info_set_device
// file /usr/include/alsa/pcm.h line 644
void snd_pcm_info_set_device(struct _snd_pcm_info *, unsigned int);
// snd_pcm_info_set_stream
// file /usr/include/alsa/pcm.h line 646
void snd_pcm_info_set_stream(struct _snd_pcm_info *, enum _snd_pcm_stream);
// snd_pcm_info_set_subdevice
// file /usr/include/alsa/pcm.h line 645
void snd_pcm_info_set_subdevice(struct _snd_pcm_info *, unsigned int);
// snd_pcm_info_sizeof
// file /usr/include/alsa/pcm.h line 623
unsigned long int snd_pcm_info_sizeof(void);
// snd_pcm_link
// file /usr/include/alsa/pcm.h line 502
signed int snd_pcm_link(struct _snd_pcm *, struct _snd_pcm *);
// snd_pcm_mmap_begin
// file /usr/include/alsa/pcm.h line 1034
signed int snd_pcm_mmap_begin(struct _snd_pcm *, const struct _snd_pcm_channel_area **, unsigned long int *, unsigned long int *);
// snd_pcm_mmap_commit
// file /usr/include/alsa/pcm.h line 1038
signed long int snd_pcm_mmap_commit(struct _snd_pcm *, unsigned long int, unsigned long int);
// snd_pcm_nonblock
// file /usr/include/alsa/pcm.h line 466
signed int snd_pcm_nonblock(struct _snd_pcm *, signed int);
// snd_pcm_open
// file /usr/include/alsa/pcm.h line 450
signed int snd_pcm_open(struct _snd_pcm **, const char *, enum _snd_pcm_stream, signed int);
// snd_pcm_poll_descriptors
// file /usr/include/alsa/pcm.h line 464
signed int snd_pcm_poll_descriptors(struct _snd_pcm *, struct pollfd *, unsigned int);
// snd_pcm_poll_descriptors_count
// file /usr/include/alsa/pcm.h line 463
signed int snd_pcm_poll_descriptors_count(struct _snd_pcm *);
// snd_pcm_poll_descriptors_revents
// file /usr/include/alsa/pcm.h line 465
signed int snd_pcm_poll_descriptors_revents(struct _snd_pcm *, struct pollfd *, unsigned int, unsigned short int *);
// snd_pcm_prepare
// file /usr/include/alsa/pcm.h line 477
signed int snd_pcm_prepare(struct _snd_pcm *);
// snd_pcm_readi
// file /usr/include/alsa/pcm.h line 497
signed long int snd_pcm_readi(struct _snd_pcm *, void *, unsigned long int);
// snd_pcm_readn
// file /usr/include/alsa/pcm.h line 499
signed long int snd_pcm_readn(struct _snd_pcm *, void **, unsigned long int);
// snd_pcm_recover
// file /usr/include/alsa/pcm.h line 602
signed int snd_pcm_recover(struct _snd_pcm *, signed int, signed int);
// snd_pcm_resume
// file /usr/include/alsa/pcm.h line 487
signed int snd_pcm_resume(struct _snd_pcm *);
// snd_pcm_start
// file /usr/include/alsa/pcm.h line 480
signed int snd_pcm_start(struct _snd_pcm *);
// snd_pcm_state
// file /usr/include/alsa/pcm.h line 484
enum _snd_pcm_state snd_pcm_state(struct _snd_pcm *);
// snd_pcm_status
// file /usr/include/alsa/pcm.h line 479
signed int snd_pcm_status(struct _snd_pcm *, struct _snd_pcm_status *);
// snd_pcm_status_get_delay
// file /usr/include/alsa/pcm.h line 983
signed long int snd_pcm_status_get_delay(const struct _snd_pcm_status *);
// snd_pcm_status_get_state
// file /usr/include/alsa/pcm.h line 977
enum _snd_pcm_state snd_pcm_status_get_state(const struct _snd_pcm_status *);
// snd_pcm_status_get_trigger_tstamp
// file /usr/include/alsa/pcm.h line 978
void snd_pcm_status_get_trigger_tstamp(const struct _snd_pcm_status *, struct timeval *);
// snd_pcm_status_get_tstamp
// file /usr/include/alsa/pcm.h line 980
void snd_pcm_status_get_tstamp(const struct _snd_pcm_status *, struct timeval *);
// snd_pcm_status_sizeof
// file /usr/include/alsa/pcm.h line 968
unsigned long int snd_pcm_status_sizeof(void);
// snd_pcm_sw_params
// file /usr/include/alsa/pcm.h line 476
signed int snd_pcm_sw_params(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// snd_pcm_sw_params_current
// file /usr/include/alsa/pcm.h line 475
signed int snd_pcm_sw_params_current(struct _snd_pcm *, struct _snd_pcm_sw_params *);
// snd_pcm_sw_params_free
// file /usr/include/alsa/pcm.h line 852
void snd_pcm_sw_params_free(struct _snd_pcm_sw_params *);
// snd_pcm_sw_params_get_boundary
// file /usr/include/alsa/pcm.h line 854
signed int snd_pcm_sw_params_get_boundary(const struct _snd_pcm_sw_params *, unsigned long int *);
// snd_pcm_sw_params_malloc
// file /usr/include/alsa/pcm.h line 851
signed int snd_pcm_sw_params_malloc(struct _snd_pcm_sw_params **);
// snd_pcm_sw_params_set_avail_min
// file /usr/include/alsa/pcm.h line 862
signed int snd_pcm_sw_params_set_avail_min(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_silence_size
// file /usr/include/alsa/pcm.h line 872
signed int snd_pcm_sw_params_set_silence_size(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_silence_threshold
// file /usr/include/alsa/pcm.h line 870
signed int snd_pcm_sw_params_set_silence_threshold(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_start_threshold
// file /usr/include/alsa/pcm.h line 866
signed int snd_pcm_sw_params_set_start_threshold(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_stop_threshold
// file /usr/include/alsa/pcm.h line 868
signed int snd_pcm_sw_params_set_stop_threshold(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_set_tstamp_mode
// file /usr/include/alsa/pcm.h line 858
signed int snd_pcm_sw_params_set_tstamp_mode(struct _snd_pcm *, struct _snd_pcm_sw_params *, enum _snd_pcm_tstamp);
// snd_pcm_sw_params_set_xfer_align
// file /usr/include/alsa/pcm.h line 1257
signed int snd_pcm_sw_params_set_xfer_align(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int);
// snd_pcm_sw_params_sizeof
// file /usr/include/alsa/pcm.h line 845
unsigned long int snd_pcm_sw_params_sizeof(void);
// snd_pcm_wait
// file /usr/include/alsa/pcm.h line 500
signed int snd_pcm_wait(struct _snd_pcm *, signed int);
// snd_pcm_writei
// file /usr/include/alsa/pcm.h line 496
signed long int snd_pcm_writei(struct _snd_pcm *, const void *, unsigned long int);
// snd_pcm_writen
// file /usr/include/alsa/pcm.h line 498
signed long int snd_pcm_writen(struct _snd_pcm *, void **, unsigned long int);
// snd_strerror
// file /usr/include/alsa/error.h line 45
const char * snd_strerror(signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// userCB$object
//
void userCB$object(const char *);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$11
{
  // Close
  signed int (*Close)(void *);
  // Start
  signed int (*Start)(void *);
  // Stop
  signed int (*Stop)(void *);
  // Abort
  signed int (*Abort)(void *);
  // IsStopped
  signed int (*IsStopped)(void *);
  // IsActive
  signed int (*IsActive)(void *);
  // GetTime
  double (*GetTime)(void *);
  // GetCpuLoad
  double (*GetCpuLoad)(void *);
  // Read
  signed int (*Read)(void *, void *, unsigned long int);
  // Write
  signed int (*Write)(void *, const void *, unsigned long int);
  // GetReadAvailable
  signed long int (*GetReadAvailable)(void *);
  // GetWriteAvailable
  signed long int (*GetWriteAvailable)(void *);
};

struct anonymous$19
{
  // alsaName
  char *alsaName;
  // name
  char *name;
  // isPlug
  signed int isPlug;
  // hasPlayback
  signed int hasPlayback;
  // hasCapture
  signed int hasCapture;
};

struct anonymous$25
{
  // Float32_To_Int32
  void (*Float32_To_Int32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int32_Dither
  void (*Float32_To_Int32_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int32_Clip
  void (*Float32_To_Int32_Clip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int32_DitherClip
  void (*Float32_To_Int32_DitherClip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int24
  void (*Float32_To_Int24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int24_Dither
  void (*Float32_To_Int24_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int24_Clip
  void (*Float32_To_Int24_Clip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int24_DitherClip
  void (*Float32_To_Int24_DitherClip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int16
  void (*Float32_To_Int16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int16_Dither
  void (*Float32_To_Int16_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int16_Clip
  void (*Float32_To_Int16_Clip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int16_DitherClip
  void (*Float32_To_Int16_DitherClip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int8
  void (*Float32_To_Int8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int8_Dither
  void (*Float32_To_Int8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int8_Clip
  void (*Float32_To_Int8_Clip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_Int8_DitherClip
  void (*Float32_To_Int8_DitherClip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_UInt8
  void (*Float32_To_UInt8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_UInt8_Dither
  void (*Float32_To_UInt8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_UInt8_Clip
  void (*Float32_To_UInt8_Clip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Float32_To_UInt8_DitherClip
  void (*Float32_To_UInt8_DitherClip)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Float32
  void (*Int32_To_Float32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int24
  void (*Int32_To_Int24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int24_Dither
  void (*Int32_To_Int24_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int16
  void (*Int32_To_Int16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int16_Dither
  void (*Int32_To_Int16_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int8
  void (*Int32_To_Int8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_Int8_Dither
  void (*Int32_To_Int8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_UInt8
  void (*Int32_To_UInt8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int32_To_UInt8_Dither
  void (*Int32_To_UInt8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Float32
  void (*Int24_To_Float32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Int32
  void (*Int24_To_Int32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Int16
  void (*Int24_To_Int16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Int16_Dither
  void (*Int24_To_Int16_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Int8
  void (*Int24_To_Int8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_Int8_Dither
  void (*Int24_To_Int8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_UInt8
  void (*Int24_To_UInt8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int24_To_UInt8_Dither
  void (*Int24_To_UInt8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_Float32
  void (*Int16_To_Float32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_Int32
  void (*Int16_To_Int32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_Int24
  void (*Int16_To_Int24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_Int8
  void (*Int16_To_Int8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_Int8_Dither
  void (*Int16_To_Int8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_UInt8
  void (*Int16_To_UInt8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int16_To_UInt8_Dither
  void (*Int16_To_UInt8_Dither)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int8_To_Float32
  void (*Int8_To_Float32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int8_To_Int32
  void (*Int8_To_Int32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int8_To_Int24
  void (*Int8_To_Int24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int8_To_Int16
  void (*Int8_To_Int16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Int8_To_UInt8
  void (*Int8_To_UInt8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // UInt8_To_Float32
  void (*UInt8_To_Float32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // UInt8_To_Int32
  void (*UInt8_To_Int32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // UInt8_To_Int24
  void (*UInt8_To_Int24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // UInt8_To_Int16
  void (*UInt8_To_Int16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // UInt8_To_Int8
  void (*UInt8_To_Int8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Copy_8_To_8
  void (*Copy_8_To_8)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Copy_16_To_16
  void (*Copy_16_To_16)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Copy_24_To_24
  void (*Copy_24_To_24)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // Copy_32_To_32
  void (*Copy_32_To_32)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
};

struct anonymous
{
  // ZeroU8
  void (*ZeroU8)(void *, signed int, unsigned int);
  // Zero8
  void (*Zero8)(void *, signed int, unsigned int);
  // Zero16
  void (*Zero16)(void *, signed int, unsigned int);
  // Zero24
  void (*Zero24)(void *, signed int, unsigned int);
  // Zero32
  void (*Zero32)(void *, signed int, unsigned int);
};

struct anonymous$2
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous$20
{
  // __cancel_jmp_buf
  signed long int __cancel_jmp_buf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
};

struct anonymous$18
{
  // __cancel_jmp_buf
  struct anonymous$20 __cancel_jmp_buf[1l];
  // __pad
  void *__pad[4l];
};

struct anonymous$10
{
  // samplingPeriod
  double samplingPeriod;
  // measurementStartTime
  double measurementStartTime;
  // averageLoad
  double averageLoad;
};

struct anonymous$17
{
  // __lock
  signed int __lock;
  // __futex
  unsigned int __futex;
  // __total_seq
  unsigned long long int __total_seq;
  // __wakeup_seq
  unsigned long long int __wakeup_seq;
  // __woken_seq
  unsigned long long int __woken_seq;
  // __mutex
  void *__mutex;
  // __nwaiters
  unsigned int __nwaiters;
  // __broadcast_seq
  unsigned int __broadcast_seq;
};

struct anonymous$3
{
  // fd
  signed int fd;
  // devName
  const char *devName;
  // userChannelCount
  signed int userChannelCount;
  // hostChannelCount
  signed int hostChannelCount;
  // userInterleaved
  signed int userInterleaved;
  // buffer
  void *buffer;
  // userFormat
  unsigned long int userFormat;
  // hostFormat
  unsigned long int hostFormat;
  // latency
  double latency;
  // hostFrames
  unsigned long int hostFrames;
  // numBufs
  unsigned long int numBufs;
  // userBuffers
  void **userBuffers;
};

struct anonymous$24
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous$14
{
  // linkCount
  signed long int linkCount;
  // linkBlocks
  struct PaUtilAllocationGroupLink *linkBlocks;
  // spareLinks
  struct PaUtilAllocationGroupLink *spareLinks;
  // allocations
  struct PaUtilAllocationGroupLink *allocations;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$8
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous$7
{
  // mtx
  union anonymous$8 mtx;
};

struct PaUtilPrivatePaFrontHostApiInfo
{
  // baseDeviceIndex
  unsigned long int baseDeviceIndex;
};

struct PaHostApiInfo
{
  // structVersion
  signed int structVersion;
  // type
  enum PaHostApiTypeId type;
  // name
  const char *name;
  // deviceCount
  signed int deviceCount;
  // defaultInputDevice
  signed int defaultInputDevice;
  // defaultOutputDevice
  signed int defaultOutputDevice;
};

struct PaUtilHostApiRepresentation
{
  // privatePaFrontInfo
  struct PaUtilPrivatePaFrontHostApiInfo privatePaFrontInfo;
  // info
  struct PaHostApiInfo info;
  // deviceInfos
  struct PaDeviceInfo **deviceInfos;
  // Terminate
  void (*Terminate)(struct PaUtilHostApiRepresentation *);
  // OpenStream
  signed int (*OpenStream)(struct PaUtilHostApiRepresentation *, void **, const struct PaStreamParameters *, const struct PaStreamParameters *, double, unsigned long int, unsigned long int, signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *);
  // IsFormatSupported
  signed int (*IsFormatSupported)(struct PaUtilHostApiRepresentation *, const struct PaStreamParameters *, const struct PaStreamParameters *, double);
};

union anonymous$9
{
  // __data
  struct anonymous$17 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct anonymous$21
{
  // commonHostApiRep
  struct PaUtilHostApiRepresentation commonHostApiRep;
  // callbackStreamInterface
  struct anonymous$11 callbackStreamInterface;
  // blockingStreamInterface
  struct anonymous$11 blockingStreamInterface;
  // deviceInfoMemory
  struct anonymous$14 *deviceInfoMemory;
  // jack_client
  struct _jack_client *jack_client;
  // jack_buffer_size
  signed int jack_buffer_size;
  // hostApiIndex
  signed int hostApiIndex;
  // mtx
  union anonymous$8 mtx;
  // cond
  union anonymous$9 cond;
  // inputBase
  unsigned long int inputBase;
  // outputBase
  unsigned long int outputBase;
  // xrun
  volatile signed int xrun;
  // toAdd
  struct PaJackStream * volatile toAdd;
  // toRemove
  struct PaJackStream * volatile toRemove;
  // processQueue
  struct PaJackStream *processQueue;
  // jackIsDown
  volatile signed int jackIsDown;
};

struct anonymous$15
{
  // inheritedHostApiRep
  struct PaUtilHostApiRepresentation inheritedHostApiRep;
  // callbackStreamInterface
  struct anonymous$11 callbackStreamInterface;
  // blockingStreamInterface
  struct anonymous$11 blockingStreamInterface;
  // allocations
  struct anonymous$14 *allocations;
};

struct anonymous$1
{
  // inheritedHostApiRep
  struct PaUtilHostApiRepresentation inheritedHostApiRep;
  // callbackStreamInterface
  struct anonymous$11 callbackStreamInterface;
  // blockingStreamInterface
  struct anonymous$11 blockingStreamInterface;
  // allocations
  struct anonymous$14 *allocations;
  // hostApiIndex
  signed int hostApiIndex;
};

struct anonymous$0
{
  // callbackThread
  unsigned long int callbackThread;
};

struct PaUtilChannelDescriptor
{
  // data
  void *data;
  // stride
  unsigned int stride;
};

struct PaUtilTriangularDitherGenerator
{
  // previous
  unsigned int previous;
  // randSeed1
  unsigned int randSeed1;
  // randSeed2
  unsigned int randSeed2;
};

struct anonymous$13
{
  // framesPerUserBuffer
  unsigned long int framesPerUserBuffer;
  // framesPerHostBuffer
  unsigned long int framesPerHostBuffer;
  // hostBufferSizeMode
  enum anonymous$12 hostBufferSizeMode;
  // useNonAdaptingProcess
  signed int useNonAdaptingProcess;
  // userOutputSampleFormatIsEqualToHost
  signed int userOutputSampleFormatIsEqualToHost;
  // userInputSampleFormatIsEqualToHost
  signed int userInputSampleFormatIsEqualToHost;
  // framesPerTempBuffer
  unsigned long int framesPerTempBuffer;
  // inputChannelCount
  unsigned int inputChannelCount;
  // bytesPerHostInputSample
  unsigned int bytesPerHostInputSample;
  // bytesPerUserInputSample
  unsigned int bytesPerUserInputSample;
  // userInputIsInterleaved
  signed int userInputIsInterleaved;
  // inputConverter
  void (*inputConverter)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // inputZeroer
  void (*inputZeroer)(void *, signed int, unsigned int);
  // outputChannelCount
  unsigned int outputChannelCount;
  // bytesPerHostOutputSample
  unsigned int bytesPerHostOutputSample;
  // bytesPerUserOutputSample
  unsigned int bytesPerUserOutputSample;
  // userOutputIsInterleaved
  signed int userOutputIsInterleaved;
  // outputConverter
  void (*outputConverter)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *);
  // outputZeroer
  void (*outputZeroer)(void *, signed int, unsigned int);
  // initialFramesInTempInputBuffer
  unsigned long int initialFramesInTempInputBuffer;
  // initialFramesInTempOutputBuffer
  unsigned long int initialFramesInTempOutputBuffer;
  // tempInputBuffer
  void *tempInputBuffer;
  // tempInputBufferPtrs
  void **tempInputBufferPtrs;
  // framesInTempInputBuffer
  unsigned long int framesInTempInputBuffer;
  // tempOutputBuffer
  void *tempOutputBuffer;
  // tempOutputBufferPtrs
  void **tempOutputBufferPtrs;
  // framesInTempOutputBuffer
  unsigned long int framesInTempOutputBuffer;
  // timeInfo
  struct PaStreamCallbackTimeInfo *timeInfo;
  // callbackStatusFlags
  unsigned long int callbackStatusFlags;
  // hostInputIsInterleaved
  signed int hostInputIsInterleaved;
  // hostInputFrameCount
  unsigned long int hostInputFrameCount[2l];
  // hostInputChannels
  struct PaUtilChannelDescriptor *hostInputChannels[2l];
  // hostOutputIsInterleaved
  signed int hostOutputIsInterleaved;
  // hostOutputFrameCount
  unsigned long int hostOutputFrameCount[2l];
  // hostOutputChannels
  struct PaUtilChannelDescriptor *hostOutputChannels[2l];
  // ditherGenerator
  struct PaUtilTriangularDitherGenerator ditherGenerator;
  // samplePeriod
  double samplePeriod;
  // streamCallback
  signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
  // userData
  void *userData;
};

struct anonymous$16
{
  // hostSampleFormat
  unsigned long int hostSampleFormat;
  // numUserChannels
  signed int numUserChannels;
  // numHostChannels
  signed int numHostChannels;
  // userInterleaved
  signed int userInterleaved;
  // hostInterleaved
  signed int hostInterleaved;
  // canMmap
  signed int canMmap;
  // nonMmapBuffer
  void *nonMmapBuffer;
  // nonMmapBufferSize
  unsigned int nonMmapBufferSize;
  // device
  signed int device;
  // deviceIsPlug
  signed int deviceIsPlug;
  // useReventFix
  signed int useReventFix;
  // pcm
  struct _snd_pcm *pcm;
  // framesPerPeriod
  unsigned long int framesPerPeriod;
  // alsaBufferSize
  unsigned long int alsaBufferSize;
  // nativeFormat
  enum _snd_pcm_format nativeFormat;
  // nfds
  unsigned int nfds;
  // ready
  signed int ready;
  // userBuffers
  void **userBuffers;
  // offset
  unsigned long int offset;
  // streamDir
  enum anonymous$5 streamDir;
  // channelAreas
  struct _snd_pcm_channel_area *channelAreas;
  // card
  signed int card;
};

struct anonymous$6
{
  // thread
  unsigned long int thread;
  // parentWaiting
  signed int parentWaiting;
  // stopRequested
  signed int stopRequested;
  // locked
  signed int locked;
  // mtx
  struct anonymous$7 mtx;
  // cond
  union anonymous$9 cond;
  // stopRequest
  volatile signed int stopRequest;
};

union anonymous$22
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$23
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct PaDeviceInfo
{
  // structVersion
  signed int structVersion;
  // name
  const char *name;
  // hostApi
  signed int hostApi;
  // maxInputChannels
  signed int maxInputChannels;
  // maxOutputChannels
  signed int maxOutputChannels;
  // defaultLowInputLatency
  double defaultLowInputLatency;
  // defaultLowOutputLatency
  double defaultLowOutputLatency;
  // defaultHighInputLatency
  double defaultHighInputLatency;
  // defaultHighOutputLatency
  double defaultHighOutputLatency;
  // defaultSampleRate
  double defaultSampleRate;
};

struct PaAlsaDeviceInfo
{
  // baseDeviceInfo
  struct PaDeviceInfo baseDeviceInfo;
  // alsaName
  char *alsaName;
  // isPlug
  signed int isPlug;
  // minInputChannels
  signed int minInputChannels;
  // minOutputChannels
  signed int minOutputChannels;
};

struct PaAlsaHostApiRepresentation
{
  // baseHostApiRep
  struct PaUtilHostApiRepresentation baseHostApiRep;
  // callbackStreamInterface
  struct anonymous$11 callbackStreamInterface;
  // blockingStreamInterface
  struct anonymous$11 blockingStreamInterface;
  // allocations
  struct anonymous$14 *allocations;
  // hostApiIndex
  signed int hostApiIndex;
  // alsaLibVersion
  unsigned int alsaLibVersion;
};

struct PaStreamInfo
{
  // structVersion
  signed int structVersion;
  // inputLatency
  double inputLatency;
  // outputLatency
  double outputLatency;
  // sampleRate
  double sampleRate;
};

struct PaUtilStreamRepresentation
{
  // magic
  unsigned long int magic;
  // nextOpenStream
  struct PaUtilStreamRepresentation *nextOpenStream;
  // streamInterface
  struct anonymous$11 *streamInterface;
  // streamCallback
  signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *);
  // streamFinishedCallback
  void (*streamFinishedCallback)(void *);
  // userData
  void *userData;
  // streamInfo
  struct PaStreamInfo streamInfo;
  // hostApiType
  enum PaHostApiTypeId hostApiType;
};

struct PaAlsaStream
{
  // streamRepresentation
  struct PaUtilStreamRepresentation streamRepresentation;
  // cpuLoadMeasurer
  struct anonymous$10 cpuLoadMeasurer;
  // bufferProcessor
  struct anonymous$13 bufferProcessor;
  // thread
  struct anonymous$6 thread;
  // framesPerUserBuffer
  unsigned long int framesPerUserBuffer;
  // maxFramesPerHostBuffer
  unsigned long int maxFramesPerHostBuffer;
  // primeBuffers
  signed int primeBuffers;
  // callbackMode
  signed int callbackMode;
  // pcmsSynced
  signed int pcmsSynced;
  // rtSched
  signed int rtSched;
  // pfds
  struct pollfd *pfds;
  // pollTimeout
  signed int pollTimeout;
  // callback_finished
  volatile signed int callback_finished;
  // callbackAbort
  volatile signed int callbackAbort;
  // isActive
  volatile signed int isActive;
  // stateMtx
  struct anonymous$7 stateMtx;
  // neverDropInput
  signed int neverDropInput;
  // underrun
  double underrun;
  // overrun
  double overrun;
  // capture
  struct anonymous$16 capture;
  // playback
  struct anonymous$16 playback;
};

struct PaAlsaStreamInfo
{
  // size
  unsigned long int size;
  // hostApiType
  enum PaHostApiTypeId hostApiType;
  // version
  unsigned long int version;
  // deviceString
  const char *deviceString;
};

struct PaHostErrorInfo
{
  // hostApiType
  enum PaHostApiTypeId hostApiType;
  // errorCode
  signed long int errorCode;
  // errorText
  const char *errorText;
};

struct PaUtilRingBuffer
{
  // bufferSize
  signed long int bufferSize;
  // writeIndex
  volatile signed long int writeIndex;
  // readIndex
  volatile signed long int readIndex;
  // bigMask
  signed long int bigMask;
  // smallMask
  signed long int smallMask;
  // elementSizeBytes
  signed long int elementSizeBytes;
  // buffer
  char *buffer;
};

struct PaJackStream
{
  // streamRepresentation
  struct PaUtilStreamRepresentation streamRepresentation;
  // bufferProcessor
  struct anonymous$13 bufferProcessor;
  // cpuLoadMeasurer
  struct anonymous$10 cpuLoadMeasurer;
  // hostApi
  struct anonymous$21 *hostApi;
  // local_input_ports
  struct _jack_port **local_input_ports;
  // local_output_ports
  struct _jack_port **local_output_ports;
  // remote_input_ports
  struct _jack_port **remote_input_ports;
  // remote_output_ports
  struct _jack_port **remote_output_ports;
  // num_incoming_connections
  signed int num_incoming_connections;
  // num_outgoing_connections
  signed int num_outgoing_connections;
  // jack_client
  struct _jack_client *jack_client;
  // is_running
  volatile signed int is_running;
  // is_active
  volatile signed int is_active;
  // doStart
  volatile signed int doStart;
  // doStop
  volatile signed int doStop;
  // doAbort
  volatile signed int doAbort;
  // t0
  unsigned int t0;
  // stream_memory
  struct anonymous$14 *stream_memory;
  // callbackResult
  signed int callbackResult;
  // isSilenced
  signed int isSilenced;
  // xrun
  signed int xrun;
  // isBlockingStream
  signed int isBlockingStream;
  // inFIFO
  struct PaUtilRingBuffer inFIFO;
  // outFIFO
  struct PaUtilRingBuffer outFIFO;
  // data_available
  volatile signed int data_available;
  // data_semaphore
  union anonymous$22 data_semaphore;
  // bytesPerFrame
  signed int bytesPerFrame;
  // samplesPerFrame
  signed int samplesPerFrame;
  // next
  struct PaJackStream *next;
};

struct PaOssStream
{
  // streamRepresentation
  struct PaUtilStreamRepresentation streamRepresentation;
  // cpuLoadMeasurer
  struct anonymous$10 cpuLoadMeasurer;
  // bufferProcessor
  struct anonymous$13 bufferProcessor;
  // threading
  struct anonymous$0 threading;
  // sharedDevice
  signed int sharedDevice;
  // framesPerHostBuffer
  unsigned long int framesPerHostBuffer;
  // triggered
  signed int triggered;
  // isActive
  signed int isActive;
  // isStopped
  signed int isStopped;
  // lastPosPtr
  signed int lastPosPtr;
  // lastStreamBytes
  double lastStreamBytes;
  // framesProcessed
  signed int framesProcessed;
  // sampleRate
  double sampleRate;
  // callbackMode
  signed int callbackMode;
  // callbackStop
  volatile signed int callbackStop;
  // callbackAbort
  volatile signed int callbackAbort;
  // capture
  struct anonymous$3 *capture;
  // playback
  struct anonymous$3 *playback;
  // pollTimeout
  unsigned long int pollTimeout;
  // semaphore
  union anonymous$22 semaphore;
};

struct PaSkeletonStream
{
  // streamRepresentation
  struct PaUtilStreamRepresentation streamRepresentation;
  // cpuLoadMeasurer
  struct anonymous$10 cpuLoadMeasurer;
  // bufferProcessor
  struct anonymous$13 bufferProcessor;
  // framesPerHostCallback
  unsigned long int framesPerHostCallback;
};

struct PaStreamCallbackTimeInfo
{
  // inputBufferAdcTime
  double inputBufferAdcTime;
  // currentTime
  double currentTime;
  // outputBufferDacTime
  double outputBufferDacTime;
};

struct PaStreamParameters
{
  // device
  signed int device;
  // channelCount
  signed int channelCount;
  // sampleFormat
  unsigned long int sampleFormat;
  // suggestedLatency
  double suggestedLatency;
  // hostApiSpecificStreamInfo
  void *hostApiSpecificStreamInfo;
};

struct PaUtilAllocationGroupLink
{
  // next
  struct PaUtilAllocationGroupLink *next;
  // buffer
  void *buffer;
};

struct PaUtilHostApiSpecificStreamInfoHeader
{
  // size
  unsigned long int size;
  // hostApiType
  enum PaHostApiTypeId hostApiType;
  // version
  unsigned long int version;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _snd_pcm_channel_area
{
  // addr
  void *addr;
  // first
  unsigned int first;
  // step
  unsigned int step;
};

struct audio_buf_info
{
  // fragments
  signed int fragments;
  // fragstotal
  signed int fragstotal;
  // fragsize
  signed int fragsize;
  // bytes
  signed int bytes;
};

struct count_info
{
  // bytes
  signed int bytes;
  // blocks
  signed int blocks;
  // ptr
  signed int ptr;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct re_pattern_buffer
{
  // __buffer
  unsigned char *__buffer;
  // __allocated
  unsigned long int __allocated;
  // __used
  unsigned long int __used;
  // __syntax
  unsigned long int __syntax;
  // __fastmap
  char *__fastmap;
  // __translate
  unsigned char *__translate;
  // re_nsub
  unsigned long int re_nsub;
  // __can_be_null
  unsigned int __can_be_null : 1;
  // __regs_allocated
  unsigned int __regs_allocated : 2;
  // __fastmap_accurate
  unsigned int __fastmap_accurate : 1;
  // __no_sub
  unsigned int __no_sub : 1;
  // __not_bol
  unsigned int __not_bol : 1;
  // __not_eol
  unsigned int __not_eol : 1;
  // __newline_anchor
  unsigned int __newline_anchor : 1;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// alsa_snd_asoundlib_version
// file src/hostapi/alsa/pa_linux_alsa.c line 229
static const char * (*alsa_snd_asoundlib_version)(void) = ((const char * (*)(void))NULL);
// alsa_snd_card_next
// file src/hostapi/alsa/pa_linux_alsa.c line 228
static signed int (*alsa_snd_card_next)(signed int *) = ((signed int (*)(signed int *))NULL);
// alsa_snd_config
// file src/hostapi/alsa/pa_linux_alsa.c line 209
static struct _snd_config **alsa_snd_config = ((struct _snd_config **)NULL);
// alsa_snd_config_get_id
// file src/hostapi/alsa/pa_linux_alsa.c line 217
static signed int (*alsa_snd_config_get_id)(const struct _snd_config *, const char **) = ((signed int (*)(const struct _snd_config *, const char **))NULL);
// alsa_snd_config_get_string
// file src/hostapi/alsa/pa_linux_alsa.c line 216
static signed int (*alsa_snd_config_get_string)(const struct _snd_config *, const char **) = ((signed int (*)(const struct _snd_config *, const char **))NULL);
// alsa_snd_config_iterator_end
// file src/hostapi/alsa/pa_linux_alsa.c line 214
static struct _snd_config_iterator * (*alsa_snd_config_iterator_end)(const struct _snd_config *) = ((struct _snd_config_iterator * (*)(const struct _snd_config *))NULL);
// alsa_snd_config_iterator_entry
// file src/hostapi/alsa/pa_linux_alsa.c line 212
static struct _snd_config * (*alsa_snd_config_iterator_entry)(struct _snd_config_iterator *) = ((struct _snd_config * (*)(struct _snd_config_iterator *))NULL);
// alsa_snd_config_iterator_first
// file src/hostapi/alsa/pa_linux_alsa.c line 213
static struct _snd_config_iterator * (*alsa_snd_config_iterator_first)(const struct _snd_config *) = ((struct _snd_config_iterator * (*)(const struct _snd_config *))NULL);
// alsa_snd_config_iterator_next
// file src/hostapi/alsa/pa_linux_alsa.c line 215
static struct _snd_config_iterator * (*alsa_snd_config_iterator_next)(struct _snd_config_iterator *) = ((struct _snd_config_iterator * (*)(struct _snd_config_iterator *))NULL);
// alsa_snd_config_search
// file src/hostapi/alsa/pa_linux_alsa.c line 211
static signed int (*alsa_snd_config_search)(struct _snd_config *, const char *, struct _snd_config **) = ((signed int (*)(struct _snd_config *, const char *, struct _snd_config **))NULL);
// alsa_snd_config_update
// file src/hostapi/alsa/pa_linux_alsa.c line 210
static signed int (*alsa_snd_config_update)(void) = ((signed int (*)(void))NULL);
// alsa_snd_config_update_free_global
// file src/hostapi/alsa/pa_linux_alsa.c line 218
static signed int (*alsa_snd_config_update_free_global)(void) = ((signed int (*)(void))NULL);
// alsa_snd_ctl_card_info
// file src/hostapi/alsa/pa_linux_alsa.c line 204
static signed int (*alsa_snd_ctl_card_info)(struct _snd_ctl *, struct _snd_ctl_card_info *) = ((signed int (*)(struct _snd_ctl *, struct _snd_ctl_card_info *))NULL);
// alsa_snd_ctl_card_info_free
// file src/hostapi/alsa/pa_linux_alsa.c line 203
static void (*alsa_snd_ctl_card_info_free)(struct _snd_ctl_card_info *) = ((void (*)(struct _snd_ctl_card_info *))NULL);
// alsa_snd_ctl_card_info_get_name
// file src/hostapi/alsa/pa_linux_alsa.c line 206
static const char * (*alsa_snd_ctl_card_info_get_name)(const struct _snd_ctl_card_info *) = ((const char * (*)(const struct _snd_ctl_card_info *))NULL);
// alsa_snd_ctl_card_info_malloc
// file src/hostapi/alsa/pa_linux_alsa.c line 202
static signed int (*alsa_snd_ctl_card_info_malloc)(struct _snd_ctl_card_info **) = ((signed int (*)(struct _snd_ctl_card_info **))NULL);
// alsa_snd_ctl_card_info_sizeof
// file src/hostapi/alsa/pa_linux_alsa.c line 205
static unsigned long int (*alsa_snd_ctl_card_info_sizeof)(void) = ((unsigned long int (*)(void))NULL);
// alsa_snd_ctl_close
// file src/hostapi/alsa/pa_linux_alsa.c line 201
static signed int (*alsa_snd_ctl_close)(struct _snd_ctl *) = ((signed int (*)(struct _snd_ctl *))NULL);
// alsa_snd_ctl_open
// file src/hostapi/alsa/pa_linux_alsa.c line 200
static signed int (*alsa_snd_ctl_open)(struct _snd_ctl **, const char *, signed int) = ((signed int (*)(struct _snd_ctl **, const char *, signed int))NULL);
// alsa_snd_ctl_pcm_info
// file src/hostapi/alsa/pa_linux_alsa.c line 199
static signed int (*alsa_snd_ctl_pcm_info)(struct _snd_ctl *, struct _snd_pcm_info *) = ((signed int (*)(struct _snd_ctl *, struct _snd_pcm_info *))NULL);
// alsa_snd_ctl_pcm_next_device
// file src/hostapi/alsa/pa_linux_alsa.c line 198
static signed int (*alsa_snd_ctl_pcm_next_device)(struct _snd_ctl *, signed int *) = ((signed int (*)(struct _snd_ctl *, signed int *))NULL);
// alsa_snd_output_stdio_attach
// file src/hostapi/alsa/pa_linux_alsa.c line 231
static signed int (*alsa_snd_output_stdio_attach)(struct _snd_output **, struct _IO_FILE *, signed int) = ((signed int (*)(struct _snd_output **, struct _IO_FILE *, signed int))NULL);
// alsa_snd_pcm_area_copy
// file src/hostapi/alsa/pa_linux_alsa.c line 119
static signed int (*alsa_snd_pcm_area_copy)(const struct _snd_pcm_channel_area *, unsigned long int, const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, enum _snd_pcm_format) = ((signed int (*)(const struct _snd_pcm_channel_area *, unsigned long int, const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, enum _snd_pcm_format))NULL);
// alsa_snd_pcm_areas_silence
// file src/hostapi/alsa/pa_linux_alsa.c line 109
static signed int (*alsa_snd_pcm_areas_silence)(const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, unsigned long int, enum _snd_pcm_format) = ((signed int (*)(const struct _snd_pcm_channel_area *, unsigned long int, unsigned int, unsigned long int, enum _snd_pcm_format))NULL);
// alsa_snd_pcm_avail_update
// file src/hostapi/alsa/pa_linux_alsa.c line 108
static signed long int (*alsa_snd_pcm_avail_update)(struct _snd_pcm *) = ((signed long int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_close
// file src/hostapi/alsa/pa_linux_alsa.c line 100
static signed int (*alsa_snd_pcm_close)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_delay
// file src/hostapi/alsa/pa_linux_alsa.c line 125
static signed int (*alsa_snd_pcm_delay)(struct _snd_pcm *, signed long int *) = ((signed int (*)(struct _snd_pcm *, signed long int *))NULL);
// alsa_snd_pcm_drain
// file src/hostapi/alsa/pa_linux_alsa.c line 116
static signed int (*alsa_snd_pcm_drain)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_drop
// file src/hostapi/alsa/pa_linux_alsa.c line 118
static signed int (*alsa_snd_pcm_drop)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_format_size
// file src/hostapi/alsa/pa_linux_alsa.c line 123
static signed long int (*alsa_snd_pcm_format_size)(enum _snd_pcm_format, unsigned long int) = ((signed long int (*)(enum _snd_pcm_format, unsigned long int))NULL);
// alsa_snd_pcm_frames_to_bytes
// file src/hostapi/alsa/pa_linux_alsa.c line 102
static signed long int (*alsa_snd_pcm_frames_to_bytes)(struct _snd_pcm *, signed long int) = ((signed long int (*)(struct _snd_pcm *, signed long int))NULL);
// alsa_snd_pcm_hw_params
// file src/hostapi/alsa/pa_linux_alsa.c line 159
static signed int (*alsa_snd_pcm_hw_params)(struct _snd_pcm *, struct _snd_pcm_hw_params *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *))NULL);
// alsa_snd_pcm_hw_params_any
// file src/hostapi/alsa/pa_linux_alsa.c line 130
static signed int (*alsa_snd_pcm_hw_params_any)(struct _snd_pcm *, struct _snd_pcm_hw_params *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *))NULL);
// alsa_snd_pcm_hw_params_dump
// file src/hostapi/alsa/pa_linux_alsa.c line 158
static signed int (*alsa_snd_pcm_hw_params_dump)(struct _snd_pcm_hw_params *, struct _snd_output *) = ((signed int (*)(struct _snd_pcm_hw_params *, struct _snd_output *))NULL);
// alsa_snd_pcm_hw_params_free
// file src/hostapi/alsa/pa_linux_alsa.c line 129
static void (*alsa_snd_pcm_hw_params_free)(struct _snd_pcm_hw_params *) = ((void (*)(struct _snd_pcm_hw_params *))NULL);
// alsa_snd_pcm_hw_params_get_buffer_size
// file src/hostapi/alsa/pa_linux_alsa.c line 147
static signed int (*alsa_snd_pcm_hw_params_get_buffer_size)(const struct _snd_pcm_hw_params *, unsigned long int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned long int *))NULL);
// alsa_snd_pcm_hw_params_get_buffer_size_max
// file src/hostapi/alsa/pa_linux_alsa.c line 166
static signed int (*alsa_snd_pcm_hw_params_get_buffer_size_max)(const struct _snd_pcm_hw_params *, unsigned long int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned long int *))NULL);
// alsa_snd_pcm_hw_params_get_channels_max
// file src/hostapi/alsa/pa_linux_alsa.c line 153
static signed int (*alsa_snd_pcm_hw_params_get_channels_max)(const struct _snd_pcm_hw_params *, unsigned int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *))NULL);
// alsa_snd_pcm_hw_params_get_channels_min
// file src/hostapi/alsa/pa_linux_alsa.c line 152
static signed int (*alsa_snd_pcm_hw_params_get_channels_min)(const struct _snd_pcm_hw_params *, unsigned int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *))NULL);
// alsa_snd_pcm_hw_params_get_period_size_max
// file src/hostapi/alsa/pa_linux_alsa.c line 165
static signed int (*alsa_snd_pcm_hw_params_get_period_size_max)(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_period_size_min
// file src/hostapi/alsa/pa_linux_alsa.c line 164
static signed int (*alsa_snd_pcm_hw_params_get_period_size_min)(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned long int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_periods_max
// file src/hostapi/alsa/pa_linux_alsa.c line 162
static signed int (*alsa_snd_pcm_hw_params_get_periods_max)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_periods_min
// file src/hostapi/alsa/pa_linux_alsa.c line 161
static signed int (*alsa_snd_pcm_hw_params_get_periods_min)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_rate_max
// file src/hostapi/alsa/pa_linux_alsa.c line 168
static signed int (*alsa_snd_pcm_hw_params_get_rate_max)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_rate_min
// file src/hostapi/alsa/pa_linux_alsa.c line 167
static signed int (*alsa_snd_pcm_hw_params_get_rate_min)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_get_rate_numden
// file src/hostapi/alsa/pa_linux_alsa.c line 169
static signed int (*alsa_snd_pcm_hw_params_get_rate_numden)(const struct _snd_pcm_hw_params *, unsigned int *, unsigned int *) = ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned int *, unsigned int *))NULL);
// alsa_snd_pcm_hw_params_malloc
// file src/hostapi/alsa/pa_linux_alsa.c line 128
static signed int (*alsa_snd_pcm_hw_params_malloc)(struct _snd_pcm_hw_params **) = ((signed int (*)(struct _snd_pcm_hw_params **))NULL);
// alsa_snd_pcm_hw_params_set_access
// file src/hostapi/alsa/pa_linux_alsa.c line 131
static signed int (*alsa_snd_pcm_hw_params_set_access)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access))NULL);
// alsa_snd_pcm_hw_params_set_buffer_size
// file src/hostapi/alsa/pa_linux_alsa.c line 139
static signed int (*alsa_snd_pcm_hw_params_set_buffer_size)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int))NULL);
// alsa_snd_pcm_hw_params_set_buffer_size_min
// file src/hostapi/alsa/pa_linux_alsa.c line 141
static signed int (*alsa_snd_pcm_hw_params_set_buffer_size_min)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *))NULL);
// alsa_snd_pcm_hw_params_set_buffer_size_near
// file src/hostapi/alsa/pa_linux_alsa.c line 140
static signed int (*alsa_snd_pcm_hw_params_set_buffer_size_near)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *))NULL);
// alsa_snd_pcm_hw_params_set_channels
// file src/hostapi/alsa/pa_linux_alsa.c line 133
static signed int (*alsa_snd_pcm_hw_params_set_channels)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int))NULL);
// alsa_snd_pcm_hw_params_set_format
// file src/hostapi/alsa/pa_linux_alsa.c line 132
static signed int (*alsa_snd_pcm_hw_params_set_format)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format))NULL);
// alsa_snd_pcm_hw_params_set_period_size
// file src/hostapi/alsa/pa_linux_alsa.c line 163
static signed int (*alsa_snd_pcm_hw_params_set_period_size)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int))NULL);
// alsa_snd_pcm_hw_params_set_period_size_near
// file src/hostapi/alsa/pa_linux_alsa.c line 143
static signed int (*alsa_snd_pcm_hw_params_set_period_size_near)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *, signed int *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_set_periods_integer
// file src/hostapi/alsa/pa_linux_alsa.c line 144
static signed int (*alsa_snd_pcm_hw_params_set_periods_integer)(struct _snd_pcm *, struct _snd_pcm_hw_params *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *))NULL);
// alsa_snd_pcm_hw_params_set_periods_min
// file src/hostapi/alsa/pa_linux_alsa.c line 145
static signed int (*alsa_snd_pcm_hw_params_set_periods_min)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_set_rate
// file src/hostapi/alsa/pa_linux_alsa.c line 136
static signed int (*alsa_snd_pcm_hw_params_set_rate)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int, signed int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int, signed int))NULL);
// alsa_snd_pcm_hw_params_set_rate_near
// file src/hostapi/alsa/pa_linux_alsa.c line 135
static signed int (*alsa_snd_pcm_hw_params_set_rate_near)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int *, signed int *))NULL);
// alsa_snd_pcm_hw_params_set_rate_resample
// file src/hostapi/alsa/pa_linux_alsa.c line 137
static signed int (*alsa_snd_pcm_hw_params_set_rate_resample)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned int))NULL);
// alsa_snd_pcm_hw_params_sizeof
// file src/hostapi/alsa/pa_linux_alsa.c line 127
static unsigned long int (*alsa_snd_pcm_hw_params_sizeof)(void) = ((unsigned long int (*)(void))NULL);
// alsa_snd_pcm_hw_params_test_access
// file src/hostapi/alsa/pa_linux_alsa.c line 157
static signed int (*alsa_snd_pcm_hw_params_test_access)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_access))NULL);
// alsa_snd_pcm_hw_params_test_format
// file src/hostapi/alsa/pa_linux_alsa.c line 156
static signed int (*alsa_snd_pcm_hw_params_test_format)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, enum _snd_pcm_format))NULL);
// alsa_snd_pcm_hw_params_test_period_size
// file src/hostapi/alsa/pa_linux_alsa.c line 155
static signed int (*alsa_snd_pcm_hw_params_test_period_size)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_hw_params *, unsigned long int, signed int))NULL);
// alsa_snd_pcm_info
// file src/hostapi/alsa/pa_linux_alsa.c line 187
static signed int (*alsa_snd_pcm_info)(struct _snd_pcm *, struct _snd_pcm_info *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_info *))NULL);
// alsa_snd_pcm_info_free
// file src/hostapi/alsa/pa_linux_alsa.c line 190
static void (*alsa_snd_pcm_info_free)(struct _snd_pcm_info *) = ((void (*)(struct _snd_pcm_info *))NULL);
// alsa_snd_pcm_info_get_card
// file src/hostapi/alsa/pa_linux_alsa.c line 195
static signed int (*alsa_snd_pcm_info_get_card)(const struct _snd_pcm_info *) = ((signed int (*)(const struct _snd_pcm_info *))NULL);
// alsa_snd_pcm_info_get_name
// file src/hostapi/alsa/pa_linux_alsa.c line 194
static const char * (*alsa_snd_pcm_info_get_name)(const struct _snd_pcm_info *) = ((const char * (*)(const struct _snd_pcm_info *))NULL);
// alsa_snd_pcm_info_malloc
// file src/hostapi/alsa/pa_linux_alsa.c line 189
static signed int (*alsa_snd_pcm_info_malloc)(struct _snd_pcm_info **) = ((signed int (*)(struct _snd_pcm_info **))NULL);
// alsa_snd_pcm_info_set_device
// file src/hostapi/alsa/pa_linux_alsa.c line 191
static void (*alsa_snd_pcm_info_set_device)(struct _snd_pcm_info *, unsigned int) = ((void (*)(struct _snd_pcm_info *, unsigned int))NULL);
// alsa_snd_pcm_info_set_stream
// file src/hostapi/alsa/pa_linux_alsa.c line 193
static void (*alsa_snd_pcm_info_set_stream)(struct _snd_pcm_info *, enum _snd_pcm_stream) = ((void (*)(struct _snd_pcm_info *, enum _snd_pcm_stream))NULL);
// alsa_snd_pcm_info_set_subdevice
// file src/hostapi/alsa/pa_linux_alsa.c line 192
static void (*alsa_snd_pcm_info_set_subdevice)(struct _snd_pcm_info *, unsigned int) = ((void (*)(struct _snd_pcm_info *, unsigned int))NULL);
// alsa_snd_pcm_info_sizeof
// file src/hostapi/alsa/pa_linux_alsa.c line 188
static unsigned long int (*alsa_snd_pcm_info_sizeof)(void) = ((unsigned long int (*)(void))NULL);
// alsa_snd_pcm_link
// file src/hostapi/alsa/pa_linux_alsa.c line 124
static signed int (*alsa_snd_pcm_link)(struct _snd_pcm *, struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm *))NULL);
// alsa_snd_pcm_mmap_begin
// file src/hostapi/alsa/pa_linux_alsa.c line 110
static signed int (*alsa_snd_pcm_mmap_begin)(struct _snd_pcm *, const struct _snd_pcm_channel_area **, unsigned long int *, unsigned long int *) = ((signed int (*)(struct _snd_pcm *, const struct _snd_pcm_channel_area **, unsigned long int *, unsigned long int *))NULL);
// alsa_snd_pcm_mmap_commit
// file src/hostapi/alsa/pa_linux_alsa.c line 111
static signed long int (*alsa_snd_pcm_mmap_commit)(struct _snd_pcm *, unsigned long int, unsigned long int) = ((signed long int (*)(struct _snd_pcm *, unsigned long int, unsigned long int))NULL);
// alsa_snd_pcm_nonblock
// file src/hostapi/alsa/pa_linux_alsa.c line 101
static signed int (*alsa_snd_pcm_nonblock)(struct _snd_pcm *, signed int) = ((signed int (*)(struct _snd_pcm *, signed int))NULL);
// alsa_snd_pcm_open
// file src/hostapi/alsa/pa_linux_alsa.c line 99
static signed int (*alsa_snd_pcm_open)(struct _snd_pcm **, const char *, enum _snd_pcm_stream, signed int) = ((signed int (*)(struct _snd_pcm **, const char *, enum _snd_pcm_stream, signed int))NULL);
// alsa_snd_pcm_poll_descriptors
// file src/hostapi/alsa/pa_linux_alsa.c line 120
static signed int (*alsa_snd_pcm_poll_descriptors)(struct _snd_pcm *, struct pollfd *, unsigned int) = ((signed int (*)(struct _snd_pcm *, struct pollfd *, unsigned int))NULL);
// alsa_snd_pcm_poll_descriptors_count
// file src/hostapi/alsa/pa_linux_alsa.c line 121
static signed int (*alsa_snd_pcm_poll_descriptors_count)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_poll_descriptors_revents
// file src/hostapi/alsa/pa_linux_alsa.c line 122
static signed int (*alsa_snd_pcm_poll_descriptors_revents)(struct _snd_pcm *, struct pollfd *, unsigned int, unsigned short int *) = ((signed int (*)(struct _snd_pcm *, struct pollfd *, unsigned int, unsigned short int *))NULL);
// alsa_snd_pcm_prepare
// file src/hostapi/alsa/pa_linux_alsa.c line 103
static signed int (*alsa_snd_pcm_prepare)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_readi
// file src/hostapi/alsa/pa_linux_alsa.c line 112
static signed long int (*alsa_snd_pcm_readi)(struct _snd_pcm *, void *, unsigned long int) = ((signed long int (*)(struct _snd_pcm *, void *, unsigned long int))NULL);
// alsa_snd_pcm_readn
// file src/hostapi/alsa/pa_linux_alsa.c line 113
static signed long int (*alsa_snd_pcm_readn)(struct _snd_pcm *, void **, unsigned long int) = ((signed long int (*)(struct _snd_pcm *, void **, unsigned long int))NULL);
// alsa_snd_pcm_recover
// file src/hostapi/alsa/pa_linux_alsa.c line 117
static signed int (*alsa_snd_pcm_recover)(struct _snd_pcm *, signed int, signed int) = ((signed int (*)(struct _snd_pcm *, signed int, signed int))NULL);
// alsa_snd_pcm_resume
// file src/hostapi/alsa/pa_linux_alsa.c line 105
static signed int (*alsa_snd_pcm_resume)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_start
// file src/hostapi/alsa/pa_linux_alsa.c line 104
static signed int (*alsa_snd_pcm_start)(struct _snd_pcm *) = ((signed int (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_state
// file src/hostapi/alsa/pa_linux_alsa.c line 107
static enum _snd_pcm_state (*alsa_snd_pcm_state)(struct _snd_pcm *) = ((enum _snd_pcm_state (*)(struct _snd_pcm *))NULL);
// alsa_snd_pcm_status
// file src/hostapi/alsa/pa_linux_alsa.c line 220
static signed int (*alsa_snd_pcm_status)(struct _snd_pcm *, struct _snd_pcm_status *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_status *))NULL);
// alsa_snd_pcm_status_get_delay
// file src/hostapi/alsa/pa_linux_alsa.c line 225
static signed long int (*alsa_snd_pcm_status_get_delay)(const struct _snd_pcm_status *) = ((signed long int (*)(const struct _snd_pcm_status *))NULL);
// alsa_snd_pcm_status_get_state
// file src/hostapi/alsa/pa_linux_alsa.c line 223
static enum _snd_pcm_state (*alsa_snd_pcm_status_get_state)(const struct _snd_pcm_status *) = ((enum _snd_pcm_state (*)(const struct _snd_pcm_status *))NULL);
// alsa_snd_pcm_status_get_trigger_tstamp
// file src/hostapi/alsa/pa_linux_alsa.c line 224
static void (*alsa_snd_pcm_status_get_trigger_tstamp)(const struct _snd_pcm_status *, struct timeval *) = ((void (*)(const struct _snd_pcm_status *, struct timeval *))NULL);
// alsa_snd_pcm_status_get_tstamp
// file src/hostapi/alsa/pa_linux_alsa.c line 222
static void (*alsa_snd_pcm_status_get_tstamp)(const struct _snd_pcm_status *, struct timeval *) = ((void (*)(const struct _snd_pcm_status *, struct timeval *))NULL);
// alsa_snd_pcm_status_sizeof
// file src/hostapi/alsa/pa_linux_alsa.c line 221
static unsigned long int (*alsa_snd_pcm_status_sizeof)(void) = ((unsigned long int (*)(void))NULL);
// alsa_snd_pcm_sw_params
// file src/hostapi/alsa/pa_linux_alsa.c line 176
static signed int (*alsa_snd_pcm_sw_params)(struct _snd_pcm *, struct _snd_pcm_sw_params *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *))NULL);
// alsa_snd_pcm_sw_params_current
// file src/hostapi/alsa/pa_linux_alsa.c line 174
static signed int (*alsa_snd_pcm_sw_params_current)(struct _snd_pcm *, struct _snd_pcm_sw_params *) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *))NULL);
// alsa_snd_pcm_sw_params_free
// file src/hostapi/alsa/pa_linux_alsa.c line 177
static void (*alsa_snd_pcm_sw_params_free)(struct _snd_pcm_sw_params *) = ((void (*)(struct _snd_pcm_sw_params *))NULL);
// alsa_snd_pcm_sw_params_get_boundary
// file src/hostapi/alsa/pa_linux_alsa.c line 180
static signed int (*alsa_snd_pcm_sw_params_get_boundary)(const struct _snd_pcm_sw_params *, unsigned long int *) = ((signed int (*)(const struct _snd_pcm_sw_params *, unsigned long int *))NULL);
// alsa_snd_pcm_sw_params_malloc
// file src/hostapi/alsa/pa_linux_alsa.c line 173
static signed int (*alsa_snd_pcm_sw_params_malloc)(struct _snd_pcm_sw_params **) = ((signed int (*)(struct _snd_pcm_sw_params **))NULL);
// alsa_snd_pcm_sw_params_set_avail_min
// file src/hostapi/alsa/pa_linux_alsa.c line 175
static signed int (*alsa_snd_pcm_sw_params_set_avail_min)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_set_silence_size
// file src/hostapi/alsa/pa_linux_alsa.c line 182
static signed int (*alsa_snd_pcm_sw_params_set_silence_size)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_set_silence_threshold
// file src/hostapi/alsa/pa_linux_alsa.c line 181
static signed int (*alsa_snd_pcm_sw_params_set_silence_threshold)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_set_start_threshold
// file src/hostapi/alsa/pa_linux_alsa.c line 178
static signed int (*alsa_snd_pcm_sw_params_set_start_threshold)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_set_stop_threshold
// file src/hostapi/alsa/pa_linux_alsa.c line 179
static signed int (*alsa_snd_pcm_sw_params_set_stop_threshold)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_set_tstamp_mode
// file src/hostapi/alsa/pa_linux_alsa.c line 184
static signed int (*alsa_snd_pcm_sw_params_set_tstamp_mode)(struct _snd_pcm *, struct _snd_pcm_sw_params *, enum _snd_pcm_tstamp) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, enum _snd_pcm_tstamp))NULL);
// alsa_snd_pcm_sw_params_set_xfer_align
// file src/hostapi/alsa/pa_linux_alsa.c line 183
static signed int (*alsa_snd_pcm_sw_params_set_xfer_align)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int) = ((signed int (*)(struct _snd_pcm *, struct _snd_pcm_sw_params *, unsigned long int))NULL);
// alsa_snd_pcm_sw_params_sizeof
// file src/hostapi/alsa/pa_linux_alsa.c line 172
static unsigned long int (*alsa_snd_pcm_sw_params_sizeof)(void) = ((unsigned long int (*)(void))NULL);
// alsa_snd_pcm_wait
// file src/hostapi/alsa/pa_linux_alsa.c line 106
static signed int (*alsa_snd_pcm_wait)(struct _snd_pcm *, signed int) = ((signed int (*)(struct _snd_pcm *, signed int))NULL);
// alsa_snd_pcm_writei
// file src/hostapi/alsa/pa_linux_alsa.c line 114
static signed long int (*alsa_snd_pcm_writei)(struct _snd_pcm *, const void *, unsigned long int) = ((signed long int (*)(struct _snd_pcm *, const void *, unsigned long int))NULL);
// alsa_snd_pcm_writen
// file src/hostapi/alsa/pa_linux_alsa.c line 115
static signed long int (*alsa_snd_pcm_writen)(struct _snd_pcm *, void **, unsigned long int) = ((signed long int (*)(struct _snd_pcm *, void **, unsigned long int))NULL);
// alsa_snd_strerror
// file src/hostapi/alsa/pa_linux_alsa.c line 230
static const char * (*alsa_snd_strerror)(signed int) = ((const char * (*)(signed int))NULL);
// busyRetries_
// file src/hostapi/alsa/pa_linux_alsa.c line 588
static signed int busyRetries_ = 100;
// clientName_
// file src/hostapi/jack/pa_jack.c line 76
static const char *clientName_ = "PortAudio";
// const_1_div_128_
// file src/common/pa_converters.c line 326
static const float const_1_div_128_ = 1.0f / 128.0f;
// const_1_div_2147483648_
// file src/common/pa_converters.c line 330
static const double const_1_div_2147483648_ = 1.0 / 2147483648.0;
// const_1_div_32768_
// file src/common/pa_converters.c line 328
static const float const_1_div_32768_ = 1.0f / 32768.f;
// const_float_dither_scale_
// file src/common/pa_dither.c line 91
static const float const_float_dither_scale_ = 1.0f / (float)((1 << 15) - 1);
// defaultHostApiIndex_
// file src/common/pa_front.c line 119
static signed int defaultHostApiIndex_ = 0;
// deviceCount_
// file src/common/pa_front.c line 121
static signed int deviceCount_ = 0;
// firstOpenStream_
// file src/common/pa_front.c line 123
struct PaUtilStreamRepresentation *firstOpenStream_ = (struct PaUtilStreamRepresentation *)(void *)0;
// hostApisCount_
// file src/common/pa_front.c line 118
static signed int hostApisCount_ = 0;
// hostApis_
// file src/common/pa_front.c line 117
static struct PaUtilHostApiRepresentation **hostApis_ = ((struct PaUtilHostApiRepresentation **)NULL);
// initializationCount_
// file src/common/pa_front.c line 120
static signed int initializationCount_ = 0;
// jackErr_
// file src/hostapi/jack/pa_jack.c line 75
static char *jackErr_ = (char *)(void *)0;
// lastHostErrorInfo_
// file src/common/pa_front.c line 103
static struct PaHostErrorInfo lastHostErrorInfo_;
// lastHostErrorText_
// file src/common/pa_front.c line 101
static char lastHostErrorText_[1025l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// lastHostErrorInfo_
// file src/common/pa_front.c line 103
static struct PaHostErrorInfo lastHostErrorInfo_ = { .hostApiType=(enum PaHostApiTypeId)-1, .errorCode=(signed long int)0,
    .errorText=lastHostErrorText_ };
// mainThread_
// file src/hostapi/jack/pa_jack.c line 74
static unsigned long int mainThread_;
// mainThread_$link1
// file src/hostapi/oss/pa_unix_oss.c line 94
static unsigned long int mainThread_$link1;
// numPeriods_
// file src/hostapi/alsa/pa_linux_alsa.c line 587
static signed int numPeriods_ = 4;
// paConverters
// file src/common/pa_converters.c line 1780
struct anonymous$25 paConverters;
// paConverters
// file src/common/pa_converters.c line 1780
struct anonymous$25 paConverters = { .Float32_To_Int32=Float32_To_Int32, .Float32_To_Int32_Dither=Float32_To_Int32_Dither, .Float32_To_Int32_Clip=Float32_To_Int32_Clip,
    .Float32_To_Int32_DitherClip=Float32_To_Int32_DitherClip,
    .Float32_To_Int24=Float32_To_Int24,
    .Float32_To_Int24_Dither=Float32_To_Int24_Dither, .Float32_To_Int24_Clip=Float32_To_Int24_Clip,
    .Float32_To_Int24_DitherClip=Float32_To_Int24_DitherClip,
    .Float32_To_Int16=Float32_To_Int16,
    .Float32_To_Int16_Dither=Float32_To_Int16_Dither, .Float32_To_Int16_Clip=Float32_To_Int16_Clip,
    .Float32_To_Int16_DitherClip=Float32_To_Int16_DitherClip,
    .Float32_To_Int8=Float32_To_Int8,
    .Float32_To_Int8_Dither=Float32_To_Int8_Dither, .Float32_To_Int8_Clip=Float32_To_Int8_Clip,
    .Float32_To_Int8_DitherClip=Float32_To_Int8_DitherClip,
    .Float32_To_UInt8=Float32_To_UInt8,
    .Float32_To_UInt8_Dither=Float32_To_UInt8_Dither, .Float32_To_UInt8_Clip=Float32_To_UInt8_Clip,
    .Float32_To_UInt8_DitherClip=Float32_To_UInt8_DitherClip,
    .Int32_To_Float32=Int32_To_Float32,
    .Int32_To_Int24=Int32_To_Int24, .Int32_To_Int24_Dither=Int32_To_Int24_Dither,
    .Int32_To_Int16=Int32_To_Int16,
    .Int32_To_Int16_Dither=Int32_To_Int16_Dither, .Int32_To_Int8=Int32_To_Int8,
    .Int32_To_Int8_Dither=Int32_To_Int8_Dither, .Int32_To_UInt8=Int32_To_UInt8,
    .Int32_To_UInt8_Dither=Int32_To_UInt8_Dither, .Int24_To_Float32=Int24_To_Float32,
    .Int24_To_Int32=Int24_To_Int32, .Int24_To_Int16=Int24_To_Int16,
    .Int24_To_Int16_Dither=Int24_To_Int16_Dither, .Int24_To_Int8=Int24_To_Int8,
    .Int24_To_Int8_Dither=Int24_To_Int8_Dither, .Int24_To_UInt8=Int24_To_UInt8,
    .Int24_To_UInt8_Dither=Int24_To_UInt8_Dither, .Int16_To_Float32=Int16_To_Float32,
    .Int16_To_Int32=Int16_To_Int32, .Int16_To_Int24=Int16_To_Int24,
    .Int16_To_Int8=Int16_To_Int8, .Int16_To_Int8_Dither=Int16_To_Int8_Dither,
    .Int16_To_UInt8=Int16_To_UInt8,
    .Int16_To_UInt8_Dither=Int16_To_UInt8_Dither, .Int8_To_Float32=Int8_To_Float32,
    .Int8_To_Int32=Int8_To_Int32, .Int8_To_Int24=Int8_To_Int24,
    .Int8_To_Int16=Int8_To_Int16, .Int8_To_UInt8=Int8_To_UInt8,
    .UInt8_To_Float32=UInt8_To_Float32, .UInt8_To_Int32=UInt8_To_Int32,
    .UInt8_To_Int24=UInt8_To_Int24, .UInt8_To_Int16=UInt8_To_Int16,
    .UInt8_To_Int8=UInt8_To_Int8, .Copy_8_To_8=Copy_8_To_8,
    .Copy_16_To_16=Copy_16_To_16, .Copy_24_To_24=Copy_24_To_24,
    .Copy_32_To_32=Copy_32_To_32 };
// paHostApiInitializers
// file src/os/unix/pa_unix_hostapis.c line 58
signed int (*paHostApiInitializers[4l])(struct PaUtilHostApiRepresentation **, signed int);
// paHostApiInitializers
// file src/os/unix/pa_unix_hostapis.c line 58
signed int (*paHostApiInitializers[4l])(struct PaUtilHostApiRepresentation **, signed int) = { PaAlsa_Initialize, PaOSS_Initialize, PaJack_Initialize, ((signed int (*)(struct PaUtilHostApiRepresentation **, signed int))NULL) };
// paUnixMainThread
// file src/os/unix/pa_unix_util.c line 236
unsigned long int paUnixMainThread = (unsigned long int)0;
// paUtilErr_
// file ./src/os/unix/pa_unix_util.h line 80
static signed int paUtilErr_;
// paUtilErr_$link1
// file ./src/os/unix/pa_unix_util.h line 80
static signed int paUtilErr_$link1;
// paUtilErr_$link2
// file src/os/unix/pa_unix_util.h line 80
static signed int paUtilErr_$link2;
// paZeroers
// file src/common/pa_converters.c line 1973
struct anonymous paZeroers;
// paZeroers
// file src/common/pa_converters.c line 1973
struct anonymous paZeroers = { .ZeroU8=ZeroU8, .Zero8=Zero8, .Zero16=Zero16, .Zero24=Zero24,
    .Zero32=Zero32 };
// predefinedNames
// file src/hostapi/alsa/pa_linux_alsa.c line 994
struct anonymous$19 predefinedNames[26l] = { { .alsaName="center_lfe", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="dmix", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="front", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="iec958", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="rear", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="side", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="surround40", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="surround41", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="surround50", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="surround51", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="surround71", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Earpiece_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Speaker_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Bluetooth_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Headset_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Speaker_Headset_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_Bluetooth-A2DP_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_ExtraDockSpeaker_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidPlayback_TvOut_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=1, .hasCapture=0 },
    { .alsaName="AndroidRecord_Microphone", .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=0, .hasCapture=1 },
    { .alsaName="AndroidRecord_Earpiece_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=0, .hasCapture=1 },
    { .alsaName="AndroidRecord_Speaker_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=0, .hasCapture=1 },
    { .alsaName="AndroidRecord_Headset_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=0, .hasCapture=1 },
    { .alsaName="AndroidRecord_Bluetooth_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=0, .hasCapture=1 },
    { .alsaName="AndroidRecord_Speaker_Headset_normal", .name=(char *)(void *)0,
    .isPlug=0, .hasPlayback=0, .hasCapture=1 },
    { .alsaName=(char *)(void *)0, .name=(char *)(void *)0, .isPlug=0,
    .hasPlayback=1, .hasCapture=0 } };
// snd_config
// file /usr/include/alsa/conf.h line 85
extern struct _snd_config *snd_config;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// sysErr_
// file src/hostapi/oss/pa_unix_oss.c line 93
static signed int sysErr_;
// userCB
// file src/common/pa_debugprint.c line 65
static void (*userCB)(const char *) = (void (*)(const char *))(void *)0;

// AbortStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 690
static signed int AbortStream(void *s)
{
  signed int result = 0;
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return result;
}

// AbortStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3133
static signed int AbortStream$link1(void *s$link1)
{
  signed int return_value_RealStop$1;
  return_value_RealStop$1=RealStop((struct PaAlsaStream *)s$link1, 1);
  return return_value_RealStop$1;
}

// AbortStream$link2
// file src/hostapi/jack/pa_jack.c line 1713
static signed int AbortStream$link2(void *s$link2)
{
  /* assertion s */
  assert(s$link2 != NULL);
  signed int return_value_RealStop$1$link1;
  return_value_RealStop$1$link1=RealStop$link1((struct PaJackStream *)s$link2, 1);
  return return_value_RealStop$1$link1;
}

// AbortStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1862
static signed int AbortStream$link3(void *s$link3)
{
  signed int return_value_RealStop$1$link2;
  return_value_RealStop$1$link2=RealStop$link2((struct PaOssStream *)s$link3, 1);
  return return_value_RealStop$1$link2;
}

// AdaptingInputOnlyProcess
// file src/common/pa_process.c line 970
static unsigned long int AdaptingInputOnlyProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostInputChannels, unsigned long int framesToProcess)
{
  void *userInput;
  void *userOutput;
  unsigned char *destBytePtr;
  unsigned int destSampleStrideSamples;
  unsigned int destChannelStrideBytes;
  unsigned int i;
  unsigned long int frameCount;
  unsigned long int framesToGo = framesToProcess;
  unsigned long int framesProcessed = (unsigned long int)0;
  userOutput = NULL;
  unsigned long int tmp_if_expr$1;
  do
  {
    if(!(bp->framesPerUserBuffer >= bp->framesInTempInputBuffer + framesToGo))
      tmp_if_expr$1 = bp->framesPerUserBuffer - bp->framesInTempInputBuffer;

    else
      tmp_if_expr$1 = framesToGo;
    frameCount = tmp_if_expr$1;
    if(!(bp->userInputIsInterleaved == 0))
    {
      destBytePtr = (unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)(bp->bytesPerUserInputSample * bp->inputChannelCount) * bp->framesInTempInputBuffer);
      destSampleStrideSamples = bp->inputChannelCount;
      destChannelStrideBytes = bp->bytesPerUserInputSample;
      userInput = bp->tempInputBuffer;
    }

    else
    {
      destBytePtr = (unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)bp->bytesPerUserInputSample * bp->framesInTempInputBuffer);
      destSampleStrideSamples = (unsigned int)1;
      destChannelStrideBytes = (unsigned int)(bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserInputSample);
      i = (unsigned int)0;
      for( ; !(i >= bp->inputChannelCount); i = i + 1u)
        bp->tempInputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)(i * bp->bytesPerUserInputSample) * bp->framesPerUserBuffer));
      userInput = (void *)bp->tempInputBufferPtrs;
    }
    i = (unsigned int)0;
    if(!(i >= bp->inputChannelCount))
    {
      bp->inputConverter((void *)destBytePtr, (signed int)destSampleStrideSamples, (hostInputChannels + (signed long int)i)->data, (signed int)(hostInputChannels + (signed long int)i)->stride, (unsigned int)frameCount, &bp->ditherGenerator);
      destBytePtr = destBytePtr + (signed long int)destChannelStrideBytes;
      (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostInputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostInputSample));
      i = i + 1u;
    }

    bp->framesInTempInputBuffer = bp->framesInTempInputBuffer + frameCount;
    if(bp->framesInTempInputBuffer == bp->framesPerUserBuffer)
    {
      if(*streamCallbackResult == 0)
      {
        bp->timeInfo->outputBufferDacTime = (double)0;
        *streamCallbackResult=bp->streamCallback(userInput, userOutput, bp->framesPerUserBuffer, bp->timeInfo, bp->callbackStatusFlags, bp->userData);
        bp->timeInfo->inputBufferAdcTime = bp->timeInfo->inputBufferAdcTime + (double)bp->framesPerUserBuffer * bp->samplePeriod;
      }

      bp->framesInTempInputBuffer = (unsigned long int)0;
    }

    framesProcessed = framesProcessed + frameCount;
    framesToGo = framesToGo - frameCount;
  }
  while(framesToGo >= 1ul);
  return framesProcessed;
}

// AdaptingOutputOnlyProcess
// file src/common/pa_process.c line 1077
static unsigned long int AdaptingOutputOnlyProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostOutputChannels, unsigned long int framesToProcess)
{
  void *userInput;
  void *userOutput;
  unsigned char *srcBytePtr;
  unsigned int srcSampleStrideSamples;
  unsigned int srcChannelStrideBytes;
  unsigned int i;
  unsigned long int frameCount;
  unsigned long int framesToGo = framesToProcess;
  unsigned long int framesProcessed = (unsigned long int)0;
  unsigned long int tmp_if_expr$1;
  while((_Bool)1)
  {
    if(bp->framesInTempOutputBuffer == 0ul)
    {
      if(*streamCallbackResult == 0)
      {
        userInput = NULL;
        if(!(bp->userOutputIsInterleaved == 0))
          userOutput = bp->tempOutputBuffer;

        else
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->outputChannelCount); i = i + 1u)
            bp->tempOutputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)i * bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserOutputSample));
          userOutput = (void *)bp->tempOutputBufferPtrs;
        }
        bp->timeInfo->inputBufferAdcTime = (double)0;
        *streamCallbackResult=bp->streamCallback(userInput, userOutput, bp->framesPerUserBuffer, bp->timeInfo, bp->callbackStatusFlags, bp->userData);
        if(!(*streamCallbackResult == 2))
        {
          bp->timeInfo->outputBufferDacTime = bp->timeInfo->outputBufferDacTime + (double)bp->framesPerUserBuffer * bp->samplePeriod;
          bp->framesInTempOutputBuffer = bp->framesPerUserBuffer;
        }

      }

    }

    if(bp->framesInTempOutputBuffer >= 1ul)
    {
      if(!(bp->framesInTempOutputBuffer >= framesToGo))
        tmp_if_expr$1 = bp->framesInTempOutputBuffer;

      else
        tmp_if_expr$1 = framesToGo;
      frameCount = tmp_if_expr$1;
      if(!(bp->userOutputIsInterleaved == 0))
      {
        srcBytePtr = (unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)(bp->bytesPerUserOutputSample * bp->outputChannelCount) * (bp->framesPerUserBuffer - bp->framesInTempOutputBuffer));
        srcSampleStrideSamples = bp->outputChannelCount;
        srcChannelStrideBytes = bp->bytesPerUserOutputSample;
      }

      else
      {
        srcBytePtr = (unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)bp->bytesPerUserOutputSample * (bp->framesPerUserBuffer - bp->framesInTempOutputBuffer));
        srcSampleStrideSamples = (unsigned int)1;
        srcChannelStrideBytes = (unsigned int)(bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserOutputSample);
      }
      i = (unsigned int)0;
      if(!(i >= bp->outputChannelCount))
      {
        bp->outputConverter((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (void *)srcBytePtr, (signed int)srcSampleStrideSamples, (unsigned int)frameCount, &bp->ditherGenerator);
        srcBytePtr = srcBytePtr + (signed long int)srcChannelStrideBytes;
        (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostOutputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostOutputSample));
        i = i + 1u;
      }

      bp->framesInTempOutputBuffer = bp->framesInTempOutputBuffer - frameCount;
    }

    else
    {
      frameCount = framesToGo;
      i = (unsigned int)0;
      if(!(i >= bp->outputChannelCount))
      {
        bp->outputZeroer((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (unsigned int)frameCount);
        (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostOutputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostOutputSample));
        i = i + 1u;
      }

    }
    framesProcessed = framesProcessed + frameCount;
    framesToGo = framesToGo - frameCount;
    if(!(framesToGo >= 1ul))
      break;

  }
  return framesProcessed;
}

// AdaptingProcess
// file src/common/pa_process.c line 1287
static unsigned long int AdaptingProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, signed int processPartialUserBuffers)
{
  void *userInput;
  void *userOutput;
  unsigned long int framesProcessed = (unsigned long int)0;
  unsigned long int framesAvailable;
  unsigned long int endProcessingMinFrameCount;
  unsigned long int maxFramesToCopy;
  struct PaUtilChannelDescriptor *hostInputChannels;
  struct PaUtilChannelDescriptor *hostOutputChannels;
  unsigned int frameCount;
  unsigned char *destBytePtr;
  unsigned int destSampleStrideSamples;
  unsigned int destChannelStrideBytes;
  unsigned int i;
  unsigned int j;
  framesAvailable = bp->hostInputFrameCount[(signed long int)0] + bp->hostInputFrameCount[(signed long int)1];
  if(!(processPartialUserBuffers == 0))
    endProcessingMinFrameCount = (unsigned long int)0;

  else
    endProcessingMinFrameCount = bp->framesPerUserBuffer - (unsigned long int)1;
  CopyTempOutputBuffersToHostOutputBuffers(bp);
  unsigned long int tmp_if_expr$1;
  unsigned long int tmp_if_expr$2;
  while(!(endProcessingMinFrameCount >= framesAvailable))
  {
    if(bp->framesInTempOutputBuffer == 0ul)
    {
      if(!(*streamCallbackResult == 0))
      {
        i = (unsigned int)0;
        for( ; !(i >= 2u); i = i + 1u)
        {
          frameCount = (unsigned int)bp->hostOutputFrameCount[(signed long int)i];
          if(frameCount >= 1u)
          {
            hostOutputChannels = bp->hostOutputChannels[(signed long int)i];
            j = (unsigned int)0;
            if(!(j >= bp->outputChannelCount))
            {
              bp->outputZeroer((hostOutputChannels + (signed long int)j)->data, (signed int)(hostOutputChannels + (signed long int)j)->stride, frameCount);
              (hostOutputChannels + (signed long int)j)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)j)->data + (signed long int)(frameCount * (hostOutputChannels + (signed long int)j)->stride * bp->bytesPerHostOutputSample));
              j = j + 1u;
            }

            bp->hostOutputFrameCount[(signed long int)i] = (unsigned long int)0;
          }

        }
      }

    }

    for( ; !(bp->framesInTempInputBuffer >= bp->framesPerUserBuffer); framesProcessed = framesProcessed + (unsigned long int)frameCount)
    {
      if(!(bp->hostInputFrameCount[0l] + bp->hostInputFrameCount[1l] >= 1ul))
        break;

      maxFramesToCopy = bp->framesPerUserBuffer - bp->framesInTempInputBuffer;
      if(bp->hostInputFrameCount[0l] >= 1ul)
      {
        hostInputChannels = bp->hostInputChannels[(signed long int)0];
        if(!(bp->hostInputFrameCount[0l] >= maxFramesToCopy))
          tmp_if_expr$1 = bp->hostInputFrameCount[(signed long int)0];

        else
          tmp_if_expr$1 = maxFramesToCopy;
        frameCount = (unsigned int)tmp_if_expr$1;
      }

      else
      {
        hostInputChannels = bp->hostInputChannels[(signed long int)1];
        if(!(bp->hostInputFrameCount[1l] >= maxFramesToCopy))
          tmp_if_expr$2 = bp->hostInputFrameCount[(signed long int)1];

        else
          tmp_if_expr$2 = maxFramesToCopy;
        frameCount = (unsigned int)tmp_if_expr$2;
      }
      if(!(bp->userInputIsInterleaved == 0))
      {
        destBytePtr = (unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)(bp->bytesPerUserInputSample * bp->inputChannelCount) * bp->framesInTempInputBuffer);
        destSampleStrideSamples = bp->inputChannelCount;
        destChannelStrideBytes = bp->bytesPerUserInputSample;
      }

      else
      {
        destBytePtr = (unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)bp->bytesPerUserInputSample * bp->framesInTempInputBuffer);
        destSampleStrideSamples = (unsigned int)1;
        destChannelStrideBytes = (unsigned int)(bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserInputSample);
      }
      i = (unsigned int)0;
      if(!(i >= bp->inputChannelCount))
      {
        bp->inputConverter((void *)destBytePtr, (signed int)destSampleStrideSamples, (hostInputChannels + (signed long int)i)->data, (signed int)(hostInputChannels + (signed long int)i)->stride, frameCount, &bp->ditherGenerator);
        destBytePtr = destBytePtr + (signed long int)destChannelStrideBytes;
        (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(frameCount * (hostInputChannels + (signed long int)i)->stride * bp->bytesPerHostInputSample));
        i = i + 1u;
      }

      if(bp->hostInputFrameCount[0l] >= 1ul)
        bp->hostInputFrameCount[(signed long int)0] = bp->hostInputFrameCount[(signed long int)0] - (unsigned long int)frameCount;

      else
        bp->hostInputFrameCount[(signed long int)1] = bp->hostInputFrameCount[(signed long int)1] - (unsigned long int)frameCount;
      bp->framesInTempInputBuffer = bp->framesInTempInputBuffer + (unsigned long int)frameCount;
      framesAvailable = framesAvailable - (unsigned long int)frameCount;
    }
    if(bp->framesInTempInputBuffer == bp->framesPerUserBuffer)
    {
      if(bp->framesInTempOutputBuffer == 0ul)
      {
        if(*streamCallbackResult == 0)
        {
          if(!(bp->userInputIsInterleaved == 0))
            userInput = bp->tempInputBuffer;

          else
          {
            i = (unsigned int)0;
            for( ; !(i >= bp->inputChannelCount); i = i + 1u)
              bp->tempInputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)i * bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserInputSample));
            userInput = (void *)bp->tempInputBufferPtrs;
          }
          if(!(bp->userOutputIsInterleaved == 0))
            userOutput = bp->tempOutputBuffer;

          else
          {
            i = (unsigned int)0;
            for( ; !(i >= bp->outputChannelCount); i = i + 1u)
              bp->tempOutputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)i * bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserOutputSample));
            userOutput = (void *)bp->tempOutputBufferPtrs;
          }
          *streamCallbackResult=bp->streamCallback(userInput, userOutput, bp->framesPerUserBuffer, bp->timeInfo, bp->callbackStatusFlags, bp->userData);
          bp->timeInfo->inputBufferAdcTime = bp->timeInfo->inputBufferAdcTime + (double)bp->framesPerUserBuffer * bp->samplePeriod;
          bp->timeInfo->outputBufferDacTime = bp->timeInfo->outputBufferDacTime + (double)bp->framesPerUserBuffer * bp->samplePeriod;
          bp->framesInTempInputBuffer = (unsigned long int)0;
          if(*streamCallbackResult == 2)
            bp->framesInTempOutputBuffer = (unsigned long int)0;

          else
            bp->framesInTempOutputBuffer = bp->framesPerUserBuffer;
        }

        else
          bp->framesInTempInputBuffer = (unsigned long int)0;
      }

    }

    CopyTempOutputBuffersToHostOutputBuffers(bp);
  }
  return framesProcessed;
}

// AddOpenStream
// file src/common/pa_front.c line 271
static void AddOpenStream(void *stream)
{
  ((struct PaUtilStreamRepresentation *)stream)->nextOpenStream = firstOpenStream_;
  firstOpenStream_ = (struct PaUtilStreamRepresentation *)stream;
}

// AddStream
// file src/hostapi/jack/pa_jack.c line 1024
static signed int AddStream(struct PaJackStream *stream)
{
  signed int result = 0;
  struct anonymous$21 *hostApi = stream->hostApi;
  do
  {
    signed int err;
    err=pthread_mutex_lock(&hostApi->mtx);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  if(hostApi->jackIsDown == 0)
  {
    hostApi->toAdd = stream;
    result=WaitCondition(stream->hostApi);
  }

  do
  {
    signed int AddStream$$1$$3$$err;
    AddStream$$1$$3$$err=pthread_mutex_unlock(&hostApi->mtx);
    /* assertion err == 0 */
    assert(AddStream$$1$$3$$err == 0);
  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int paErr = result;
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *AddStream$$1$$4$$1$$1$$err = jackErr_;
          if(AddStream$$1$$4$$1$$1$$err == ((const char *)NULL))
            AddStream$$1$$4$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, AddStream$$1$$4$$1$$1$$err);
        }

      }

      PaUtil_DebugPrint("Expression 'result' failed in 'src/hostapi/jack/pa_jack.c', line: 1037\n");
      result = paErr;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$2;
  do
    if(!(hostApi->jackIsDown == 0))
    {
      PaUtil_DebugPrint("Expression '!hostApi->jackIsDown' failed in 'src/hostapi/jack/pa_jack.c', line: 1039\n");
      result = -9985;
      goto error;
    }

  while((_Bool)0);

error:
  ;
  return result;
}

// AllocateLinks
// file src/common/pa_allocation.c line 75
static struct PaUtilAllocationGroupLink * AllocateLinks(signed long int count, struct PaUtilAllocationGroupLink *nextBlock, struct PaUtilAllocationGroupLink *nextSpare)
{
  struct PaUtilAllocationGroupLink *result;
  signed int i;
  void *return_value_PaUtil_AllocateMemory$1;
  return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)(sizeof(struct PaUtilAllocationGroupLink) /*16ul*/  * (unsigned long int)count));
  result = (struct PaUtilAllocationGroupLink *)return_value_PaUtil_AllocateMemory$1;
  if(!(result == ((struct PaUtilAllocationGroupLink *)NULL)))
  {
    (result + (signed long int)0)->buffer = (void *)result;
    (result + (signed long int)0)->next = nextBlock;
    i = 1;
    for( ; !((signed long int)i >= count); i = i + 1)
    {
      (result + (signed long int)i)->buffer = NULL;
      (result + (signed long int)i)->next = &result[(signed long int)(i + 1)];
    }
    (result + (count - (signed long int)1))->next = nextSpare;
  }

  return result;
}

// AlsaOpen
// file src/hostapi/alsa/pa_linux_alsa.c line 1713
static signed int AlsaOpen(const struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *params, enum anonymous$5 streamDir, struct _snd_pcm **pcm)
{
  signed int result = 0;
  signed int ret;
  const char *deviceName = "";
  const struct PaAlsaDeviceInfo *deviceInfo = (const struct PaAlsaDeviceInfo *)(void *)0;
  struct PaAlsaStreamInfo *streamInfo = (struct PaAlsaStreamInfo *)params->hostApiSpecificStreamInfo;
  if(streamInfo == ((struct PaAlsaStreamInfo *)NULL))
  {
    deviceInfo=GetDeviceInfo(hostApi, params->device);
    deviceName = deviceInfo->alsaName;
  }

  else
    deviceName = streamInfo->deviceString;
  ret=OpenPcm(pcm, deviceName, (enum _snd_pcm_stream)((signed int)streamDir == StreamDirection_In ? SND_PCM_STREAM_CAPTURE : SND_PCM_STREAM_PLAYBACK), 0x00000001, 1);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(ret >= 0))
  {
    *pcm = (struct _snd_pcm *)(void *)0;
    do
    {
      signed int __pa_unsure_error_id = ret;
      if(!(__pa_unsure_error_id >= 0))
      {
        PaUtil_DebugPrint("Expression 'ret' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1736\n");
        result = -16 == ret ? -9985 : -9993;
        goto error;
      }

    }
    while((_Bool)0);
  }

  signed int AlsaOpen$$1$$3$$__pa_unsure_error_id;
  AlsaOpen$$1$$3$$__pa_unsure_error_id=alsa_snd_pcm_nonblock(*pcm, 0);
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  if(!(AlsaOpen$$1$$3$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$3=pthread_self();
    return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
    if(!(return_value_pthread_equal$4 == 0))
    {
      const char *return_value_1;
      return_value_1=alsa_snd_strerror(AlsaOpen$$1$$3$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaOpen$$1$$3$$__pa_unsure_error_id, return_value_1);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_nonblock( *pcm, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1738\n");
    result = -9999;
  }


end:
  ;
  return result;

error:
  ;
  goto end;
}

// AlsaRestart
// file src/hostapi/alsa/pa_linux_alsa.c line 3240
static signed int AlsaRestart(struct PaAlsaStream *stream)
{
  signed int result = 0;
  do
  {
    paUtilErr_=PaUnixMutex_Lock(&stream->stateMtx);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUnixMutex_Lock( &stream->stateMtx )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3244\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    paUtilErr_=AlsaStop(stream, 0);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'AlsaStop( stream, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3245\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    paUtilErr_=AlsaStart(stream, 0);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'AlsaStart( stream, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3246\n");
      result = paUtilErr_;
      break;
    }

  }
  while((_Bool)0);
  do
  {

  error:
    ;
    paUtilErr_=PaUnixMutex_Unlock(&stream->stateMtx);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUnixMutex_Unlock( &stream->stateMtx )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3251\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  return result;
}

// AlsaStart
// file src/hostapi/alsa/pa_linux_alsa.c line 2909
static signed int AlsaStart(struct PaAlsaStream *stream, signed int priming)
{
  signed int result = 0;
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
  {
    if(!(stream->callbackMode == 0))
    {
      if(priming == 0)
      {
        signed int AlsaStart$$1$$1$$1$$1$$1$$__pa_unsure_error_id;
        AlsaStart$$1$$1$$1$$1$$1$$__pa_unsure_error_id=alsa_snd_pcm_prepare(stream->playback.pcm);
        if(!(AlsaStart$$1$$1$$1$$1$$1$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$1=pthread_self();
          return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
          if(!(return_value_pthread_equal$2 == 0))
          {
            const char *return_value;
            return_value=alsa_snd_strerror(AlsaStart$$1$$1$$1$$1$$1$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStart$$1$$1$$1$$1$$1$$__pa_unsure_error_id, return_value);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_prepare( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2920\n");
          result = -9999;
        }

        if(!(stream->playback.canMmap == 0))
          SilenceBuffer(stream);

      }

      if(!(stream->playback.canMmap == 0))
      {
        signed int AlsaStart$$1$$1$$1$$2$$__pa_unsure_error_id;
        AlsaStart$$1$$1$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_start(stream->playback.pcm);
        if(!(AlsaStart$$1$$1$$1$$2$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$3=pthread_self();
          return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
          if(!(return_value_pthread_equal$4 == 0))
          {
            const char *return_value_1;
            return_value_1=alsa_snd_strerror(AlsaStart$$1$$1$$1$$2$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStart$$1$$1$$1$$2$$__pa_unsure_error_id, return_value_1);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_start( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2925\n");
          result = -9999;
        }

      }

    }

    else
    {
      signed int AlsaStart$$1$$1$$2$$__pa_unsure_error_id;
      AlsaStart$$1$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_prepare(stream->playback.pcm);
      if(!(AlsaStart$$1$$1$$2$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$5=pthread_self();
        return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
        if(!(return_value_pthread_equal$6 == 0))
        {
          const char *return_value_2;
          return_value_2=alsa_snd_strerror(AlsaStart$$1$$1$$2$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStart$$1$$1$$2$$__pa_unsure_error_id, return_value_2);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_prepare( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2928\n");
        result = -9999;
      }

    }
  }

  unsigned long int return_value_pthread_self$7;
  signed int return_value_pthread_equal$8;
  unsigned long int return_value_pthread_self$9;
  signed int return_value_pthread_equal$10;
  if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
  {
    if(stream->pcmsSynced == 0)
    {
      signed int __pa_unsure_error_id;
      __pa_unsure_error_id=alsa_snd_pcm_prepare(stream->capture.pcm);
      if(!(__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$7=pthread_self();
        return_value_pthread_equal$8=pthread_equal(return_value_pthread_self$7, paUnixMainThread);
        if(!(return_value_pthread_equal$8 == 0))
        {
          const char *return_value_3;
          return_value_3=alsa_snd_strerror(__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_3);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_prepare( stream->capture.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2932\n");
        result = -9999;
      }

      signed int AlsaStart$$1$$2$$2$$__pa_unsure_error_id;
      AlsaStart$$1$$2$$2$$__pa_unsure_error_id=alsa_snd_pcm_start(stream->capture.pcm);
      if(!(AlsaStart$$1$$2$$2$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$9=pthread_self();
        return_value_pthread_equal$10=pthread_equal(return_value_pthread_self$9, paUnixMainThread);
        if(!(return_value_pthread_equal$10 == 0))
        {
          const char *return_value_4;
          return_value_4=alsa_snd_strerror(AlsaStart$$1$$2$$2$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStart$$1$$2$$2$$__pa_unsure_error_id, return_value_4);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_start( stream->capture.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2934\n");
        result = -9999;
      }

    }

  }


end:
  ;
  return result;

error:
  ;
}

// AlsaStop
// file src/hostapi/alsa/pa_linux_alsa.c line 3020
static signed int AlsaStop(struct PaAlsaStream *stream, signed int abort)
{
  signed int result = 0;
  abort = 1;
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  if(!(abort == 0))
  {
    if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
    {
      signed int AlsaStop$$1$$1$$1$$1$$__pa_unsure_error_id;
      AlsaStop$$1$$1$$1$$1$$__pa_unsure_error_id=alsa_snd_pcm_drop(stream->playback.pcm);
      if(!(AlsaStop$$1$$1$$1$$1$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$1=pthread_self();
        return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
        if(!(return_value_pthread_equal$2 == 0))
        {
          const char *return_value;
          return_value=alsa_snd_strerror(AlsaStop$$1$$1$$1$$1$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStop$$1$$1$$1$$1$$__pa_unsure_error_id, return_value);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_drop( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3042\n");
        result = -9999;
      }

    }

    if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      if(stream->pcmsSynced == 0)
      {
        signed int __pa_unsure_error_id;
        __pa_unsure_error_id=alsa_snd_pcm_drop(stream->capture.pcm);
        if(!(__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$3=pthread_self();
          return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
          if(!(return_value_pthread_equal$4 == 0))
          {
            const char *return_value_1;
            return_value_1=alsa_snd_strerror(__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_1);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_drop( stream->capture.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3046\n");
          result = -9999;
        }

      }

    }

  }

  else
  {
    if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
    {
      signed int AlsaStop$$1$$2$$1$$1$$__pa_unsure_error_id;
      AlsaStop$$1$$2$$1$$1$$__pa_unsure_error_id=alsa_snd_pcm_nonblock(stream->playback.pcm, 0);
      if(!(AlsaStop$$1$$2$$1$$1$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$5=pthread_self();
        return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
        if(!(return_value_pthread_equal$6 == 0))
        {
          const char *return_value_2;
          return_value_2=alsa_snd_strerror(AlsaStop$$1$$2$$1$$1$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)AlsaStop$$1$$2$$1$$1$$__pa_unsure_error_id, return_value_2);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_nonblock( stream->playback.pcm, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3055\n");
        result = -9999;
      }

      signed int return_value_3;
      return_value_3=alsa_snd_pcm_drain(stream->playback.pcm);
    }

    if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      if(stream->pcmsSynced == 0)
      {
        signed int return_value_4;
        return_value_4=alsa_snd_pcm_drain(stream->capture.pcm);
      }

    }

  }

end:
  ;
  return result;

error:
  ;
}

// BlockingBegin
// file src/hostapi/jack/pa_jack.c line 307
static signed int BlockingBegin(struct PaJackStream *stream, signed int minimum_buffer_size)
{
  signed long int doRead = (signed long int)0;
  signed long int doWrite = (signed long int)0;
  signed int result = 0;
  signed long int numFrames;
  doRead = (signed long int)(stream->local_input_ports != (struct _jack_port **)(void *)0);
  doWrite = (signed long int)(stream->local_output_ports != (struct _jack_port **)(void *)0);
  stream->samplesPerFrame = 2;
  stream->bytesPerFrame = (signed int)(sizeof(float) /*4ul*/  * (unsigned long int)stream->samplesPerFrame);
  numFrames = (signed long int)32;
  for( ; !(numFrames >= (signed long int)minimum_buffer_size); numFrames = numFrames * (signed long int)2)
    ;
  unsigned long int return_value_pthread_self$1;
  if(!(doRead == 0l))
    do
    {
      signed int paErr;
      paErr=BlockingInitFIFO(&stream->inFIFO, numFrames, (signed long int)stream->bytesPerFrame);
      if(!(paErr >= 0))
      {
        if(paErr == -9999)
        {
          return_value_pthread_self$1=pthread_self();
          if(return_value_pthread_self$1 == mainThread_)
          {
            const char *err = jackErr_;
            if(err == ((const char *)NULL))
              err = "unknown error";

            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
          }

        }

        PaUtil_DebugPrint("Expression 'BlockingInitFIFO( &stream->inFIFO, numFrames, stream->bytesPerFrame )' failed in 'src/hostapi/jack/pa_jack.c', line: 326\n");
        result = paErr;
        goto error;
      }

    }
    while((_Bool)0);

  unsigned long int return_value_pthread_self$2;
  if(!(doWrite == 0l))
  {
    signed long int numBytes;
    do
    {
      signed int BlockingBegin$$1$$2$$1$$paErr;
      BlockingBegin$$1$$2$$1$$paErr=BlockingInitFIFO(&stream->outFIFO, numFrames, (signed long int)stream->bytesPerFrame);
      if(!(BlockingBegin$$1$$2$$1$$paErr >= 0))
      {
        if(BlockingBegin$$1$$2$$1$$paErr == -9999)
        {
          return_value_pthread_self$2=pthread_self();
          if(return_value_pthread_self$2 == mainThread_)
          {
            const char *BlockingBegin$$1$$2$$1$$1$$1$$err = jackErr_;
            if(BlockingBegin$$1$$2$$1$$1$$1$$err == ((const char *)NULL))
              BlockingBegin$$1$$2$$1$$1$$1$$err = "unknown error";

            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, BlockingBegin$$1$$2$$1$$1$$1$$err);
          }

        }

        PaUtil_DebugPrint("Expression 'BlockingInitFIFO( &stream->outFIFO, numFrames, stream->bytesPerFrame )' failed in 'src/hostapi/jack/pa_jack.c', line: 332\n");
        result = BlockingBegin$$1$$2$$1$$paErr;
        goto error;
      }

    }
    while((_Bool)0);
    numBytes=PaUtil_GetRingBufferWriteAvailable(&stream->outFIFO);
    PaUtil_AdvanceRingBufferWriteIndex(&stream->outFIFO, numBytes);
  }

  stream->data_available = 0;
  sem_init(&stream->data_semaphore, 0, (unsigned int)0);

error:
  ;
  return result;
}

// BlockingCallback
// file src/hostapi/jack/pa_jack.c line 276
static signed int BlockingCallback(const void *inputBuffer, void *outputBuffer, unsigned long int framesPerBuffer, const struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int statusFlags, void *userData)
{
  struct PaJackStream *stream = (struct PaJackStream *)userData;
  signed long int numBytes = (signed long int)((unsigned long int)stream->bytesPerFrame * framesPerBuffer);
  if(!(inputBuffer == NULL))
    PaUtil_WriteRingBuffer(&stream->inFIFO, inputBuffer, numBytes);

  if(!(outputBuffer == NULL))
  {
    signed int numRead;
    signed long int return_value_PaUtil_ReadRingBuffer$1;
    return_value_PaUtil_ReadRingBuffer$1=PaUtil_ReadRingBuffer(&stream->outFIFO, outputBuffer, numBytes);
    numRead = (signed int)return_value_PaUtil_ReadRingBuffer$1;
    memset((void *)((char *)outputBuffer + (signed long int)numRead), 0, (unsigned long int)(numBytes - (signed long int)numRead));
  }

  if(stream->data_available == 0)
  {
    stream->data_available = 1;
    sem_post(&stream->data_semaphore);
  }

  return 0;
}

// BlockingEnd
// file src/hostapi/jack/pa_jack.c line 347
static void BlockingEnd(struct PaJackStream *stream)
{
  BlockingTermFIFO(&stream->inFIFO);
  BlockingTermFIFO(&stream->outFIFO);
  sem_destroy(&stream->data_semaphore);
}

// BlockingGetStreamReadAvailable
// file src/hostapi/jack/pa_jack.c line 420
static signed long int BlockingGetStreamReadAvailable(void *s)
{
  struct PaJackStream *stream = (struct PaJackStream *)s;
  signed int bytesFull;
  signed long int return_value_PaUtil_GetRingBufferReadAvailable$1;
  return_value_PaUtil_GetRingBufferReadAvailable$1=PaUtil_GetRingBufferReadAvailable(&stream->inFIFO);
  bytesFull = (signed int)return_value_PaUtil_GetRingBufferReadAvailable$1;
  return (signed long int)(bytesFull / stream->bytesPerFrame);
}

// BlockingGetStreamWriteAvailable
// file src/hostapi/jack/pa_jack.c line 429
static signed long int BlockingGetStreamWriteAvailable(void *s)
{
  struct PaJackStream *stream = (struct PaJackStream *)s;
  signed int bytesEmpty;
  signed long int return_value_PaUtil_GetRingBufferWriteAvailable$1;
  return_value_PaUtil_GetRingBufferWriteAvailable$1=PaUtil_GetRingBufferWriteAvailable(&stream->outFIFO);
  bytesEmpty = (signed int)return_value_PaUtil_GetRingBufferWriteAvailable$1;
  return (signed long int)(bytesEmpty / stream->bytesPerFrame);
}

// BlockingInitFIFO
// file src/hostapi/jack/pa_jack.c line 258
static signed int BlockingInitFIFO(struct PaUtilRingBuffer *rbuf, signed long int numFrames, signed long int bytesPerFrame)
{
  signed long int numBytes = numFrames * bytesPerFrame;
  char *buffer;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)numBytes);
  buffer = (char *)return_value_malloc$1;
  if(buffer == ((char *)NULL))
    return -9992;

  else
  {
    memset((void *)buffer, 0, (unsigned long int)numBytes);
    signed long int return_value_PaUtil_InitializeRingBuffer$2;
    return_value_PaUtil_InitializeRingBuffer$2=PaUtil_InitializeRingBuffer(rbuf, (signed long int)1, numBytes, (void *)buffer);
    return (signed int)return_value_PaUtil_InitializeRingBuffer$2;
  }
}

// BlockingReadStream
// file src/hostapi/jack/pa_jack.c line 355
static signed int BlockingReadStream(void *s, void *data, unsigned long int numFrames)
{
  signed int result = 0;
  struct PaJackStream *stream = (struct PaJackStream *)s;
  signed long int bytesRead;
  char *p = (char *)data;
  signed long int numBytes = (signed long int)((unsigned long int)stream->bytesPerFrame * numFrames);
  while(numBytes >= 1l)
  {
    bytesRead=PaUtil_ReadRingBuffer(&stream->inFIFO, (void *)p, numBytes);
    numBytes = numBytes - bytesRead;
    p = p + bytesRead;
    if(numBytes >= 1l)
    {
      if(!(stream->data_available == 0))
        stream->data_available = 0;

      else
        sem_wait(&stream->data_semaphore);
    }

  }
  return result;
}

// BlockingTermFIFO
// file src/hostapi/jack/pa_jack.c line 268
static signed int BlockingTermFIFO(struct PaUtilRingBuffer *rbuf)
{
  if(!(rbuf->buffer == ((char *)NULL)))
    free((void *)rbuf->buffer);

  rbuf->buffer = (char *)(void *)0;
  return 0;
}

// BlockingWaitEmpty
// file src/hostapi/jack/pa_jack.c line 438
static signed int BlockingWaitEmpty(void *s)
{
  struct PaJackStream *stream = (struct PaJackStream *)s;
  signed long int return_value_PaUtil_GetRingBufferReadAvailable$1;
  do
  {
    return_value_PaUtil_GetRingBufferReadAvailable$1=PaUtil_GetRingBufferReadAvailable(&stream->outFIFO);
    if(!(return_value_PaUtil_GetRingBufferReadAvailable$1 >= 1l))
      break;

    stream->data_available = 0;
    sem_wait(&stream->data_semaphore);
  }
  while((_Bool)1);
  return 0;
}

// BlockingWriteStream
// file src/hostapi/jack/pa_jack.c line 381
static signed int BlockingWriteStream(void *s, const void *data, unsigned long int numFrames)
{
  signed int result = 0;
  struct PaJackStream *stream = (struct PaJackStream *)s;
  signed long int bytesWritten;
  char *p = (char *)data;
  signed long int numBytes = (signed long int)((unsigned long int)stream->bytesPerFrame * numFrames);
  while(numBytes >= 1l)
  {
    bytesWritten=PaUtil_WriteRingBuffer(&stream->outFIFO, (const void *)p, numBytes);
    numBytes = numBytes - bytesWritten;
    p = p + bytesWritten;
    if(numBytes >= 1l)
    {
      if(!(stream->data_available == 0))
        stream->data_available = 0;

      else
        sem_wait(&stream->data_semaphore);
    }

  }
  return result;
}

// BoostPriority
// file src/os/unix/pa_unix_util.c line 245
static signed int BoostPriority(struct anonymous$6 *self)
{
  signed int result = 0;
  struct sched_param spm = { .__sched_priority=0 };
  spm.__sched_priority = 1;
  /* assertion self */
  assert(self != ((struct anonymous$6 *)NULL));
  signed int return_value_pthread_setschedparam$2;
  return_value_pthread_setschedparam$2=pthread_setschedparam(self->thread, 1, &spm);
  if(!(return_value_pthread_setschedparam$2 == 0))
  {
    do
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(!(*return_value___errno_location$1 == 1))
      {
        PaUtil_DebugPrint("Expression 'errno == EPERM' failed in 'src/os/unix/pa_unix_util.c', line: 256\n");
        result = -9986;
        goto error;
      }

    }
    while((_Bool)0);
    result = 0;
  }

  else
    result = 1;

error:
  ;
  return result;
}

// BuildDeviceList
// file src/hostapi/alsa/pa_linux_alsa.c line 1228
static signed int BuildDeviceList(struct PaAlsaHostApiRepresentation *alsaApi)
{
  struct PaUtilHostApiRepresentation *baseApi = &alsaApi->baseHostApiRep;
  struct PaAlsaDeviceInfo *deviceInfoArray;
  signed int cardIdx = -1;
  signed int devIdx = 0;
  struct _snd_ctl_card_info *cardInfo;
  signed int result = 0;
  unsigned long int numDeviceNames = (unsigned long int)0;
  unsigned long int maxDeviceNames = (unsigned long int)1;
  unsigned long int BuildDeviceList$$1$$i;
  struct anonymous$19 *hwDevInfos = (struct anonymous$19 *)(void *)0;
  struct _snd_config *topNode = (struct _snd_config *)(void *)0;
  struct _snd_pcm_info *pcmInfo;
  signed int res;
  signed int blocking = 0x00000001;
  signed int usePlughw = 0;
  char *hwPrefix = "";
  char alsaCardName[50l];
  char *return_value_getenv$3;
  return_value_getenv$3=getenv("PA_ALSA_INITIALIZE_BLOCK");
  char *return_value_getenv$1;
  signed int return_value_atoi$2;
  if(!(return_value_getenv$3 == ((char *)NULL)))
  {
    return_value_getenv$1=getenv("PA_ALSA_INITIALIZE_BLOCK");
    return_value_atoi$2=atoi(return_value_getenv$1);
    if(!(return_value_atoi$2 == 0))
      blocking = 0;

  }

  char *return_value_getenv$6;
  return_value_getenv$6=getenv("PA_ALSA_PLUGHW");
  char *return_value_getenv$4;
  signed int return_value_atoi$5;
  if(!(return_value_getenv$6 == ((char *)NULL)))
  {
    return_value_getenv$4=getenv("PA_ALSA_PLUGHW");
    return_value_atoi$5=atoi(return_value_getenv$4);
    if(!(return_value_atoi$5 == 0))
    {
      usePlughw = 1;
      hwPrefix = "plug";
    }

  }

  baseApi->info.defaultInputDevice = (signed int)-1;
  baseApi->info.defaultOutputDevice = (signed int)-1;
  cardIdx = -1;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_ctl_card_info_sizeof();
  void *return_value___builtin_alloca$7;
  return_value___builtin_alloca$7=__builtin_alloca(__alsa_alloca_size);
  *(&cardInfo) = (struct _snd_ctl_card_info *)return_value___builtin_alloca$7;
  memset((void *)*(&cardInfo), 0, __alsa_alloca_size);
  unsigned long int BuildDeviceList$$1$$3$$__alsa_alloca_size;
  BuildDeviceList$$1$$3$$__alsa_alloca_size=alsa_snd_pcm_info_sizeof();
  void *return_value___builtin_alloca$8;
  return_value___builtin_alloca$8=__builtin_alloca(BuildDeviceList$$1$$3$$__alsa_alloca_size);
  *(&pcmInfo) = (struct _snd_pcm_info *)return_value___builtin_alloca$8;
  memset((void *)*(&pcmInfo), 0, BuildDeviceList$$1$$3$$__alsa_alloca_size);
  signed int return_value;
  return_value=alsa_snd_card_next(&cardIdx);
  if(return_value == 0)
  {
    if(cardIdx >= 0)
    {
      char *cardName;
      signed int BuildDeviceList$$1$$4$$devIdx = -1;
      struct _snd_ctl *ctl;
      char buf[50l];
      snprintf(alsaCardName, sizeof(char [50l]) /*50ul*/ , "hw:%d", cardIdx);
      signed int return_value_1;
      return_value_1=alsa_snd_ctl_open(&ctl, alsaCardName, 0);
      if(return_value_1 >= 0)
      {
        alsa_snd_ctl_card_info(ctl, cardInfo);
        const char *return_value_2;
        return_value_2=alsa_snd_ctl_card_info_get_name(cardInfo);
        paUtilErr_=PaAlsa_StrDup(alsaApi, &cardName, return_value_2);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsa_StrDup( alsaApi, &cardName, alsa_snd_ctl_card_info_get_name( cardInfo ))' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1292\n");
          result = paUtilErr_;
        }

        signed int return_value_3;
        return_value_3=alsa_snd_ctl_pcm_next_device(ctl, &BuildDeviceList$$1$$4$$devIdx);
        if(return_value_3 == 0)
        {
          if(BuildDeviceList$$1$$4$$devIdx >= 0)
          {
            char *alsaDeviceName;
            char *deviceName;
            char *infoName;
            unsigned long int len;
            signed int hasPlayback = 0;
            signed int hasCapture = 0;
            snprintf(buf, sizeof(char [50l]) /*50ul*/ , "%s%s,%d", hwPrefix, (const void *)alsaCardName, BuildDeviceList$$1$$4$$devIdx);
            alsa_snd_pcm_info_set_device(pcmInfo, (unsigned int)BuildDeviceList$$1$$4$$devIdx);
            alsa_snd_pcm_info_set_subdevice(pcmInfo, (unsigned int)0);
            alsa_snd_pcm_info_set_stream(pcmInfo, (enum _snd_pcm_stream)SND_PCM_STREAM_CAPTURE);
            signed int return_value_4;
            return_value_4=alsa_snd_ctl_pcm_info(ctl, pcmInfo);
            if(return_value_4 >= 0)
              hasCapture = 1;

            alsa_snd_pcm_info_set_stream(pcmInfo, (enum _snd_pcm_stream)SND_PCM_STREAM_PLAYBACK);
            signed int return_value_5;
            return_value_5=alsa_snd_ctl_pcm_info(ctl, pcmInfo);
            if(return_value_5 >= 0)
              hasPlayback = 1;

            if(!(hasCapture == 0) || !(hasPlayback == 0))
            {
              const char *return_value_6;
              return_value_6=alsa_snd_pcm_info_get_name(pcmInfo);
              infoName=SkipCardDetailsInName((char *)return_value_6, cardName);
              signed int return_value_snprintf$9;
              return_value_snprintf$9=snprintf((char *)(void *)0, (unsigned long int)0, "%s: %s (%s)", cardName, infoName, (const void *)buf);
              len = (unsigned long int)(return_value_snprintf$9 + 1);
              void *return_value_PaUtil_GroupAllocateMemory$10;
              return_value_PaUtil_GroupAllocateMemory$10=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)len);
              deviceName = (char *)return_value_PaUtil_GroupAllocateMemory$10;
              if(deviceName == ((char *)NULL))
              {
                PaUtil_DebugPrint("Expression 'deviceName = (char *)PaUtil_GroupAllocateMemory( alsaApi->allocations, len )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1328\n");
                result = -9992;
              }

              snprintf(deviceName, len, "%s: %s (%s)", cardName, infoName, (const void *)buf);
              numDeviceNames = numDeviceNames + 1ul;
              if(hwDevInfos == ((struct anonymous$19 *)NULL) || !(maxDeviceNames >= numDeviceNames))
              {
                maxDeviceNames = maxDeviceNames * (unsigned long int)2;
                void *return_value_realloc$11;
                return_value_realloc$11=realloc((void *)hwDevInfos, maxDeviceNames * sizeof(struct anonymous$19) /*32ul*/ );
                hwDevInfos = (struct anonymous$19 *)return_value_realloc$11;
                if(hwDevInfos == ((struct anonymous$19 *)NULL))
                {
                  PaUtil_DebugPrint("Expression 'hwDevInfos = (HwDevInfo *) realloc( hwDevInfos, maxDeviceNames * sizeof (HwDevInfo) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1336\n");
                  result = -9992;
                }

              }

              paUtilErr_=PaAlsa_StrDup(alsaApi, &alsaDeviceName, buf);
              if(!(paUtilErr_ >= 0))
              {
                PaUtil_DebugPrint("Expression 'PaAlsa_StrDup( alsaApi, &alsaDeviceName, buf )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1339\n");
                result = paUtilErr_;
              }

              (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->alsaName = alsaDeviceName;
              (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->name = deviceName;
              (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->isPlug = usePlughw;
              (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasPlayback = hasPlayback;
              (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasCapture = hasCapture;
            }

          }

        }

        alsa_snd_ctl_close(ctl);
      }

    }

  }

  unsigned long int return_value_pthread_self$12;
  signed int return_value_pthread_equal$13;
  if(*alsa_snd_config == ((struct _snd_config *)NULL))
  {
    signed int __pa_unsure_error_id;
    __pa_unsure_error_id=alsa_snd_config_update();
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$12=pthread_self();
      return_value_pthread_equal$13=pthread_equal(return_value_pthread_self$12, paUnixMainThread);
      if(!(return_value_pthread_equal$13 == 0))
      {
        const char *return_value_7;
        return_value_7=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_7);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_config_update()' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1354\n");
      result = -9999;
    }

  }

  /* assertion *alsa_snd_config */
  assert(*alsa_snd_config != ((struct _snd_config *)NULL));
  res=alsa_snd_config_search(*alsa_snd_config, "pcm", &topNode);
  unsigned long int return_value_pthread_self$14;
  signed int return_value_pthread_equal$15;
  unsigned long int return_value_pthread_self$16;
  signed int return_value_pthread_equal$17;
  unsigned long int return_value_pthread_self$18;
  signed int return_value_pthread_equal$19;
  if(res >= 0)
  {
    struct _snd_config_iterator *i;
    struct _snd_config_iterator *next;
    i=alsa_snd_config_iterator_first(topNode);
    next=alsa_snd_config_iterator_next(i);
    struct _snd_config_iterator *return_value_8;
    return_value_8=alsa_snd_config_iterator_end(topNode);
    if(!(i == return_value_8))
    {
      const char *tpStr = "unknown";
      const char *idStr = (const char *)(void *)0;
      signed int err = 0;
      char *BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName;
      char *BuildDeviceList$$1$$6$$1$$1$$deviceName;
      const struct anonymous$19 *predefined = (const struct anonymous$19 *)(void *)0;
      struct _snd_config *n;
      n=alsa_snd_config_iterator_entry(i);
      struct _snd_config *tp = (struct _snd_config *)(void *)0;
      err=alsa_snd_config_search(n, "type", &tp);
      if(!(err >= 0))
      {
        if(!(err == -2))
        {
          signed int BuildDeviceList$$1$$6$$1$$1$$1$$1$$1$$__pa_unsure_error_id = err;
          if(!(BuildDeviceList$$1$$6$$1$$1$$1$$1$$1$$__pa_unsure_error_id >= 0))
          {
            return_value_pthread_self$14=pthread_self();
            return_value_pthread_equal$15=pthread_equal(return_value_pthread_self$14, paUnixMainThread);
            if(!(return_value_pthread_equal$15 == 0))
            {
              const char *return_value_9;
              return_value_9=alsa_snd_strerror(BuildDeviceList$$1$$6$$1$$1$$1$$1$$1$$__pa_unsure_error_id);
              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)BuildDeviceList$$1$$6$$1$$1$$1$$1$$1$$__pa_unsure_error_id, return_value_9);
            }

            PaUtil_DebugPrint("Expression 'err' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1375\n");
            result = -9999;
          }

        }

      }

      else
      {
        signed int BuildDeviceList$$1$$6$$1$$1$$2$$1$$__pa_unsure_error_id;
        BuildDeviceList$$1$$6$$1$$1$$2$$1$$__pa_unsure_error_id=alsa_snd_config_get_string(tp, &tpStr);
        if(!(BuildDeviceList$$1$$6$$1$$1$$2$$1$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$16=pthread_self();
          return_value_pthread_equal$17=pthread_equal(return_value_pthread_self$16, paUnixMainThread);
          if(!(return_value_pthread_equal$17 == 0))
          {
            const char *return_value_10;
            return_value_10=alsa_snd_strerror(BuildDeviceList$$1$$6$$1$$1$$2$$1$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)BuildDeviceList$$1$$6$$1$$1$$2$$1$$__pa_unsure_error_id, return_value_10);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_config_get_string( tp, &tpStr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1380\n");
          result = -9999;
        }

      }
      signed int BuildDeviceList$$1$$6$$1$$1$$3$$__pa_unsure_error_id;
      BuildDeviceList$$1$$6$$1$$1$$3$$__pa_unsure_error_id=alsa_snd_config_get_id(n, &idStr);
      if(!(BuildDeviceList$$1$$6$$1$$1$$3$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$18=pthread_self();
        return_value_pthread_equal$19=pthread_equal(return_value_pthread_self$18, paUnixMainThread);
        if(!(return_value_pthread_equal$19 == 0))
        {
          const char *return_value_11;
          return_value_11=alsa_snd_strerror(BuildDeviceList$$1$$6$$1$$1$$3$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)BuildDeviceList$$1$$6$$1$$1$$3$$__pa_unsure_error_id, return_value_11);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_config_get_id( n, &idStr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1382\n");
        result = -9999;
      }

      signed int return_value_IgnorePlugin$20;
      return_value_IgnorePlugin$20=IgnorePlugin(idStr);
      if(return_value_IgnorePlugin$20 == 0)
      {
        unsigned long int return_value_strlen$21;
        return_value_strlen$21=strlen(idStr);
        void *return_value_PaUtil_GroupAllocateMemory$22;
        return_value_PaUtil_GroupAllocateMemory$22=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)(return_value_strlen$21 + (unsigned long int)6));
        BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName = (char *)return_value_PaUtil_GroupAllocateMemory$22;
        if(BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName == ((char *)NULL))
        {
          PaUtil_DebugPrint("Expression 'alsaDeviceName = (char*)PaUtil_GroupAllocateMemory( alsaApi->allocations, strlen(idStr) + 6 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1391\n");
          result = -9992;
        }

        strcpy(BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName, idStr);
        unsigned long int return_value_strlen$23;
        return_value_strlen$23=strlen(idStr);
        void *return_value_PaUtil_GroupAllocateMemory$24;
        return_value_PaUtil_GroupAllocateMemory$24=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)(return_value_strlen$23 + (unsigned long int)1));
        BuildDeviceList$$1$$6$$1$$1$$deviceName = (char *)return_value_PaUtil_GroupAllocateMemory$24;
        if(BuildDeviceList$$1$$6$$1$$1$$deviceName == ((char *)NULL))
        {
          PaUtil_DebugPrint("Expression 'deviceName = (char*)PaUtil_GroupAllocateMemory( alsaApi->allocations, strlen(idStr) + 1 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1394\n");
          result = -9992;
        }

        strcpy(BuildDeviceList$$1$$6$$1$$1$$deviceName, idStr);
        numDeviceNames = numDeviceNames + 1ul;
        if(hwDevInfos == ((struct anonymous$19 *)NULL) || !(maxDeviceNames >= numDeviceNames))
        {
          maxDeviceNames = maxDeviceNames * (unsigned long int)2;
          void *return_value_realloc$25;
          return_value_realloc$25=realloc((void *)hwDevInfos, maxDeviceNames * sizeof(struct anonymous$19) /*32ul*/ );
          hwDevInfos = (struct anonymous$19 *)return_value_realloc$25;
          if(hwDevInfos == ((struct anonymous$19 *)NULL))
          {
            PaUtil_DebugPrint("Expression 'hwDevInfos = (HwDevInfo *) realloc( hwDevInfos, maxDeviceNames * sizeof (HwDevInfo) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1402\n");
            result = -9992;
          }

        }

        predefined=FindDeviceName(BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName);
        (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->alsaName = BuildDeviceList$$1$$6$$1$$1$$alsaDeviceName;
        (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->name = BuildDeviceList$$1$$6$$1$$1$$deviceName;
        (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->isPlug = 1;
        if(!(predefined == ((const struct anonymous$19 *)NULL)))
        {
          (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasPlayback = predefined->hasPlayback;
          (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasCapture = predefined->hasCapture;
        }

        else
        {
          (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasPlayback = 1;
          (hwDevInfos + (signed long int)(numDeviceNames - (unsigned long int)1))->hasCapture = 1;
        }
      }

      i = next;
      next=alsa_snd_config_iterator_next(i);
    }

  }

  void *return_value_PaUtil_GroupAllocateMemory$26;
  return_value_PaUtil_GroupAllocateMemory$26=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)(sizeof(struct PaDeviceInfo *) /*8ul*/  * numDeviceNames));
  baseApi->deviceInfos = (struct PaDeviceInfo **)return_value_PaUtil_GroupAllocateMemory$26;
  _Bool tmp_if_expr$30;
  signed int return_value_strcmp$29;
  signed int return_value_strcmp$31;
  if(baseApi->deviceInfos == ((struct PaDeviceInfo **)NULL))
  {
    PaUtil_DebugPrint("Expression 'baseApi->deviceInfos = (PaDeviceInfo**)PaUtil_GroupAllocateMemory( alsaApi->allocations, sizeof(PaDeviceInfo*) * (numDeviceNames) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1428\n");
    result = -9992;
  }

  else
  {
    void *return_value_PaUtil_GroupAllocateMemory$27;
    return_value_PaUtil_GroupAllocateMemory$27=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)(sizeof(struct PaAlsaDeviceInfo) /*96ul*/  * numDeviceNames));
    deviceInfoArray = (struct PaAlsaDeviceInfo *)return_value_PaUtil_GroupAllocateMemory$27;
    if(deviceInfoArray == ((struct PaAlsaDeviceInfo *)NULL))
    {
      PaUtil_DebugPrint("Expression 'deviceInfoArray = (PaAlsaDeviceInfo*)PaUtil_GroupAllocateMemory( alsaApi->allocations, sizeof(PaAlsaDeviceInfo) * numDeviceNames )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1432\n");
      result = -9992;
    }

    else
    {
      BuildDeviceList$$1$$i = (unsigned long int)0;
      devIdx = 0;
      if(!(BuildDeviceList$$1$$i >= numDeviceNames))
      {
        struct PaAlsaDeviceInfo *devInfo = &deviceInfoArray[(signed long int)BuildDeviceList$$1$$i];
        struct anonymous$19 *hwInfo = &hwDevInfos[(signed long int)BuildDeviceList$$1$$i];
        signed int return_value_strcmp$28;
        return_value_strcmp$28=strcmp(hwInfo->name, "dmix");
        if(return_value_strcmp$28 == 0)
          tmp_if_expr$30 = (_Bool)1;

        else
        {
          return_value_strcmp$29=strcmp(hwInfo->name, "default");
          tmp_if_expr$30 = !(return_value_strcmp$29 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(!tmp_if_expr$30)
        {
          paUtilErr_=FillInDevInfo(alsaApi, hwInfo, blocking, devInfo, &devIdx);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'FillInDevInfo( alsaApi, hwInfo, blocking, devInfo, &devIdx )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1452\n");
            result = paUtilErr_;
          }

        }

        BuildDeviceList$$1$$i = BuildDeviceList$$1$$i + 1ul;
      }

      /* assertion devIdx < numDeviceNames */
      assert((unsigned long int)devIdx < numDeviceNames);
      BuildDeviceList$$1$$i = (unsigned long int)0;
      if(!(BuildDeviceList$$1$$i >= numDeviceNames))
      {
        struct PaAlsaDeviceInfo *BuildDeviceList$$1$$10$$1$$devInfo = &deviceInfoArray[(signed long int)BuildDeviceList$$1$$i];
        struct anonymous$19 *BuildDeviceList$$1$$10$$1$$hwInfo = &hwDevInfos[(signed long int)BuildDeviceList$$1$$i];
        signed int return_value_strcmp$32;
        return_value_strcmp$32=strcmp(BuildDeviceList$$1$$10$$1$$hwInfo->name, "dmix");
        if(!(return_value_strcmp$32 == 0))
          return_value_strcmp$31=strcmp(BuildDeviceList$$1$$10$$1$$hwInfo->name, "default");

        else
        {
          paUtilErr_=FillInDevInfo(alsaApi, BuildDeviceList$$1$$10$$1$$hwInfo, blocking, BuildDeviceList$$1$$10$$1$$devInfo, &devIdx);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'FillInDevInfo( alsaApi, hwInfo, blocking, devInfo, &devIdx )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1465\n");
            result = paUtilErr_;
          }

        }
        BuildDeviceList$$1$$i = BuildDeviceList$$1$$i + 1ul;
      }

      free((void *)hwDevInfos);
      baseApi->info.deviceCount = devIdx;

    end:
      ;
      return result;
    }
  }

error:
  ;
}

// BuildDeviceList$link1
// file src/hostapi/jack/pa_jack.c line 459
static signed int BuildDeviceList$link1(struct anonymous$21 *jackApi)
{
  signed int result$link1 = 0;
  struct PaUtilHostApiRepresentation *commonApi = &jackApi->commonHostApiRep;
  const char **jack_ports = (const char **)(void *)0;
  char **client_names = (char **)(void *)0;
  char *regex_pattern = (char *)(void *)0;
  signed int port_index;
  signed int client_index;
  signed int i$link1;
  double globalSampleRate;
  struct re_pattern_buffer port_regex;
  unsigned long int numClients = (unsigned long int)0;
  unsigned long int numPorts = (unsigned long int)0;
  char *tmp_client_name = (char *)(void *)0;
  commonApi->info.defaultInputDevice = (signed int)-1;
  commonApi->info.defaultOutputDevice = (signed int)-1;
  commonApi->info.deviceCount = 0;
  do
  {
    signed int err;
    err=regcomp(&port_regex, "^[^:]*", 1);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  PaUtil_FreeAllAllocations(jackApi->deviceInfoMemory);
  signed int return_value_jack_client_name_size$1;
  return_value_jack_client_name_size$1=jack_client_name_size();
  void *return_value_PaUtil_GroupAllocateMemory$2;
  return_value_PaUtil_GroupAllocateMemory$2=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)(return_value_jack_client_name_size$1 + 3));
  regex_pattern = (char *)return_value_PaUtil_GroupAllocateMemory$2;
  signed int return_value_jack_client_name_size$3;
  return_value_jack_client_name_size$3=jack_client_name_size();
  void *return_value_PaUtil_GroupAllocateMemory$4;
  return_value_PaUtil_GroupAllocateMemory$4=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)return_value_jack_client_name_size$3);
  tmp_client_name = (char *)return_value_PaUtil_GroupAllocateMemory$4;
  _Bool tmp_if_expr$6;
  unsigned long int return_value_pthread_self$5;
  do
  {
    jack_ports=jack_get_ports(jackApi->jack_client, "", "audio", (unsigned long int)0);
    if(!(jack_ports == ((const char **)NULL)))
      tmp_if_expr$6 = jack_ports[(signed long int)0] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$6 = (_Bool)0;
    if(!tmp_if_expr$6)
    {
      PaUtil_DebugPrint("Expression '(jack_ports = jack_get_ports( jackApi->jack_client, \"\", JACK_PORT_TYPE_FILTER, 0 )) && jack_ports[0]' failed in 'src/hostapi/jack/pa_jack.c', line: 499\n");
      result$link1 = 0;
      goto error;
    }

  }
  while((_Bool)0);
  for( ; !(jack_ports[(signed long int)numPorts] == ((const char *)NULL)); numPorts = numPorts + 1ul)
    ;
  unsigned long int return_value_pthread_self$7;
  do
  {
    void *return_value_PaUtil_GroupAllocateMemory$8;
    return_value_PaUtil_GroupAllocateMemory$8=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)(numPorts * sizeof(char *) /*8ul*/ ));
    client_names = (char **)return_value_PaUtil_GroupAllocateMemory$8;
    if(client_names == ((char **)NULL))
    {
      PaUtil_DebugPrint("Expression 'client_names = PaUtil_GroupAllocateMemory( jackApi->deviceInfoMemory, numPorts * sizeof (char *) )' failed in 'src/hostapi/jack/pa_jack.c', line: 505\n");
      result$link1 = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  numClients = (unsigned long int)0;
  port_index = 0;
  unsigned long int return_value_pthread_self$9;
  unsigned long int return_value_pthread_self$13;
  for( ; !(jack_ports[(signed long int)port_index] == ((const char *)NULL)); port_index = port_index + 1)
  {
    signed int client_seen = 0;
    struct anonymous$24 match_info;
    const char *port = jack_ports[(signed long int)port_index];
    do
    {
      signed int return_value_regexec$10;
      return_value_regexec$10=regexec(&port_regex, port, (unsigned long int)1, &match_info, 0);
      if(!(return_value_regexec$10 == 0))
      {
        PaUtil_DebugPrint("Expression '!regexec( &port_regex, port, 1, &match_info, 0 )' failed in 'src/hostapi/jack/pa_jack.c', line: 516\n");
        result$link1 = -9986;
        goto error;
      }

    }
    while((_Bool)0);
    signed int return_value_jack_client_name_size$11;
    return_value_jack_client_name_size$11=jack_client_name_size();
    /* assertion match_info.rm_eo - match_info.rm_so < jack_client_name_size() */
    assert(match_info.rm_eo - match_info.rm_so < return_value_jack_client_name_size$11);
    memcpy((void *)tmp_client_name, (const void *)(port + (signed long int)match_info.rm_so), (unsigned long int)(match_info.rm_eo - match_info.rm_so));
    tmp_client_name[(signed long int)(match_info.rm_eo - match_info.rm_so)] = (char)0;
    i$link1 = 0;
    for( ; !((unsigned long int)i$link1 >= numClients); i$link1 = i$link1 + 1)
    {
      signed int return_value_strcmp$12;
      return_value_strcmp$12=strcmp(tmp_client_name, client_names[(signed long int)i$link1]);
      if(return_value_strcmp$12 == 0)
        client_seen = 1;

    }
    if(client_seen == 0)
    {
      do
      {
        unsigned long int return_value_strlen$14;
        return_value_strlen$14=strlen(tmp_client_name);
        void *return_value_PaUtil_GroupAllocateMemory$15;
        return_value_PaUtil_GroupAllocateMemory$15=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)(return_value_strlen$14 + (unsigned long int)1));
        client_names[(signed long int)numClients] = (char *)return_value_PaUtil_GroupAllocateMemory$15;
        if(client_names[(signed long int)numClients] == ((char *)NULL))
        {
          PaUtil_DebugPrint("Expression 'client_names[numClients] = (char*)PaUtil_GroupAllocateMemory( jackApi->deviceInfoMemory, strlen(tmp_client_name) + 1)' failed in 'src/hostapi/jack/pa_jack.c', line: 533\n");
          result$link1 = -9992;
          goto error;
        }

      }
      while((_Bool)0);
      signed int return_value_strcmp$16;
      return_value_strcmp$16=strcmp("alsa_pcm", tmp_client_name);
      if(return_value_strcmp$16 == 0 && numClients >= 1ul)
      {
        strcpy(client_names[(signed long int)numClients], client_names[(signed long int)0]);
        strcpy(client_names[(signed long int)0], tmp_client_name);
      }

      else
        strcpy(client_names[(signed long int)numClients], tmp_client_name);
      numClients = numClients + 1ul;
    }

  }
  unsigned int return_value_jack_get_sample_rate$17;
  return_value_jack_get_sample_rate$17=jack_get_sample_rate(jackApi->jack_client);
  globalSampleRate = (double)return_value_jack_get_sample_rate$17;
  unsigned long int return_value_pthread_self$18$link1;
  do
  {
    void *return_value_PaUtil_GroupAllocateMemory$19;
    return_value_PaUtil_GroupAllocateMemory$19=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)(sizeof(struct PaDeviceInfo *) /*8ul*/  * numClients));
    commonApi->deviceInfos = (struct PaDeviceInfo **)return_value_PaUtil_GroupAllocateMemory$19;
    if(commonApi->deviceInfos == ((struct PaDeviceInfo **)NULL))
    {
      PaUtil_DebugPrint("Expression 'commonApi->deviceInfos = (PaDeviceInfo**)PaUtil_GroupAllocateMemory( jackApi->deviceInfoMemory, sizeof(PaDeviceInfo*) * numClients )' failed in 'src/hostapi/jack/pa_jack.c', line: 560\n");
      result$link1 = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  /* assertion commonApi->info.deviceCount == 0 */
  assert(commonApi->info.deviceCount == 0);
  client_index = 0;
  unsigned long int return_value_pthread_self$20;
  unsigned long int return_value_pthread_self$22;
  for( ; !((unsigned long int)client_index >= numClients); client_index = client_index + 1)
  {
    struct PaDeviceInfo *curDevInfo;
    const char **clientPorts = (const char **)(void *)0;
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$21;
      return_value_PaUtil_GroupAllocateMemory$21=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)sizeof(struct PaDeviceInfo) /*72ul*/ );
      curDevInfo = (struct PaDeviceInfo *)return_value_PaUtil_GroupAllocateMemory$21;
      if(curDevInfo == ((struct PaDeviceInfo *)NULL))
      {
        PaUtil_DebugPrint("Expression 'curDevInfo = (PaDeviceInfo*)PaUtil_GroupAllocateMemory( jackApi->deviceInfoMemory, sizeof(PaDeviceInfo) )' failed in 'src/hostapi/jack/pa_jack.c', line: 571\n");
        result$link1 = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      unsigned long int return_value_strlen$23$link1;
      return_value_strlen$23$link1=strlen(client_names[(signed long int)client_index]);
      void *return_value_PaUtil_GroupAllocateMemory$24$link1;
      return_value_PaUtil_GroupAllocateMemory$24$link1=PaUtil_GroupAllocateMemory(jackApi->deviceInfoMemory, (signed long int)(return_value_strlen$23$link1 + (unsigned long int)1));
      curDevInfo->name = (char *)return_value_PaUtil_GroupAllocateMemory$24$link1;
      if(curDevInfo->name == ((const char *)NULL))
      {
        PaUtil_DebugPrint("Expression 'curDevInfo->name = (char*)PaUtil_GroupAllocateMemory( jackApi->deviceInfoMemory, strlen(client_names[client_index]) + 1 )' failed in 'src/hostapi/jack/pa_jack.c', line: 573\n");
        result$link1 = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    strcpy((char *)curDevInfo->name, client_names[(signed long int)client_index]);
    curDevInfo->structVersion = 2;
    curDevInfo->hostApi = jackApi->hostApiIndex;
    curDevInfo->defaultSampleRate = globalSampleRate;
    sprintf(regex_pattern, "%s:.*", client_names[(signed long int)client_index]);
    clientPorts=jack_get_ports(jackApi->jack_client, regex_pattern, "audio", (unsigned long int)2);
    curDevInfo->maxInputChannels = 0;
    curDevInfo->defaultLowInputLatency = 0.;
    curDevInfo->defaultHighInputLatency = 0.;
    if(!(clientPorts == ((const char **)NULL)))
    {
      struct _jack_port *p;
      p=jack_port_by_name(jackApi->jack_client, clientPorts[(signed long int)0]);
      unsigned int return_value_jack_port_get_latency$25;
      return_value_jack_port_get_latency$25=jack_port_get_latency(p);
      curDevInfo->defaultHighInputLatency = (double)return_value_jack_port_get_latency$25 / globalSampleRate;
      curDevInfo->defaultLowInputLatency = curDevInfo->defaultHighInputLatency;
      i$link1 = 0;
      for( ; !(clientPorts[(signed long int)i$link1] == ((const char *)NULL)); i$link1 = i$link1 + 1)
        curDevInfo->maxInputChannels = curDevInfo->maxInputChannels + 1;
      free((void *)clientPorts);
    }

    clientPorts=jack_get_ports(jackApi->jack_client, regex_pattern, "audio", (unsigned long int)1);
    curDevInfo->maxOutputChannels = 0;
    curDevInfo->defaultLowOutputLatency = 0.;
    curDevInfo->defaultHighOutputLatency = 0.;
    if(!(clientPorts == ((const char **)NULL)))
    {
      struct _jack_port *BuildDeviceList$$1$$6$$1$$4$$p;
      BuildDeviceList$$1$$6$$1$$4$$p=jack_port_by_name(jackApi->jack_client, clientPorts[(signed long int)0]);
      unsigned int return_value_jack_port_get_latency$26;
      return_value_jack_port_get_latency$26=jack_port_get_latency(BuildDeviceList$$1$$6$$1$$4$$p);
      curDevInfo->defaultHighOutputLatency = (double)return_value_jack_port_get_latency$26 / globalSampleRate;
      curDevInfo->defaultLowOutputLatency = curDevInfo->defaultHighOutputLatency;
      i$link1 = 0;
      for( ; !(clientPorts[(signed long int)i$link1] == ((const char *)NULL)); i$link1 = i$link1 + 1)
        curDevInfo->maxOutputChannels = curDevInfo->maxOutputChannels + 1;
      free((void *)clientPorts);
    }

    commonApi->deviceInfos[(signed long int)client_index] = curDevInfo;
    commonApi->info.deviceCount = commonApi->info.deviceCount + 1;
    if(commonApi->info.defaultInputDevice == -1)
    {
      if(curDevInfo->maxInputChannels >= 1)
        commonApi->info.defaultInputDevice = client_index;

    }

    if(commonApi->info.defaultOutputDevice == -1)
    {
      if(curDevInfo->maxOutputChannels >= 1)
        commonApi->info.defaultOutputDevice = client_index;

    }

  }

error:
  ;
  regfree(&port_regex);
  free((void *)jack_ports);
  return result$link1;
}

// BuildDeviceList$link2
// file src/hostapi/oss/pa_unix_oss.c line 521
static signed int BuildDeviceList$link2(struct anonymous$1 *ossApi)
{
  signed int result$link2 = 0;
  struct PaUtilHostApiRepresentation *commonApi$link1 = &ossApi->inheritedHostApiRep;
  signed int i$link2;
  signed int numDevices = 0;
  signed int maxDeviceInfos = 1;
  struct PaDeviceInfo **deviceInfos = (struct PaDeviceInfo **)(void *)0;
  commonApi$link1->info.defaultInputDevice = (signed int)-1;
  commonApi$link1->info.defaultOutputDevice = (signed int)-1;
  i$link2 = 0;
  for( ; !(i$link2 >= 100); i$link2 = i$link2 + 1)
  {
    char deviceName[32l];
    struct PaDeviceInfo *deviceInfo;
    signed int testResult;
    if(i$link2 == 0)
      snprintf(deviceName, sizeof(char [32l]) /*32ul*/ , "%s", (const void *)"/dev/dsp");

    else
      snprintf(deviceName, sizeof(char [32l]) /*32ul*/ , "%s%d", (const void *)"/dev/dsp", i$link2);
    testResult=QueryDevice(deviceName, ossApi, &deviceInfo);
    if(!(testResult == 0))
    {
      if(!(testResult == -9985))
        do
        {
          paUtilErr_$link1 = testResult;
          if(!(paUtilErr_$link1 >= 0))
          {
            PaUtil_DebugPrint("Expression 'testResult' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 553\n");
            result$link2 = paUtilErr_$link1;
            goto error;
          }

        }
        while((_Bool)0);

    }

    else
    {
      numDevices = numDevices + 1;
      if(deviceInfos == ((struct PaDeviceInfo **)NULL) || !(maxDeviceInfos >= numDevices))
      {
        maxDeviceInfos = maxDeviceInfos * 2;
        do
        {
          void *return_value_realloc$1;
          return_value_realloc$1=realloc((void *)deviceInfos, (unsigned long int)maxDeviceInfos * sizeof(struct PaDeviceInfo *) /*8ul*/ );
          deviceInfos = (struct PaDeviceInfo **)return_value_realloc$1;
          if(deviceInfos == ((struct PaDeviceInfo **)NULL))
          {
            PaUtil_DebugPrint("Expression 'deviceInfos = (PaDeviceInfo **) realloc( deviceInfos, maxDeviceInfos * sizeof (PaDeviceInfo *) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 563\n");
            result$link2 = -9992;
            goto error;
          }

        }
        while((_Bool)0);
      }

      signed int devIdx = numDevices - 1;
      deviceInfos[(signed long int)devIdx] = deviceInfo;
      if(commonApi$link1->info.defaultInputDevice == -1)
      {
        if(deviceInfo->maxInputChannels >= 1)
          commonApi$link1->info.defaultInputDevice = devIdx;

      }

      if(commonApi$link1->info.defaultOutputDevice == -1)
      {
        if(deviceInfo->maxOutputChannels >= 1)
          commonApi$link1->info.defaultOutputDevice = devIdx;

      }

    }
  }
  void *return_value_PaUtil_GroupAllocateMemory$2$link1;
  return_value_PaUtil_GroupAllocateMemory$2$link1=PaUtil_GroupAllocateMemory(ossApi->allocations, (signed long int)(sizeof(struct PaDeviceInfo *) /*8ul*/  * (unsigned long int)numDevices));
  commonApi$link1->deviceInfos = (struct PaDeviceInfo **)return_value_PaUtil_GroupAllocateMemory$2$link1;
  memcpy((void *)commonApi$link1->deviceInfos, (const void *)deviceInfos, (unsigned long int)numDevices * sizeof(struct PaDeviceInfo *) /*8ul*/ );
  commonApi$link1->info.deviceCount = numDevices;

error:
  ;
  free((void *)deviceInfos);
  return result$link2;
}

// CalcHigherLogTwo
// file src/hostapi/oss/pa_unix_oss.c line 321
static signed int CalcHigherLogTwo(signed int n)
{
  signed int log2 = 0;
  for( ; !(1 << log2 >= n); log2 = log2 + 1)
    ;
  return log2;
}

// CalculateFrameShift
// file src/common/pa_process.c line 73
static unsigned long int CalculateFrameShift(unsigned long int M, unsigned long int N)
{
  unsigned long int result = (unsigned long int)0;
  unsigned long int i;
  unsigned long int lcm;
  /* assertion M > 0 */
  assert(M > (unsigned long int)0);
  /* assertion N > 0 */
  assert(N > (unsigned long int)0);
  lcm=LCM(M, N);
  i = M;
  for( ; !(i >= lcm); i = i + M)
    result = result > i % N ? result : i % N;
  return result;
}

// CalculatePollTimeout
// file src/hostapi/alsa/pa_linux_alsa.c line 2218
static signed int CalculatePollTimeout(const struct PaAlsaStream *stream, unsigned long int frames)
{
  /* assertion stream->streamRepresentation.streamInfo.sampleRate > 0.0 */
  assert(stream->streamRepresentation.streamInfo.sampleRate > 0.0);
  double return_value_ceil$1;
  return_value_ceil$1=ceil((double)((unsigned long int)1000 * frames) / stream->streamRepresentation.streamInfo.sampleRate);
  return (signed int)return_value_ceil$1;
}

// CalculateTimeInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 3405
static void CalculateTimeInfo(struct PaAlsaStream *stream, struct PaStreamCallbackTimeInfo *timeInfo)
{
  struct _snd_pcm_status *capture_status;
  struct _snd_pcm_status *playback_status;
  struct timeval capture_timestamp;
  struct timeval playback_timestamp;
  double capture_time = 0.;
  double playback_time = 0.;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_status_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&capture_status) = (struct _snd_pcm_status *)return_value___builtin_alloca$1;
  memset((void *)*(&capture_status), 0, __alsa_alloca_size);
  unsigned long int CalculateTimeInfo$$1$$2$$__alsa_alloca_size;
  CalculateTimeInfo$$1$$2$$__alsa_alloca_size=alsa_snd_pcm_status_sizeof();
  void *return_value___builtin_alloca$2;
  return_value___builtin_alloca$2=__builtin_alloca(CalculateTimeInfo$$1$$2$$__alsa_alloca_size);
  *(&playback_status) = (struct _snd_pcm_status *)return_value___builtin_alloca$2;
  memset((void *)*(&playback_status), 0, CalculateTimeInfo$$1$$2$$__alsa_alloca_size);
  if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
  {
    signed long int capture_delay;
    alsa_snd_pcm_status(stream->capture.pcm, capture_status);
    alsa_snd_pcm_status_get_tstamp(capture_status, &capture_timestamp);
    capture_time = (double)capture_timestamp.tv_sec + (double)capture_timestamp.tv_usec / 1000000.0;
    timeInfo->currentTime = capture_time;
    capture_delay=alsa_snd_pcm_status_get_delay(capture_status);
    timeInfo->inputBufferAdcTime = timeInfo->currentTime - (double)capture_delay / stream->streamRepresentation.streamInfo.sampleRate;
  }

  if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
  {
    signed long int playback_delay;
    alsa_snd_pcm_status(stream->playback.pcm, playback_status);
    alsa_snd_pcm_status_get_tstamp(playback_status, &playback_timestamp);
    playback_time = (double)playback_timestamp.tv_sec + (double)playback_timestamp.tv_usec / 1000000.0;
    if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      double return_value_fabs$3;
      return_value_fabs$3=fabs(capture_time - playback_time);
    }

    else
      timeInfo->currentTime = playback_time;
    playback_delay=alsa_snd_pcm_status_get_delay(playback_status);
    timeInfo->outputBufferDacTime = timeInfo->currentTime + (double)playback_delay / stream->streamRepresentation.streamInfo.sampleRate;
  }

}

// CallbackThreadFunc
// file src/hostapi/alsa/pa_linux_alsa.c line 4172
static void * CallbackThreadFunc(void *userData)
{
  signed int result = 0;
  struct PaAlsaStream *stream = (struct PaAlsaStream *)userData;
  struct PaStreamCallbackTimeInfo timeInfo = { .inputBufferAdcTime=(double)0, .currentTime=(double)0, .outputBufferDacTime=(double)0 };
  signed long int startThreshold = (signed long int)0;
  signed int callbackResult = 0;
  unsigned long int cbFlags = (unsigned long int)0;
  signed int streamStarted = 0;
  /* assertion stream */
  assert(stream != ((struct PaAlsaStream *)NULL));
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  _Bool tmp_if_expr$7;
  signed int return_value_PaUtil_IsBufferProcessorOutputEmpty$6;
  unsigned long int tmp_if_expr$8;
  unsigned long int tmp_if_expr$9;
  do
  {
    struct anonymous$18 __cancel_buf;
    void (*__cancel_routine)(void *) = OnExit;
    void *__cancel_arg = (void *)stream;
    signed int __not_first_call;
    __not_first_call=__sigsetjmp((struct __jmp_buf_tag *)(void *)__cancel_buf.__cancel_jmp_buf, 0);
    if(!((signed long int)__not_first_call == 0l))
    {
      __cancel_routine(__cancel_arg);
      __pthread_unwind_next(&__cancel_buf);
    }

    __pthread_register_cancel(&__cancel_buf);
    do
    {
      /* assertion !stream->primeBuffers */
      assert(!(stream->primeBuffers != 0));
      if(!(stream->primeBuffers == 0))
      {
        signed long int avail;
        if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
        {
          signed int __pa_unsure_error_id;
          __pa_unsure_error_id=alsa_snd_pcm_prepare(stream->playback.pcm);
          if(!(__pa_unsure_error_id >= 0))
          {
            return_value_pthread_self$1=pthread_self();
            return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
            if(!(return_value_pthread_equal$2 == 0))
            {
              const char *return_value;
              return_value=alsa_snd_strerror(__pa_unsure_error_id);
              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
            }

            PaUtil_DebugPrint("Expression 'alsa_snd_pcm_prepare( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4198\n");
            result = -9999;
          }

        }

        if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
        {
          if(stream->pcmsSynced == 0)
          {
            signed int CallbackThreadFunc$$1$$1$$2$$1$$2$$__pa_unsure_error_id;
            CallbackThreadFunc$$1$$1$$2$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_prepare(stream->capture.pcm);
            if(!(CallbackThreadFunc$$1$$1$$2$$1$$2$$__pa_unsure_error_id >= 0))
            {
              return_value_pthread_self$3=pthread_self();
              return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
              if(!(return_value_pthread_equal$4 == 0))
              {
                const char *return_value_1;
                return_value_1=alsa_snd_strerror(CallbackThreadFunc$$1$$1$$2$$1$$2$$__pa_unsure_error_id);
                PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)CallbackThreadFunc$$1$$1$$2$$1$$2$$__pa_unsure_error_id, return_value_1);
              }

              PaUtil_DebugPrint("Expression 'alsa_snd_pcm_prepare( stream->capture.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4200\n");
              result = -9999;
            }

          }

        }

        avail=alsa_snd_pcm_avail_update(stream->playback.pcm);
        startThreshold = (signed long int)((unsigned long int)avail - (unsigned long int)avail % stream->playback.framesPerPeriod);
        /* assertion startThreshold >= stream->playback.framesPerPeriod */
        assert((unsigned long int)startThreshold >= stream->playback.framesPerPeriod);
      }

      else
      {
        do
        {
          paUtilErr_=PaUnixThread_PrepareNotify(&stream->thread);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaUnixThread_PrepareNotify( &stream->thread )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4210\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
        do
        {
          paUtilErr_=AlsaStart(stream, 0);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'AlsaStart( stream, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4212\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
        do
        {
          paUtilErr_=PaUnixThread_NotifyParent(&stream->thread);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaUnixThread_NotifyParent( &stream->thread )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4213\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
        streamStarted = 1;
      }
      while((_Bool)1)
      {
        unsigned long int framesAvail;
        unsigned long int framesGot;
        signed int xrun = 0;
        pthread_testcancel();
        signed int return_value_PaUnixThread_StopRequested$5;
        return_value_PaUnixThread_StopRequested$5=PaUnixThread_StopRequested(&stream->thread);
        if(!(return_value_PaUnixThread_StopRequested$5 == 0))
        {
          if(callbackResult == 0)
            callbackResult = 1;

        }

        if(!(callbackResult == 0))
        {
          stream->callbackAbort = (volatile signed int)(2 == callbackResult);
          if(!(stream->callbackAbort == 0))
            tmp_if_expr$7 = (_Bool)1;

          else
          {
            return_value_PaUtil_IsBufferProcessorOutputEmpty$6=PaUtil_IsBufferProcessorOutputEmpty(&stream->bufferProcessor);
            tmp_if_expr$7 = return_value_PaUtil_IsBufferProcessorOutputEmpty$6 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$7)
            break;

        }

        do
        {
          paUtilErr_=PaAlsaStream_WaitForFrames(stream, &framesAvail, &xrun);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaAlsaStream_WaitForFrames( stream, &framesAvail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4253\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
        if(!(xrun == 0))
          /* assertion 0 == framesAvail */
          assert((unsigned long int)0 == framesAvail);

        else
          while(framesAvail >= 1ul)
          {
            xrun = 0;
            pthread_testcancel();
            if(stream->underrun > 0.0)
            {
              cbFlags = cbFlags | (unsigned long int)0x00000004;
              stream->underrun = 0.0;
            }

            if(stream->overrun > 0.0)
            {
              cbFlags = cbFlags | (unsigned long int)0x00000002;
              stream->overrun = 0.0;
            }

            if(!(stream->capture.pcm == ((struct _snd_pcm *)NULL)))
            {
              if(!(stream->playback.pcm == ((struct _snd_pcm *)NULL)))
              {
                if(stream->capture.ready == 0)
                  cbFlags = cbFlags | (unsigned long int)0x00000001;

                else
                  if(stream->playback.ready == 0)
                    cbFlags = cbFlags | (unsigned long int)0x00000008;

              }

            }

            CalculateTimeInfo(stream, &timeInfo);
            PaUtil_BeginBufferProcessing(&stream->bufferProcessor, &timeInfo, cbFlags);
            cbFlags = (unsigned long int)0;
            PaUtil_BeginCpuLoadMeasurement(&stream->cpuLoadMeasurer);
            framesGot = framesAvail;
            if((signed int)stream->bufferProcessor.hostBufferSizeMode == paUtilFixedHostBufferSize)
            {
              if(framesGot >= stream->maxFramesPerHostBuffer)
                tmp_if_expr$8 = stream->maxFramesPerHostBuffer;

              else
                tmp_if_expr$8 = (unsigned long int)0;
              framesGot = tmp_if_expr$8;
            }

            else
            {
              /* assertion paUtilBoundedHostBufferSize == stream->bufferProcessor.hostBufferSizeMode */
              assert(paUtilBoundedHostBufferSize == (signed int)stream->bufferProcessor.hostBufferSizeMode);
              if(!(framesGot >= stream->maxFramesPerHostBuffer))
                tmp_if_expr$9 = framesGot;

              else
                tmp_if_expr$9 = stream->maxFramesPerHostBuffer;
              framesGot = tmp_if_expr$9;
            }
            do
            {
              paUtilErr_=PaAlsaStream_SetUpBuffers(stream, &framesGot, &xrun);
              if(!(paUtilErr_ >= 0))
              {
                PaUtil_DebugPrint("Expression 'PaAlsaStream_SetUpBuffers( stream, &framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4326\n");
                result = paUtilErr_;
                goto error;
              }

            }
            while((_Bool)0);
            framesAvail = framesAvail - framesGot;
            if(framesGot >= 1ul)
            {
              /* assertion !xrun */
              assert(!(xrun != 0));
              PaUtil_EndBufferProcessing(&stream->bufferProcessor, &callbackResult);
              do
              {
                paUtilErr_=PaAlsaStream_EndProcessing(stream, framesGot, &xrun);
                if(!(paUtilErr_ >= 0))
                {
                  PaUtil_DebugPrint("Expression 'PaAlsaStream_EndProcessing( stream, framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4334\n");
                  result = paUtilErr_;
                  goto error;
                }

              }
              while((_Bool)0);
            }

            PaUtil_EndCpuLoadMeasurement(&stream->cpuLoadMeasurer, framesGot);
            if(framesGot == 0ul)
              break;

            if(!(callbackResult == 0))
              break;

          }
      }

    end:
      ;

    __CPROVER_DUMP_L42:
      ;
    }
    while((_Bool)0);
    __pthread_unregister_cancel(&__cancel_buf);
    __cancel_routine(__cancel_arg);
  }
  while((_Bool)0);
  do
  {
    signed int *pres = (signed int *)(void *)0;
    if(!(result == 0))
    {
      void *return_value_malloc$10;
      return_value_malloc$10=malloc(sizeof(signed int) /*4ul*/ );
      pres = (signed int *)return_value_malloc$10;
      *pres = result;
    }

    pthread_exit((void *)pres);
  }
  while((_Bool)0);

error:
  ;
  goto end;
}

// CleanUpStream
// file src/hostapi/jack/pa_jack.c line 972
static void CleanUpStream(struct PaJackStream *stream, signed int terminateStreamRepresentation, signed int terminateBufferProcessor)
{
  signed int i;
  /* assertion stream */
  assert(stream != ((struct PaJackStream *)NULL));
  if(!(stream->isBlockingStream == 0))
    BlockingEnd(stream);

  i = 0;
  for( ; !(i >= stream->num_incoming_connections); i = i + 1)
    if(!(stream->local_input_ports[(signed long int)i] == ((struct _jack_port *)NULL)))
      do
      {
        signed int err;
        err=jack_port_unregister(stream->jack_client, stream->local_input_ports[(signed long int)i]);
        /* assertion err == 0 */
        assert(err == 0);
      }
      while((_Bool)0);

  i = 0;
  for( ; !(i >= stream->num_outgoing_connections); i = i + 1)
    if(!(stream->local_output_ports[(signed long int)i] == ((struct _jack_port *)NULL)))
      do
      {
        signed int CleanUpStream$$1$$2$$1$$1$$err;
        CleanUpStream$$1$$2$$1$$1$$err=jack_port_unregister(stream->jack_client, stream->local_output_ports[(signed long int)i]);
        /* assertion err == 0 */
        assert(CleanUpStream$$1$$2$$1$$1$$err == 0);
      }
      while((_Bool)0);

  if(!(terminateStreamRepresentation == 0))
    PaUtil_TerminateStreamRepresentation(&stream->streamRepresentation);

  if(!(terminateBufferProcessor == 0))
    PaUtil_TerminateBufferProcessor(&stream->bufferProcessor);

  if(!(stream->stream_memory == ((struct anonymous$14 *)NULL)))
  {
    PaUtil_FreeAllAllocations(stream->stream_memory);
    PaUtil_DestroyAllocationGroup(stream->stream_memory);
  }

  PaUtil_FreeMemory((void *)stream);
}

// CloseOpenStreams
// file src/common/pa_front.c line 306
static void CloseOpenStreams(void)
{
  while(!(firstOpenStream_ == ((struct PaUtilStreamRepresentation *)NULL)))
    Pa_CloseStream((void *)firstOpenStream_);
}

// CloseStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 639
static signed int CloseStream(void *s)
{
  signed int result = 0;
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  PaUtil_TerminateBufferProcessor(&stream->bufferProcessor);
  PaUtil_TerminateStreamRepresentation(&stream->streamRepresentation);
  PaUtil_FreeMemory((void *)stream);
  return result;
}

// CloseStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2877
static signed int CloseStream$link1(void *s$link1)
{
  signed int result$link1 = 0;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  PaUtil_TerminateBufferProcessor(&stream$link1->bufferProcessor);
  PaUtil_TerminateStreamRepresentation(&stream$link1->streamRepresentation);
  PaAlsaStream_Terminate(stream$link1);
  return result$link1;
}

// CloseStream$link2
// file src/hostapi/jack/pa_jack.c line 1330
static signed int CloseStream$link2(void *s$link2)
{
  signed int result$link2 = 0;
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int paErr;
    paErr=RemoveStream(stream$link2);
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *err = jackErr_;
          if(err == ((const char *)NULL))
            err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
        }

      }

      PaUtil_DebugPrint("Expression 'RemoveStream( stream )' failed in 'src/hostapi/jack/pa_jack.c', line: 1336\n");
      result$link2 = paErr;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  CleanUpStream(stream$link2, 1, 1);
  return result$link2;
}

// CloseStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1779
static signed int CloseStream$link3(void *s$link3)
{
  signed int result$link3 = 0;
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  /* assertion stream */
  assert(stream$link3 != ((struct PaOssStream *)NULL));
  PaUtil_TerminateBufferProcessor(&stream$link3->bufferProcessor);
  PaOssStream_Terminate(stream$link3);
  return result$link3;
}

// ContinuePoll
// file src/hostapi/alsa/pa_linux_alsa.c line 3325
static signed int ContinuePoll(const struct PaAlsaStream *stream, enum anonymous$5 streamDir, signed int *pollTimeout, signed int *continuePoll)
{
  signed int result = 0;
  signed long int delay;
  signed long int margin;
  signed int err;
  const struct anonymous$16 *component = (const struct anonymous$16 *)(void *)0;
  const struct anonymous$16 *otherComponent = (const struct anonymous$16 *)(void *)0;
  *continuePoll = 1;
  if((signed int)streamDir == StreamDirection_In)
  {
    component = &stream->capture;
    otherComponent = &stream->playback;
  }

  else
  {
    component = &stream->playback;
    otherComponent = &stream->capture;
  }
  err=alsa_snd_pcm_delay(otherComponent->pcm, &delay);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(err >= 0))
  {
    if(err == -32)
      *continuePoll = 0;

    signed int __pa_unsure_error_id = err;
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$1=pthread_self();
      return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
      if(!(return_value_pthread_equal$2 == 0))
      {
        const char *return_value;
        return_value=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
      }

      PaUtil_DebugPrint("Expression 'err' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3355\n");
      result = -9999;
    }

  }

  if((signed int)streamDir == StreamDirection_Out)
    delay = (signed long int)(otherComponent->alsaBufferSize - (unsigned long int)delay);

  margin = (signed long int)((unsigned long int)delay - otherComponent->framesPerPeriod / (unsigned long int)2);
  if(!(margin >= 0l))
    *continuePoll = 0;

  else
    if(!((unsigned long int)margin >= otherComponent->framesPerPeriod))
      *pollTimeout=CalculatePollTimeout(stream, (unsigned long int)margin);


error:
  ;
  return result;
}

// CopyTempOutputBuffersToHostOutputBuffers
// file src/common/pa_process.c line 1206
static void CopyTempOutputBuffersToHostOutputBuffers(struct anonymous$13 *bp)
{
  unsigned long int maxFramesToCopy;
  struct PaUtilChannelDescriptor *hostOutputChannels;
  unsigned int frameCount;
  unsigned char *srcBytePtr;
  unsigned int srcSampleStrideSamples;
  unsigned int srcChannelStrideBytes;
  unsigned int i;
  unsigned long int tmp_if_expr$1;
  unsigned long int tmp_if_expr$2;
  for( ; bp->framesInTempOutputBuffer >= 1ul; bp->framesInTempOutputBuffer = bp->framesInTempOutputBuffer - (unsigned long int)frameCount)
  {
    if(!(bp->hostOutputFrameCount[0l] + bp->hostOutputFrameCount[1l] >= 1ul))
      break;

    maxFramesToCopy = bp->framesInTempOutputBuffer;
    if(bp->hostOutputFrameCount[0l] >= 1ul)
    {
      hostOutputChannels = bp->hostOutputChannels[(signed long int)0];
      if(!(bp->hostOutputFrameCount[0l] >= maxFramesToCopy))
        tmp_if_expr$1 = bp->hostOutputFrameCount[(signed long int)0];

      else
        tmp_if_expr$1 = maxFramesToCopy;
      frameCount = (unsigned int)tmp_if_expr$1;
    }

    else
    {
      hostOutputChannels = bp->hostOutputChannels[(signed long int)1];
      if(!(bp->hostOutputFrameCount[1l] >= maxFramesToCopy))
        tmp_if_expr$2 = bp->hostOutputFrameCount[(signed long int)1];

      else
        tmp_if_expr$2 = maxFramesToCopy;
      frameCount = (unsigned int)tmp_if_expr$2;
    }
    if(!(bp->userOutputIsInterleaved == 0))
    {
      srcBytePtr = (unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)(bp->bytesPerUserOutputSample * bp->outputChannelCount) * (bp->framesPerUserBuffer - bp->framesInTempOutputBuffer));
      srcSampleStrideSamples = bp->outputChannelCount;
      srcChannelStrideBytes = bp->bytesPerUserOutputSample;
    }

    else
    {
      srcBytePtr = (unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)bp->bytesPerUserOutputSample * (bp->framesPerUserBuffer - bp->framesInTempOutputBuffer));
      srcSampleStrideSamples = (unsigned int)1;
      srcChannelStrideBytes = (unsigned int)(bp->framesPerUserBuffer * (unsigned long int)bp->bytesPerUserOutputSample);
    }
    i = (unsigned int)0;
    if(!(i >= bp->outputChannelCount))
    {
      /* assertion hostOutputChannels[i].data != ((void *)0) */
      assert((hostOutputChannels + (signed long int)i)->data != (void *)0);
      bp->outputConverter((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (void *)srcBytePtr, (signed int)srcSampleStrideSamples, frameCount, &bp->ditherGenerator);
      srcBytePtr = srcBytePtr + (signed long int)srcChannelStrideBytes;
      (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (hostOutputChannels + (signed long int)i)->stride * bp->bytesPerHostOutputSample));
      i = i + 1u;
    }

    if(bp->hostOutputFrameCount[0l] >= 1ul)
      bp->hostOutputFrameCount[(signed long int)0] = bp->hostOutputFrameCount[(signed long int)0] - (unsigned long int)frameCount;

    else
      bp->hostOutputFrameCount[(signed long int)1] = bp->hostOutputFrameCount[(signed long int)1] - (unsigned long int)frameCount;
  }
}

// Copy_16_To_16
// file src/common/pa_converters.c line 1715
static void Copy_16_To_16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned short int *src = (unsigned short int *)sourceBuffer;
  unsigned short int *dest = (unsigned short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = *src;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Copy_24_To_24
// file src/common/pa_converters.c line 1736
static void Copy_24_To_24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dest[(signed long int)0] = src[(signed long int)0];
    dest[(signed long int)1] = src[(signed long int)1];
    dest[(signed long int)2] = src[(signed long int)2];
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Copy_32_To_32
// file src/common/pa_converters.c line 1759
static void Copy_32_To_32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned int *dest = (unsigned int *)destinationBuffer;
  unsigned int *src = (unsigned int *)sourceBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = *src;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Copy_8_To_8
// file src/common/pa_converters.c line 1694
static void Copy_8_To_8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = *src;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// CountHostApiInitializers
// file src/common/pa_front.c line 129
static signed int CountHostApiInitializers(void)
{
  signed int result = 0;
  for( ; !(paHostApiInitializers[(signed long int)result] == ((signed int (*)(struct PaUtilHostApiRepresentation **, signed int))NULL)); result = result + 1)
    ;
  return result;
}

// ExampleHostProcessingLoop
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 550
static void ExampleHostProcessingLoop(void *inputBuffer, void *outputBuffer, void *userData)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)userData;
  struct PaStreamCallbackTimeInfo timeInfo = { .inputBufferAdcTime=(double)0, .currentTime=(double)0, .outputBufferDacTime=(double)0 };
  signed int callbackResult;
  unsigned long int framesProcessed;
  PaUtil_BeginCpuLoadMeasurement(&stream->cpuLoadMeasurer);
  PaUtil_BeginBufferProcessing(&stream->bufferProcessor, &timeInfo, (unsigned long int)0);
  PaUtil_SetInputFrameCount(&stream->bufferProcessor, (unsigned long int)0);
  PaUtil_SetInterleavedInputChannels(&stream->bufferProcessor, (unsigned int)0, inputBuffer, (unsigned int)0);
  PaUtil_SetOutputFrameCount(&stream->bufferProcessor, (unsigned long int)0);
  PaUtil_SetInterleavedOutputChannels(&stream->bufferProcessor, (unsigned int)0, outputBuffer, (unsigned int)0);
  callbackResult = 0;
  framesProcessed=PaUtil_EndBufferProcessing(&stream->bufferProcessor, &callbackResult);
  PaUtil_EndCpuLoadMeasurement(&stream->cpuLoadMeasurer, framesProcessed);
  if(!(callbackResult == 0))
  {
    if(callbackResult == 2)
    {
      if(!(stream->streamRepresentation.streamFinishedCallback == ((void (*)(void *))NULL)))
        stream->streamRepresentation.streamFinishedCallback(stream->streamRepresentation.userData);

    }

    else
      if(!(stream->streamRepresentation.streamFinishedCallback == ((void (*)(void *))NULL)))
        stream->streamRepresentation.streamFinishedCallback(stream->streamRepresentation.userData);

  }

}

// ExtractAddress
// file src/hostapi/alsa/pa_linux_alsa.c line 3511
static unsigned char * ExtractAddress(const struct _snd_pcm_channel_area *area, unsigned long int offset)
{
  return (unsigned char *)area->addr + (signed long int)(((unsigned long int)area->first + offset * (unsigned long int)area->step) / (unsigned long int)8);
}

// FillInDevInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 1150
static signed int FillInDevInfo(struct PaAlsaHostApiRepresentation *alsaApi, struct anonymous$19 *deviceHwInfo, signed int blocking, struct PaAlsaDeviceInfo *devInfo, signed int *devIdx)
{
  signed int result = 0;
  struct PaDeviceInfo *baseDeviceInfo = &devInfo->baseDeviceInfo;
  struct _snd_pcm *pcm = (struct _snd_pcm *)(void *)0;
  struct PaUtilHostApiRepresentation *baseApi = &alsaApi->baseHostApiRep;
  InitializeDeviceInfo(baseDeviceInfo);
  signed int return_value_OpenPcm$2;
  if(!(deviceHwInfo->hasCapture == 0))
  {
    return_value_OpenPcm$2=OpenPcm(&pcm, deviceHwInfo->alsaName, (enum _snd_pcm_stream)SND_PCM_STREAM_CAPTURE, blocking, 0);
    if(return_value_OpenPcm$2 >= 0)
    {
      signed int return_value_GropeDevice$1;
      return_value_GropeDevice$1=GropeDevice(pcm, deviceHwInfo->isPlug, (enum anonymous$5)StreamDirection_In, blocking, devInfo);
      if(!(return_value_GropeDevice$1 == 0))
        goto end;

    }

  }

  signed int return_value_OpenPcm$4;
  if(!(deviceHwInfo->hasPlayback == 0))
  {
    return_value_OpenPcm$4=OpenPcm(&pcm, deviceHwInfo->alsaName, (enum _snd_pcm_stream)SND_PCM_STREAM_PLAYBACK, blocking, 0);
    if(return_value_OpenPcm$4 >= 0)
    {
      signed int return_value_GropeDevice$3;
      return_value_GropeDevice$3=GropeDevice(pcm, deviceHwInfo->isPlug, (enum anonymous$5)StreamDirection_Out, blocking, devInfo);
      if(!(return_value_GropeDevice$3 == 0))
        goto end;

    }

  }

  baseDeviceInfo->structVersion = 2;
  baseDeviceInfo->hostApi = alsaApi->hostApiIndex;
  baseDeviceInfo->name = deviceHwInfo->name;
  devInfo->alsaName = deviceHwInfo->alsaName;
  devInfo->isPlug = deviceHwInfo->isPlug;
  _Bool tmp_if_expr$9;
  if(baseDeviceInfo->maxInputChannels >= 1)
    tmp_if_expr$9 = (_Bool)1;

  else
    tmp_if_expr$9 = baseDeviceInfo->maxOutputChannels > 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$6;
  signed int return_value_strcmp$5;
  _Bool tmp_if_expr$8;
  signed int return_value_strcmp$7;
  if(tmp_if_expr$9)
  {
    if(baseApi->info.defaultInputDevice == -1)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      return_value_strcmp$5=strcmp(deviceHwInfo->alsaName, "default");
      tmp_if_expr$6 = !(return_value_strcmp$5 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
    {
      if(baseDeviceInfo->maxInputChannels >= 1)
        baseApi->info.defaultInputDevice = *devIdx;

    }

    if(baseApi->info.defaultOutputDevice == -1)
      tmp_if_expr$8 = (_Bool)1;

    else
    {
      return_value_strcmp$7=strcmp(deviceHwInfo->alsaName, "default");
      tmp_if_expr$8 = !(return_value_strcmp$7 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$8)
    {
      if(baseDeviceInfo->maxOutputChannels >= 1)
        baseApi->info.defaultOutputDevice = *devIdx;

    }

    baseApi->deviceInfos[(signed long int)*devIdx] = (struct PaDeviceInfo *)devInfo;
    *devIdx = *devIdx + 1;
  }


end:
  ;
  return result;
}

// FindDeviceName
// file src/hostapi/alsa/pa_linux_alsa.c line 1031
static const struct anonymous$19 * FindDeviceName(const char *name)
{
  signed int i = 0;
  for( ; !(predefinedNames[(signed long int)i].alsaName == ((char *)NULL)); i = i + 1)
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(name, predefinedNames[(signed long int)i].alsaName);
    if(return_value_strcmp$1 == 0)
      return &predefinedNames[(signed long int)i];

  }
  return (const struct anonymous$19 *)(void *)0;
}

// FindHostApi
// file src/common/pa_front.c line 243
static signed int FindHostApi(signed int device, signed int *hostSpecificDeviceIndex)
{
  signed int i = 0;
  if(initializationCount_ == 0)
    return -1;

  else
    if(!(device >= 0))
      return -1;

    else
    {
      for( ; !(i >= hostApisCount_); i = i + 1)
      {
        if(!(device >= hostApis_[(signed long int)i]->info.deviceCount))
          break;

        device = device - hostApis_[(signed long int)i]->info.deviceCount;
      }
      if(i >= hostApisCount_)
        return -1;

      else
      {
        if(!(hostSpecificDeviceIndex == ((signed int *)NULL)))
          *hostSpecificDeviceIndex = device;

        return i;
      }
    }
}

// Float32_To_Int16
// file src/common/pa_converters.c line 593
static void Float32_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    signed short int samp = (signed short int)(*src * 32767.0f);
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int16_Clip
// file src/common/pa_converters.c line 647
static void Float32_To_Int16_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    signed long int samp = (signed long int)(signed int)(*src * 32767.0f);
    samp = samp < (signed long int)-0x8000 ? (signed long int)-0x8000 : (samp > (signed long int)0x7FFF ? (signed long int)0x7FFF : samp);
    *dest = (signed short int)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int16_Dither
// file src/common/pa_converters.c line 619
static void Float32_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 32766.0f + dither;
    *dest = (signed short int)dithered;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int16_DitherClip
// file src/common/pa_converters.c line 673
static void Float32_To_Int16_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 32766.0f + dither;
    signed int samp = (signed int)dithered;
    samp = samp < -0x8000 ? -0x8000 : (samp > 0x7FFF ? 0x7FFF : samp);
    *dest = (signed short int)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int24
// file src/common/pa_converters.c line 451
static void Float32_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  signed int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double scaled = (double)*src * 2147483647.0;
    temp = (signed int)scaled;
    dest[(signed long int)0] = (unsigned char)(temp >> 8);
    dest[(signed long int)1] = (unsigned char)(temp >> 16);
    dest[(signed long int)2] = (unsigned char)(temp >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Float32_To_Int24_Clip
// file src/common/pa_converters.c line 521
static void Float32_To_Int24_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  signed int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double scaled = (double)(*src * (float)0x7FFFFFFF);
    scaled = scaled < -2147483648. ? -2147483648. : (scaled > 2147483647. ? 2147483647. : scaled);
    temp = (signed int)scaled;
    dest[(signed long int)0] = (unsigned char)(temp >> 8);
    dest[(signed long int)1] = (unsigned char)(temp >> 16);
    dest[(signed long int)2] = (unsigned char)(temp >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Float32_To_Int24_Dither
// file src/common/pa_converters.c line 485
static void Float32_To_Int24_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  signed int temp;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double dither;
    float return_value_PaUtil_GenerateFloatTriangularDither$2;
    return_value_PaUtil_GenerateFloatTriangularDither$2=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    dither = (double)return_value_PaUtil_GenerateFloatTriangularDither$2;
    double dithered = (double)*src * 2147483646.0 + dither;
    temp = (signed int)dithered;
    dest[(signed long int)0] = (unsigned char)(temp >> 8);
    dest[(signed long int)1] = (unsigned char)(temp >> 16);
    dest[(signed long int)2] = (unsigned char)(temp >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Float32_To_Int24_DitherClip
// file src/common/pa_converters.c line 556
static void Float32_To_Int24_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  signed int temp;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double dither;
    float return_value_PaUtil_GenerateFloatTriangularDither$2;
    return_value_PaUtil_GenerateFloatTriangularDither$2=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    dither = (double)return_value_PaUtil_GenerateFloatTriangularDither$2;
    double dithered = (double)*src * 2147483646.0 + dither;
    dithered = dithered < -2147483648. ? -2147483648. : (dithered > 2147483647. ? 2147483647. : dithered);
    temp = (signed int)dithered;
    dest[(signed long int)0] = (unsigned char)(temp >> 8);
    dest[(signed long int)1] = (unsigned char)(temp >> 16);
    dest[(signed long int)2] = (unsigned char)(temp >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Float32_To_Int32
// file src/common/pa_converters.c line 334
static void Float32_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double scaled = (double)(*src * (float)0x7FFFFFFF);
    *dest = (signed int)scaled;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int32_Clip
// file src/common/pa_converters.c line 390
static void Float32_To_Int32_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double scaled = (double)(*src * (float)0x7FFFFFFF);
    scaled = scaled < -2147483648. ? -2147483648. : (scaled > 2147483647. ? 2147483647. : scaled);
    *dest = (signed int)scaled;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int32_Dither
// file src/common/pa_converters.c line 361
static void Float32_To_Int32_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double dither;
    float return_value_PaUtil_GenerateFloatTriangularDither$2;
    return_value_PaUtil_GenerateFloatTriangularDither$2=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    dither = (double)return_value_PaUtil_GenerateFloatTriangularDither$2;
    double dithered = (double)*src * 2147483646.0 + dither;
    *dest = (signed int)dithered;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int32_DitherClip
// file src/common/pa_converters.c line 419
static void Float32_To_Int32_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    double dither;
    float return_value_PaUtil_GenerateFloatTriangularDither$2;
    return_value_PaUtil_GenerateFloatTriangularDither$2=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    dither = (double)return_value_PaUtil_GenerateFloatTriangularDither$2;
    double dithered = (double)*src * 2147483646.0 + dither;
    dithered = dithered < -2147483648. ? -2147483648. : (dithered > 2147483647. ? 2147483647. : dithered);
    *dest = (signed int)dithered;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int8
// file src/common/pa_converters.c line 703
static void Float32_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    signed char samp = (signed char)(*src * 127.0f);
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int8_Clip
// file src/common/pa_converters.c line 747
static void Float32_To_Int8_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    signed int samp = (signed int)(*src * 127.0f);
    samp = samp < -0x80 ? -0x80 : (samp > 0x7F ? 0x7F : samp);
    *dest = (signed char)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int8_Dither
// file src/common/pa_converters.c line 724
static void Float32_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 126.0f + dither;
    signed int samp = (signed int)dithered;
    *dest = (signed char)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_Int8_DitherClip
// file src/common/pa_converters.c line 769
static void Float32_To_Int8_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 126.0f + dither;
    signed int samp = (signed int)dithered;
    samp = samp < -0x80 ? -0x80 : (samp > 0x7F ? 0x7F : samp);
    *dest = (signed char)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_UInt8
// file src/common/pa_converters.c line 794
static void Float32_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    unsigned char samp = (unsigned char)(128 + (signed int)(unsigned char)(*src * 127.0f));
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_UInt8_Clip
// file src/common/pa_converters.c line 838
static void Float32_To_UInt8_Clip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    signed int samp = 128 + (signed int)(*src * 127.0f);
    samp = samp < 0x0000 ? 0x0000 : (samp > 0x00FF ? 0x00FF : samp);
    *dest = (unsigned char)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_UInt8_Dither
// file src/common/pa_converters.c line 815
static void Float32_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 126.0f + dither;
    signed int samp = (signed int)dithered;
    *dest = (unsigned char)(128 + samp);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Float32_To_UInt8_DitherClip
// file src/common/pa_converters.c line 860
static void Float32_To_UInt8_DitherClip(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  float *src = (float *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float dither;
    dither=PaUtil_GenerateFloatTriangularDither(ditherGenerator);
    float dithered = *src * 126.0f + dither;
    signed int samp = 128 + (signed int)dithered;
    samp = samp < 0x0000 ? 0x0000 : (samp > 0x00FF ? 0x00FF : samp);
    *dest = (unsigned char)samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// GCD
// file src/common/pa_process.c line 60
static unsigned long int GCD(unsigned long int a, unsigned long int b)
{
  unsigned long int tmp_if_expr$2;
  unsigned long int return_value_GCD$1;
  if(b == 0ul)
    tmp_if_expr$2 = a;

  else
  {
    return_value_GCD$1=GCD(b, a % b);
    tmp_if_expr$2 = return_value_GCD$1;
  }
  return tmp_if_expr$2;
}

// GetAlsaStreamPointer
// file src/hostapi/alsa/pa_linux_alsa.c line 4566
static signed int GetAlsaStreamPointer(void *s, struct PaAlsaStream **stream)
{
  signed int result = 0;
  struct PaUtilHostApiRepresentation *hostApi;
  struct PaAlsaHostApiRepresentation *alsaHostApi;
  do
  {
    paUtilErr_=PaUtil_ValidateStreamPointer(s);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUtil_ValidateStreamPointer( s )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4572\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    paUtilErr_=PaUtil_GetHostApiRepresentation(&hostApi, (enum PaHostApiTypeId)paALSA);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUtil_GetHostApiRepresentation( &hostApi, paALSA )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4573\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  alsaHostApi = (struct PaAlsaHostApiRepresentation *)hostApi;
  _Bool tmp_if_expr$1;
  do
  {
    if(((struct PaUtilStreamRepresentation *)s)->streamInterface == &alsaHostApi->callbackStreamInterface)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = ((struct PaUtilStreamRepresentation *)s)->streamInterface == &alsaHostApi->blockingStreamInterface ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr$1)
    {
      PaUtil_DebugPrint("Expression 'PA_STREAM_REP( s )->streamInterface == &alsaHostApi->callbackStreamInterface || PA_STREAM_REP( s )->streamInterface == &alsaHostApi->blockingStreamInterface' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4578\n");
      result = -9973;
      goto error;
    }

  }
  while((_Bool)0);
  *stream = (struct PaAlsaStream *)s;

error:
  ;
  return 0;
}

// GetAvailableFormats
// file src/hostapi/alsa/pa_linux_alsa.c line 1521
static unsigned long int GetAvailableFormats(struct _snd_pcm *pcm)
{
  unsigned long int available = (unsigned long int)0;
  struct _snd_pcm_hw_params *hwParams;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&hwParams) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$1;
  memset((void *)*(&hwParams), 0, __alsa_alloca_size);
  alsa_snd_pcm_hw_params_any(pcm, hwParams);
  signed int return_value;
  return_value=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT);
  if(return_value >= 0)
    available = available | (unsigned long int)0x00000001;

  signed int return_value_1;
  return_value_1=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S32);
  if(return_value_1 >= 0)
    available = available | (unsigned long int)0x00000002;

  signed int return_value_2;
  return_value_2=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24_3LE);
  if(return_value_2 >= 0)
    available = available | (unsigned long int)0x00000004;

  signed int return_value_3;
  return_value_3=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S16);
  if(return_value_3 >= 0)
    available = available | (unsigned long int)0x00000008;

  signed int return_value_4;
  return_value_4=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U8);
  if(return_value_4 >= 0)
    available = available | (unsigned long int)0x00000020;

  signed int return_value_5;
  return_value_5=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S8);
  if(return_value_5 >= 0)
    available = available | (unsigned long int)0x00000010;

  return available;
}

// GetAvailableFormats$link1
// file src/hostapi/oss/pa_unix_oss.c line 951
static signed int GetAvailableFormats$link1(struct anonymous$3 *component, unsigned long int *availableFormats)
{
  signed int result = 0;
  signed int mask = 0;
  unsigned long int frmts = (unsigned long int)0;
  unsigned long int return_value_pthread_self$3;
  do
  {
    sysErr_=ioctl(component->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(11 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &mask);
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$3=pthread_self();
      if(return_value_pthread_self$3 == mainThread_$link1)
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
      }

      PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_GETFMTS, &mask )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 957\n");
      result = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  if(!((0x00000008 & mask) == 0))
    frmts = frmts | (unsigned long int)0x00000020;

  if(!((0x00000040 & mask) == 0))
    frmts = frmts | (unsigned long int)0x00000010;

  if(!((0x00000010 & mask) == 0))
    frmts = frmts | (unsigned long int)0x00000008;

  else
    result = -9994;
  *availableFormats = frmts;

error:
  ;
  return result;
}

// GetDeviceInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 726
static const struct PaAlsaDeviceInfo * GetDeviceInfo(const struct PaUtilHostApiRepresentation *hostApi, signed int device)
{
  return (const struct PaAlsaDeviceInfo *)hostApi->deviceInfos[(signed long int)device];
}

// GetExactSampleRate
// file src/hostapi/alsa/pa_linux_alsa.c line 3224
static signed int GetExactSampleRate(struct _snd_pcm_hw_params *hwParams, double *sampleRate)
{
  unsigned int num;
  unsigned int den = (unsigned int)1;
  signed int err;
  /* assertion hwParams */
  assert(hwParams != ((struct _snd_pcm_hw_params *)NULL));
  err=alsa_snd_pcm_hw_params_get_rate_numden(hwParams, &num, &den);
  *sampleRate = (double)num / (double)den;
  return err;
}

// GetStreamCpuLoad
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 743
static double GetStreamCpuLoad(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  double return_value_PaUtil_GetCpuLoad$1;
  return_value_PaUtil_GetCpuLoad$1=PaUtil_GetCpuLoad(&stream->cpuLoadMeasurer);
  return return_value_PaUtil_GetCpuLoad$1;
}

// GetStreamCpuLoad$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3183
static double GetStreamCpuLoad$link1(void *s$link1)
{
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  double return_value_PaUtil_GetCpuLoad$1$link1;
  return_value_PaUtil_GetCpuLoad$1$link1=PaUtil_GetCpuLoad(&stream$link1->cpuLoadMeasurer);
  return return_value_PaUtil_GetCpuLoad$1$link1;
}

// GetStreamCpuLoad$link2
// file src/hostapi/jack/pa_jack.c line 1742
static double GetStreamCpuLoad$link2(void *s$link2)
{
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  double return_value_PaUtil_GetCpuLoad$1$link2;
  return_value_PaUtil_GetCpuLoad$1$link2=PaUtil_GetCpuLoad(&stream$link2->cpuLoadMeasurer);
  return return_value_PaUtil_GetCpuLoad$1$link2;
}

// GetStreamCpuLoad$link3
// file src/hostapi/oss/pa_unix_oss.c line 1912
static double GetStreamCpuLoad$link3(void *s$link3)
{
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  double return_value_PaUtil_GetCpuLoad$1$link3;
  return_value_PaUtil_GetCpuLoad$1$link3=PaUtil_GetCpuLoad(&stream$link3->cpuLoadMeasurer);
  return return_value_PaUtil_GetCpuLoad$1$link3;
}

// GetStreamReadAvailable
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 791
static signed long int GetStreamReadAvailable(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return (signed long int)0;
}

// GetStreamReadAvailable$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4493
static signed long int GetStreamReadAvailable$link1(void *s$link1)
{
  signed int result = 0;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  unsigned long int avail;
  signed int xrun;
  do
  {
    paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(&stream$link1->capture, &avail, &xrun);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( &stream->capture, &avail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4500\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  if(!(xrun == 0))
  {
    do
    {
      paUtilErr_=PaAlsaStream_HandleXrun(stream$link1);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_HandleXrun( stream )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4503\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(&stream$link1->capture, &avail, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( &stream->capture, &avail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4504\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    if(!(xrun == 0))
      do
      {
        paUtilErr_ = -9981;
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'paInputOverflowed' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4506\n");
          result = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);

  }

  return (signed long int)avail;

error:
  ;
  return (signed long int)result;
}

// GetStreamReadAvailable$link2
// file src/hostapi/oss/pa_unix_oss.c line 2014
static signed long int GetStreamReadAvailable$link2(void *s$link2)
{
  signed int result$link1 = 0;
  struct PaOssStream *stream$link2 = (struct PaOssStream *)s$link2;
  struct audio_buf_info info;
  unsigned long int return_value_pthread_self$3;
  do
  {
    sysErr_=ioctl(stream$link2->capture->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(13 << 0)) | sizeof(struct audio_buf_info) /*16ul*/  << 0 + 8 + 8, &info);
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$3=pthread_self();
      if(return_value_pthread_self$3 == mainThread_$link1)
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
      }

      PaUtil_DebugPrint("Expression 'ioctl( stream->capture->fd, SNDCTL_DSP_GETISPACE, &info )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 2020\n");
      result$link1 = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  return (signed long int)((unsigned long int)info.fragments * stream$link2->capture->hostFrames);

error:
  ;
  return (signed long int)result$link1;
}

// GetStreamTime
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 730
static double GetStreamTime(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return (double)0;
}

// GetStreamTime$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3156
static double GetStreamTime$link1(void *s$link1)
{
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  struct timeval timestamp;
  struct _snd_pcm_status *status;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_status_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&status) = (struct _snd_pcm_status *)return_value___builtin_alloca$1;
  memset((void *)*(&status), 0, __alsa_alloca_size);
  if(!(stream$link1->capture.pcm == ((struct _snd_pcm *)NULL)))
    alsa_snd_pcm_status(stream$link1->capture.pcm, status);

  else
    if(!(stream$link1->playback.pcm == ((struct _snd_pcm *)NULL)))
      alsa_snd_pcm_status(stream$link1->playback.pcm, status);

  alsa_snd_pcm_status_get_tstamp(status, &timestamp);
  return (double)timestamp.tv_sec + (double)timestamp.tv_usec / 1e6;
}

// GetStreamTime$link2
// file src/hostapi/jack/pa_jack.c line 1733
static double GetStreamTime$link2(void *s$link2)
{
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  unsigned int return_value_jack_frame_time$1;
  return_value_jack_frame_time$1=jack_frame_time(stream$link2->jack_client);
  unsigned int return_value_jack_get_sample_rate$2;
  return_value_jack_get_sample_rate$2=jack_get_sample_rate(stream$link2->jack_client);
  return (double)(return_value_jack_frame_time$1 - stream$link2->t0) / (double)return_value_jack_get_sample_rate$2;
}

// GetStreamTime$link3
// file src/hostapi/oss/pa_unix_oss.c line 1887
static double GetStreamTime$link3(void *s$link3)
{
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  struct count_info info;
  signed int delta;
  if(!(stream$link3->playback == ((struct anonymous$3 *)NULL)))
  {
    signed int return_value_ioctl$2;
    return_value_ioctl$2=ioctl(stream$link3->playback->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(18 << 0)) | sizeof(struct count_info) /*12ul*/  << 0 + 8 + 8, &info);
    if(return_value_ioctl$2 == 0)
    {
      delta = info.bytes - stream$link3->lastPosPtr;
      unsigned int return_value_PaOssStreamComponent_FrameSize$1;
      return_value_PaOssStreamComponent_FrameSize$1=PaOssStreamComponent_FrameSize(stream$link3->playback);
      return (double)((float)(stream$link3->lastStreamBytes + (double)delta) / (float)return_value_PaOssStreamComponent_FrameSize$1) / stream$link3->sampleRate;
    }

  }

  else
  {
    signed int return_value_ioctl$4;
    return_value_ioctl$4=ioctl(stream$link3->capture->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(17 << 0)) | sizeof(struct count_info) /*12ul*/  << 0 + 8 + 8, &info);
    if(return_value_ioctl$4 == 0)
    {
      delta = info.bytes - stream$link3->lastPosPtr;
      unsigned int return_value_PaOssStreamComponent_FrameSize$3;
      return_value_PaOssStreamComponent_FrameSize$3=PaOssStreamComponent_FrameSize(stream$link3->capture);
      return (double)((float)(stream$link3->lastStreamBytes + (double)delta) / (float)return_value_PaOssStreamComponent_FrameSize$3) / stream$link3->sampleRate;
    }

  }
  return (double)stream$link3->framesProcessed / stream$link3->sampleRate;
}

// GetStreamWriteAvailable
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 804
static signed long int GetStreamWriteAvailable(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return (signed long int)0;
}

// GetStreamWriteAvailable$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4515
static signed long int GetStreamWriteAvailable$link1(void *s$link1)
{
  signed int result = 0;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  unsigned long int avail;
  signed int xrun;
  do
  {
    paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(&stream$link1->playback, &avail, &xrun);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( &stream->playback, &avail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4522\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(xrun == 0))
  {
    signed long int savail;
    do
    {
      paUtilErr_=PaAlsaStream_HandleXrun(stream$link1);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_HandleXrun( stream )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4527\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    savail=alsa_snd_pcm_avail_update(stream$link1->playback.pcm);
    signed int __pa_unsure_error_id = (signed int)savail;
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$1=pthread_self();
      return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
      if(!(return_value_pthread_equal$2 == 0))
      {
        const char *return_value;
        return_value=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
      }

      PaUtil_DebugPrint("Expression 'savail' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4531\n");
      result = -9999;
    }

    avail = (unsigned long int)savail;
  }

  return (signed long int)avail;

error:
  ;
  return (signed long int)result;
}

// GetStreamWriteAvailable$link2
// file src/hostapi/oss/pa_unix_oss.c line 2029
static signed long int GetStreamWriteAvailable$link2(void *s$link2)
{
  signed int result$link1 = 0;
  struct PaOssStream *stream$link2 = (struct PaOssStream *)s$link2;
  signed int delay = 0;
  unsigned long int return_value_pthread_self$3;
  do
  {
    sysErr_=ioctl(stream$link2->playback->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(23 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &delay);
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$3=pthread_self();
      if(return_value_pthread_self$3 == mainThread_$link1)
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
      }

      PaUtil_DebugPrint("Expression 'ioctl( stream->playback->fd, SNDCTL_DSP_GETODELAY, &delay )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 2035\n");
      result$link1 = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_PaOssStreamComponent_BufferSize$4;
  return_value_PaOssStreamComponent_BufferSize$4=PaOssStreamComponent_BufferSize(stream$link2->playback);
  unsigned int return_value_PaOssStreamComponent_FrameSize$5;
  return_value_PaOssStreamComponent_FrameSize$5=PaOssStreamComponent_FrameSize(stream$link2->playback);
  return (signed long int)((return_value_PaOssStreamComponent_BufferSize$4 - (unsigned long int)delay) / (unsigned long int)return_value_PaOssStreamComponent_FrameSize$5);

error:
  ;
  return (signed long int)result$link1;
}

// GropeDevice
// file src/hostapi/alsa/pa_linux_alsa.c line 835
static signed int GropeDevice(struct _snd_pcm *pcm, signed int isPlug, enum anonymous$5 mode, signed int openBlocking, struct PaAlsaDeviceInfo *devInfo)
{
  signed int result = 0;
  struct _snd_pcm_hw_params *hwParams;
  unsigned long int alsaBufferFrames;
  unsigned long int alsaPeriodFrames;
  unsigned int minChans;
  unsigned int maxChans;
  signed int *minChannels;
  signed int *maxChannels;
  double *defaultLowLatency;
  double *defaultHighLatency;
  double *defaultSampleRate = &devInfo->baseDeviceInfo.defaultSampleRate;
  double defaultSr = *defaultSampleRate;
  signed int dir;
  /* assertion pcm */
  assert(pcm != ((struct _snd_pcm *)NULL));
  if((signed int)mode == StreamDirection_In)
  {
    minChannels = &devInfo->minInputChannels;
    maxChannels = &devInfo->baseDeviceInfo.maxInputChannels;
    defaultLowLatency = &devInfo->baseDeviceInfo.defaultLowInputLatency;
    defaultHighLatency = &devInfo->baseDeviceInfo.defaultHighInputLatency;
  }

  else
  {
    minChannels = &devInfo->minOutputChannels;
    maxChannels = &devInfo->baseDeviceInfo.maxOutputChannels;
    defaultLowLatency = &devInfo->baseDeviceInfo.defaultLowOutputLatency;
    defaultHighLatency = &devInfo->baseDeviceInfo.defaultHighOutputLatency;
  }
  signed int GropeDevice$$1$$3$$__pa_unsure_error_id;
  GropeDevice$$1$$3$$__pa_unsure_error_id=alsa_snd_pcm_nonblock(pcm, 0);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(GropeDevice$$1$$3$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$1=pthread_self();
    return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
    if(!(return_value_pthread_equal$2 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(GropeDevice$$1$$3$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$3$$__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_nonblock( pcm, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 867\n");
    result = -9999;
  }

  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$3;
  return_value___builtin_alloca$3=__builtin_alloca(__alsa_alloca_size);
  *(&hwParams) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$3;
  memset((void *)*(&hwParams), 0, __alsa_alloca_size);
  alsa_snd_pcm_hw_params_any(pcm, hwParams);
  if(defaultSr >= 0.000000)
  {
    signed int return_value_SetApproximateSampleRate$4;
    return_value_SetApproximateSampleRate$4=SetApproximateSampleRate(pcm, hwParams, defaultSr);
    if(!(return_value_SetApproximateSampleRate$4 >= 0))
    {
      defaultSr = -1.;
      alsa_snd_pcm_hw_params_any(pcm, hwParams);
    }

  }

  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  if(defaultSr < 0.)
  {
    unsigned int sampleRate = (unsigned int)44100;
    alsa_snd_pcm_hw_params_set_rate_resample(pcm, hwParams, (unsigned int)0);
    signed int return_value_1;
    return_value_1=alsa_snd_pcm_hw_params_set_rate_near(pcm, hwParams, &sampleRate, (signed int *)(void *)0);
    if(!(return_value_1 >= 0))
      result = -9999;

    signed int __pa_unsure_error_id;
    __pa_unsure_error_id=GetExactSampleRate(hwParams, &defaultSr);
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$5=pthread_self();
      return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
      if(!(return_value_pthread_equal$6 == 0))
      {
        const char *return_value_2;
        return_value_2=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_2);
      }

      PaUtil_DebugPrint("Expression 'GetExactSampleRate( hwParams, &defaultSr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 895\n");
      result = -9999;
    }

  }

  signed int GropeDevice$$1$$7$$__pa_unsure_error_id;
  GropeDevice$$1$$7$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_channels_min(hwParams, &minChans);
  unsigned long int return_value_pthread_self$7;
  signed int return_value_pthread_equal$8;
  if(!(GropeDevice$$1$$7$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$7=pthread_self();
    return_value_pthread_equal$8=pthread_equal(return_value_pthread_self$7, paUnixMainThread);
    if(!(return_value_pthread_equal$8 == 0))
    {
      const char *return_value_3;
      return_value_3=alsa_snd_strerror(GropeDevice$$1$$7$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$7$$__pa_unsure_error_id, return_value_3);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_channels_min( hwParams, &minChans )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 898\n");
    result = -9999;
  }

  signed int GropeDevice$$1$$8$$__pa_unsure_error_id;
  GropeDevice$$1$$8$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_channels_max(hwParams, &maxChans);
  unsigned long int return_value_pthread_self$9;
  signed int return_value_pthread_equal$10;
  if(!(GropeDevice$$1$$8$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$9=pthread_self();
    return_value_pthread_equal$10=pthread_equal(return_value_pthread_self$9, paUnixMainThread);
    if(!(return_value_pthread_equal$10 == 0))
    {
      const char *return_value_4;
      return_value_4=alsa_snd_strerror(GropeDevice$$1$$8$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$8$$__pa_unsure_error_id, return_value_4);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_channels_max( hwParams, &maxChans )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 899\n");
    result = -9999;
  }

  /* assertion maxChans <= 0x7fffffff */
  assert(maxChans <= (unsigned int)0x7fffffff);
  /* assertion maxChans > 0 */
  assert(maxChans > (unsigned int)0);
  if(maxChans >= 129u && !(isPlug == 0))
    maxChans = (unsigned int)128;

  alsaBufferFrames = (unsigned long int)512;
  alsaPeriodFrames = (unsigned long int)128;
  signed int GropeDevice$$1$$10$$__pa_unsure_error_id;
  GropeDevice$$1$$10$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_buffer_size_near(pcm, hwParams, &alsaBufferFrames);
  unsigned long int return_value_pthread_self$11;
  signed int return_value_pthread_equal$12;
  if(!(GropeDevice$$1$$10$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$11=pthread_self();
    return_value_pthread_equal$12=pthread_equal(return_value_pthread_self$11, paUnixMainThread);
    if(!(return_value_pthread_equal$12 == 0))
    {
      const char *return_value_5;
      return_value_5=alsa_snd_strerror(GropeDevice$$1$$10$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$10$$__pa_unsure_error_id, return_value_5);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_buffer_size_near( pcm, hwParams, &alsaBufferFrames )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 923\n");
    result = -9999;
  }

  signed int GropeDevice$$1$$11$$__pa_unsure_error_id;
  GropeDevice$$1$$11$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(pcm, hwParams, &alsaPeriodFrames, &dir);
  unsigned long int return_value_pthread_self$13;
  signed int return_value_pthread_equal$14;
  if(!(GropeDevice$$1$$11$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$13=pthread_self();
    return_value_pthread_equal$14=pthread_equal(return_value_pthread_self$13, paUnixMainThread);
    if(!(return_value_pthread_equal$14 == 0))
    {
      const char *return_value_6;
      return_value_6=alsa_snd_strerror(GropeDevice$$1$$11$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$11$$__pa_unsure_error_id, return_value_6);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( pcm, hwParams, &alsaPeriodFrames, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 924\n");
    result = -9999;
  }

  *defaultLowLatency = (double)(alsaBufferFrames - alsaPeriodFrames) / defaultSr;
  alsaBufferFrames = (unsigned long int)2048;
  alsaPeriodFrames = (unsigned long int)512;
  signed int GropeDevice$$1$$12$$__pa_unsure_error_id;
  GropeDevice$$1$$12$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_any(pcm, hwParams);
  unsigned long int return_value_pthread_self$15;
  signed int return_value_pthread_equal$16;
  if(!(GropeDevice$$1$$12$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$15=pthread_self();
    return_value_pthread_equal$16=pthread_equal(return_value_pthread_self$15, paUnixMainThread);
    if(!(return_value_pthread_equal$16 == 0))
    {
      const char *return_value_7;
      return_value_7=alsa_snd_strerror(GropeDevice$$1$$12$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$12$$__pa_unsure_error_id, return_value_7);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_any( pcm, hwParams )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 931\n");
    result = -9999;
  }

  signed int GropeDevice$$1$$13$$__pa_unsure_error_id;
  GropeDevice$$1$$13$$__pa_unsure_error_id=SetApproximateSampleRate(pcm, hwParams, defaultSr);
  unsigned long int return_value_pthread_self$17;
  signed int return_value_pthread_equal$18;
  if(!(GropeDevice$$1$$13$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$17=pthread_self();
    return_value_pthread_equal$18=pthread_equal(return_value_pthread_self$17, paUnixMainThread);
    if(!(return_value_pthread_equal$18 == 0))
    {
      const char *return_value_8;
      return_value_8=alsa_snd_strerror(GropeDevice$$1$$13$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$13$$__pa_unsure_error_id, return_value_8);
    }

    PaUtil_DebugPrint("Expression 'SetApproximateSampleRate( pcm, hwParams, defaultSr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 932\n");
    result = -9999;
  }

  signed int GropeDevice$$1$$14$$__pa_unsure_error_id;
  GropeDevice$$1$$14$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_buffer_size_near(pcm, hwParams, &alsaBufferFrames);
  unsigned long int return_value_pthread_self$19;
  signed int return_value_pthread_equal$20;
  if(!(GropeDevice$$1$$14$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$19=pthread_self();
    return_value_pthread_equal$20=pthread_equal(return_value_pthread_self$19, paUnixMainThread);
    if(!(return_value_pthread_equal$20 == 0))
    {
      const char *return_value_9;
      return_value_9=alsa_snd_strerror(GropeDevice$$1$$14$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$14$$__pa_unsure_error_id, return_value_9);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_buffer_size_near( pcm, hwParams, &alsaBufferFrames )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 933\n");
    result = -9999;
  }

  signed int GropeDevice$$1$$15$$__pa_unsure_error_id;
  GropeDevice$$1$$15$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(pcm, hwParams, &alsaPeriodFrames, &dir);
  unsigned long int return_value_pthread_self$21;
  signed int return_value_pthread_equal$22;
  if(!(GropeDevice$$1$$15$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$21=pthread_self();
    return_value_pthread_equal$22=pthread_equal(return_value_pthread_self$21, paUnixMainThread);
    if(!(return_value_pthread_equal$22 == 0))
    {
      const char *return_value_10;
      return_value_10=alsa_snd_strerror(GropeDevice$$1$$15$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)GropeDevice$$1$$15$$__pa_unsure_error_id, return_value_10);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( pcm, hwParams, &alsaPeriodFrames, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 934\n");
    result = -9999;
  }

  *defaultHighLatency = (double)(alsaBufferFrames - alsaPeriodFrames) / defaultSr;
  *minChannels = (signed int)minChans;
  *maxChannels = (signed int)maxChans;
  *defaultSampleRate = defaultSr;

end:
  ;
  alsa_snd_pcm_close(pcm);
  return result;

error:
  ;
}

// IgnorePlugin
// file src/hostapi/alsa/pa_linux_alsa.c line 1065
static signed int IgnorePlugin(const char *pluginId)
{
  signed int i = 0;
  static const char *ignoredPlugins[11l] = { "hw", "plughw", "plug", "dsnoop", "tee", "file", "null", "shm", "cards", "rate_convert", (const char *)(void *)0 };
  while(!(ignoredPlugins[(signed long int)i] == ((const char *)NULL)))
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(pluginId, ignoredPlugins[(signed long int)i]);
    if(return_value_strcmp$1 == 0)
      return 1;

    i = i + 1;
  }
  return 0;
}

// InitializeDeviceInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 951
static void InitializeDeviceInfo(struct PaDeviceInfo *deviceInfo)
{
  deviceInfo->structVersion = -1;
  deviceInfo->name = (const char *)(void *)0;
  deviceInfo->hostApi = -1;
  deviceInfo->maxInputChannels = 0;
  deviceInfo->maxOutputChannels = 0;
  deviceInfo->defaultLowInputLatency = -1.;
  deviceInfo->defaultLowOutputLatency = -1.;
  deviceInfo->defaultHighInputLatency = -1.;
  deviceInfo->defaultHighOutputLatency = -1.;
  deviceInfo->defaultSampleRate = -1.;
}

// InitializeHostApis
// file src/common/pa_front.c line 161
static signed int InitializeHostApis(void)
{
  signed int result = 0;
  signed int i;
  signed int initializerCount;
  signed int baseDeviceIndex;
  initializerCount=CountHostApiInitializers();
  void *return_value_PaUtil_AllocateMemory$1;
  return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)(sizeof(struct PaUtilHostApiRepresentation *) /*8ul*/  * (unsigned long int)initializerCount));
  hostApis_ = (struct PaUtilHostApiRepresentation **)return_value_PaUtil_AllocateMemory$1;
  _Bool tmp_if_expr$2;
  if(hostApis_ == ((struct PaUtilHostApiRepresentation **)NULL))
    result = -9992;

  else
  {
    hostApisCount_ = 0;
    defaultHostApiIndex_ = -1;
    deviceCount_ = 0;
    baseDeviceIndex = 0;
    i = 0;
    if(!(i >= initializerCount))
    {
      hostApis_[(signed long int)hostApisCount_] = (struct PaUtilHostApiRepresentation *)(void *)0;
      result=paHostApiInitializers[(signed long int)i](&hostApis_[(signed long int)hostApisCount_], hostApisCount_);
      if(!(hostApis_[(signed long int)hostApisCount_] == ((struct PaUtilHostApiRepresentation *)NULL)))
      {
        struct PaUtilHostApiRepresentation *hostApi = hostApis_[(signed long int)hostApisCount_];
        /* assertion hostApi->info.defaultInputDevice < hostApi->info.deviceCount */
        assert(hostApi->info.defaultInputDevice < hostApi->info.deviceCount);
        /* assertion hostApi->info.defaultOutputDevice < hostApi->info.deviceCount */
        assert(hostApi->info.defaultOutputDevice < hostApi->info.deviceCount);
        if(defaultHostApiIndex_ == -1)
        {
          if(!(hostApi->info.defaultInputDevice == -1))
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = hostApi->info.defaultOutputDevice != (signed int)-1 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$2)
            defaultHostApiIndex_ = hostApisCount_;

        }

        hostApi->privatePaFrontInfo.baseDeviceIndex = (unsigned long int)baseDeviceIndex;
        if(!(hostApi->info.defaultInputDevice == -1))
          hostApi->info.defaultInputDevice = hostApi->info.defaultInputDevice + baseDeviceIndex;

        if(!(hostApi->info.defaultOutputDevice == -1))
          hostApi->info.defaultOutputDevice = hostApi->info.defaultOutputDevice + baseDeviceIndex;

        baseDeviceIndex = baseDeviceIndex + hostApi->info.deviceCount;
        deviceCount_ = deviceCount_ + hostApi->info.deviceCount;
        hostApisCount_ = hostApisCount_ + 1;
      }

      i = i + 1;
    }

    if(defaultHostApiIndex_ == -1)
      defaultHostApiIndex_ = 0;

    return result;
  }

error:
  ;
  TerminateHostApis();
  return result;
}

// InitializeStream
// file src/hostapi/jack/pa_jack.c line 926
static signed int InitializeStream(struct PaJackStream *stream, struct anonymous$21 *hostApi, signed int numInputChannels, signed int numOutputChannels)
{
  signed int result = 0;
  /* assertion stream */
  assert(stream != ((struct PaJackStream *)NULL));
  memset((void *)stream, 0, sizeof(struct PaJackStream) /*688ul*/ );
  unsigned long int return_value_pthread_self$1;
  do
  {
    stream->stream_memory=PaUtil_CreateAllocationGroup();
    if(stream->stream_memory == ((struct anonymous$14 *)NULL))
    {
      PaUtil_DebugPrint("Expression 'stream->stream_memory = PaUtil_CreateAllocationGroup()' failed in 'src/hostapi/jack/pa_jack.c', line: 933\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  stream->jack_client = hostApi->jack_client;
  stream->hostApi = hostApi;
  unsigned long int return_value_pthread_self$2;
  unsigned long int return_value_pthread_self$4;
  if(numInputChannels >= 1)
  {
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$3;
      return_value_PaUtil_GroupAllocateMemory$3=PaUtil_GroupAllocateMemory(stream->stream_memory, (signed long int)(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numInputChannels));
      stream->local_input_ports = (struct _jack_port **)return_value_PaUtil_GroupAllocateMemory$3;
      if(stream->local_input_ports == ((struct _jack_port **)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->local_input_ports = (jack_port_t**) PaUtil_GroupAllocateMemory( stream->stream_memory, sizeof(jack_port_t*) * numInputChannels )' failed in 'src/hostapi/jack/pa_jack.c', line: 941\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    memset((void *)stream->local_input_ports, 0, sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numInputChannels);
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$5;
      return_value_PaUtil_GroupAllocateMemory$5=PaUtil_GroupAllocateMemory(stream->stream_memory, (signed long int)(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numInputChannels));
      stream->remote_output_ports = (struct _jack_port **)return_value_PaUtil_GroupAllocateMemory$5;
      if(stream->remote_output_ports == ((struct _jack_port **)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->remote_output_ports = (jack_port_t**) PaUtil_GroupAllocateMemory( stream->stream_memory, sizeof(jack_port_t*) * numInputChannels )' failed in 'src/hostapi/jack/pa_jack.c', line: 945\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    memset((void *)stream->remote_output_ports, 0, sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numInputChannels);
  }

  unsigned long int return_value_pthread_self$6;
  unsigned long int return_value_pthread_self$8;
  if(numOutputChannels >= 1)
  {
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$7;
      return_value_PaUtil_GroupAllocateMemory$7=PaUtil_GroupAllocateMemory(stream->stream_memory, (signed long int)(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numOutputChannels));
      stream->local_output_ports = (struct _jack_port **)return_value_PaUtil_GroupAllocateMemory$7;
      if(stream->local_output_ports == ((struct _jack_port **)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->local_output_ports = (jack_port_t**) PaUtil_GroupAllocateMemory( stream->stream_memory, sizeof(jack_port_t*) * numOutputChannels )' failed in 'src/hostapi/jack/pa_jack.c', line: 952\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    memset((void *)stream->local_output_ports, 0, sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numOutputChannels);
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$9;
      return_value_PaUtil_GroupAllocateMemory$9=PaUtil_GroupAllocateMemory(stream->stream_memory, (signed long int)(sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numOutputChannels));
      stream->remote_input_ports = (struct _jack_port **)return_value_PaUtil_GroupAllocateMemory$9;
      if(stream->remote_input_ports == ((struct _jack_port **)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->remote_input_ports = (jack_port_t**) PaUtil_GroupAllocateMemory( stream->stream_memory, sizeof(jack_port_t*) * numOutputChannels )' failed in 'src/hostapi/jack/pa_jack.c', line: 956\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    memset((void *)stream->remote_input_ports, 0, sizeof(struct _jack_port *) /*8ul*/  * (unsigned long int)numOutputChannels);
  }

  stream->num_incoming_connections = numInputChannels;
  stream->num_outgoing_connections = numOutputChannels;

error:
  ;
  return result;
}

// Int16_To_Float32
// file src/common/pa_converters.c line 1317
static void Int16_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  float *dest = (float *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float samp = (float)*src * const_1_div_32768_;
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int16_To_Int24
// file src/common/pa_converters.c line 1362
static void Int16_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  signed short int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = *src;
    dest[(signed long int)0] = (unsigned char)0;
    dest[(signed long int)1] = (unsigned char)temp;
    dest[(signed long int)2] = (unsigned char)((signed int)temp >> 8);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Int16_To_Int32
// file src/common/pa_converters.c line 1338
static void Int16_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed int)*src << 16;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int16_To_Int8
// file src/common/pa_converters.c line 1394
static void Int16_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed char)((signed int)*src >> 8);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int16_To_Int8_Dither
// file src/common/pa_converters.c line 1414
static void Int16_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int16_To_UInt8
// file src/common/pa_converters.c line 1434
static void Int16_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)(((signed int)*src >> 8) + 128);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int16_To_UInt8_Dither
// file src/common/pa_converters.c line 1454
static void Int16_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed short int *src = (signed short int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Float32
// file src/common/pa_converters.c line 1073
static void Int24_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  float *dest = (float *)destinationBuffer;
  signed int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = (signed int)src[(signed long int)0] << 8;
    temp = temp | (signed int)src[(signed long int)1] << 16;
    temp = temp | (signed int)src[(signed long int)2] << 24;
    *dest = (float)((double)temp * const_1_div_2147483648_);
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Int16
// file src/common/pa_converters.c line 1139
static void Int24_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  signed short int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = (signed short int)src[(signed long int)1];
    temp = (signed short int)((signed int)temp | (signed int)(signed short int)((signed int)(signed short int)src[(signed long int)2] << 8));
    *dest = temp;
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Int16_Dither
// file src/common/pa_converters.c line 1173
static void Int24_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  signed int temp;
  signed int dither;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = (signed int)src[(signed long int)0] << 8;
    temp = temp | (signed int)src[(signed long int)1] << 16;
    temp = temp | (signed int)src[(signed long int)2] << 24;
    dither=PaUtil_Generate16BitTriangularDither(ditherGenerator);
    *dest = (signed short int)((temp >> 1) + dither >> 15);
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Int32
// file src/common/pa_converters.c line 1106
static void Int24_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  signed int temp;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = (signed int)src[(signed long int)0] << 8;
    temp = temp | (signed int)src[(signed long int)1] << 16;
    temp = temp | (signed int)src[(signed long int)2] << 24;
    *dest = temp;
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Int8
// file src/common/pa_converters.c line 1207
static void Int24_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed char)src[(signed long int)2];
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_Int8_Dither
// file src/common/pa_converters.c line 1237
static void Int24_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  signed int temp;
  signed int dither;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    temp = (signed int)src[(signed long int)0] << 8;
    temp = temp | (signed int)src[(signed long int)1] << 16;
    temp = temp | (signed int)src[(signed long int)2] << 24;
    dither=PaUtil_Generate16BitTriangularDither(ditherGenerator);
    *dest = (signed char)((temp >> 1) + dither >> 23);
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_UInt8
// file src/common/pa_converters.c line 1271
static void Int24_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)((signed int)src[(signed long int)2] + 128);
    src = src + (signed long int)(sourceStride * 3);
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int24_To_UInt8_Dither
// file src/common/pa_converters.c line 1301
static void Int24_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  (void)destinationBuffer;
  (void)destinationStride;
  (void)sourceBuffer;
  (void)sourceStride;
  (void)count;
  (void)ditherGenerator;
}

// Int32_To_Float32
// file src/common/pa_converters.c line 885
static void Int32_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  float *dest = (float *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (float)((double)*src * const_1_div_2147483648_);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_Int16
// file src/common/pa_converters.c line 949
static void Int32_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed short int)(*src >> 16);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_Int16_Dither
// file src/common/pa_converters.c line 969
static void Int32_To_Int16_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  signed int dither;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dither=PaUtil_Generate16BitTriangularDither(ditherGenerator);
    *dest = (signed short int)((*src >> 1) + dither >> 15);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_Int24
// file src/common/pa_converters.c line 905
static void Int32_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dest[(signed long int)0] = (unsigned char)(*src >> 8);
    dest[(signed long int)1] = (unsigned char)(*src >> 16);
    dest[(signed long int)2] = (unsigned char)(*src >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Int32_To_Int24_Dither
// file src/common/pa_converters.c line 933
static void Int32_To_Int24_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  (void)destinationBuffer;
  (void)destinationStride;
  (void)sourceBuffer;
  (void)sourceStride;
  (void)count;
  (void)ditherGenerator;
}

// Int32_To_Int8
// file src/common/pa_converters.c line 991
static void Int32_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed char)(*src >> 24);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_Int8_Dither
// file src/common/pa_converters.c line 1011
static void Int32_To_Int8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  signed int dither;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dither=PaUtil_Generate16BitTriangularDither(ditherGenerator);
    *dest = (signed char)((*src >> 1) + dither >> 23);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_UInt8
// file src/common/pa_converters.c line 1033
static void Int32_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)((*src >> 24) + 128);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int32_To_UInt8_Dither
// file src/common/pa_converters.c line 1053
static void Int32_To_UInt8_Dither(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed int *src = (signed int *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int8_To_Float32
// file src/common/pa_converters.c line 1474
static void Int8_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed char *src = (signed char *)sourceBuffer;
  float *dest = (float *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float samp = (float)*src * const_1_div_128_;
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int8_To_Int16
// file src/common/pa_converters.c line 1544
static void Int8_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed char *src = (signed char *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed short int)((signed int)*src << 8);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int8_To_Int24
// file src/common/pa_converters.c line 1515
static void Int8_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed char *src = (signed char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dest[(signed long int)0] = (unsigned char)0;
    dest[(signed long int)1] = (unsigned char)0;
    dest[(signed long int)2] = (unsigned char)*src;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Int8_To_Int32
// file src/common/pa_converters.c line 1495
static void Int8_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed char *src = (signed char *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed int)*src << 24;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Int8_To_UInt8
// file src/common/pa_converters.c line 1564
static void Int8_To_UInt8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  signed char *src = (signed char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)((signed int)*src + 128);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// IsFormatSupported
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 260
static signed int IsFormatSupported(struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate)
{
  signed int inputChannelCount;
  signed int outputChannelCount;
  unsigned long int inputSampleFormat;
  unsigned long int outputSampleFormat;
  if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    inputChannelCount = inputParameters->channelCount;
    inputSampleFormat = inputParameters->sampleFormat;
    if(!((65536ul & inputSampleFormat) == 0ul))
      return -9994;

    if(inputParameters->device == -2)
      return -9996;

    if(!(hostApi->deviceInfos[(signed long int)inputParameters->device]->maxInputChannels >= inputChannelCount))
      return -9998;

    if(!(inputParameters->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    inputChannelCount = 0;
  if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    outputChannelCount = outputParameters->channelCount;
    outputSampleFormat = outputParameters->sampleFormat;
    if(!((65536ul & outputSampleFormat) == 0ul))
      return -9994;

    if(outputParameters->device == -2)
      return -9996;

    if(!(hostApi->deviceInfos[(signed long int)outputParameters->device]->maxOutputChannels >= outputChannelCount))
      return -9998;

    if(!(outputParameters->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    outputChannelCount = 0;
  (void)sampleRate;
  return 0;
}

// IsFormatSupported$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 1827
static signed int IsFormatSupported$link1(struct PaUtilHostApiRepresentation *hostApi$link1, const struct PaStreamParameters *inputParameters$link1, const struct PaStreamParameters *outputParameters$link1, double sampleRate$link1)
{
  signed int inputChannelCount$link1 = 0;
  signed int outputChannelCount$link1 = 0;
  unsigned long int inputSampleFormat$link1;
  unsigned long int outputSampleFormat$link1;
  signed int result = 0;
  if(!(inputParameters$link1 == ((const struct PaStreamParameters *)NULL)))
  {
    do
    {
      paUtilErr_=ValidateParameters(inputParameters$link1, hostApi$link1, (enum anonymous$5)StreamDirection_In);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'ValidateParameters( inputParameters, hostApi, StreamDirection_In )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1838\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    inputChannelCount$link1 = inputParameters$link1->channelCount;
    inputSampleFormat$link1 = inputParameters$link1->sampleFormat;
  }

  if(!(outputParameters$link1 == ((const struct PaStreamParameters *)NULL)))
  {
    do
    {
      paUtilErr_=ValidateParameters(outputParameters$link1, hostApi$link1, (enum anonymous$5)StreamDirection_Out);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'ValidateParameters( outputParameters, hostApi, StreamDirection_Out )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1846\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    outputChannelCount$link1 = outputParameters$link1->channelCount;
    outputSampleFormat$link1 = outputParameters$link1->sampleFormat;
  }

  if(!(inputChannelCount$link1 == 0))
  {
    result=TestParameters(hostApi$link1, inputParameters$link1, sampleRate$link1, (enum anonymous$5)StreamDirection_In);
    if(!(result == 0))
      goto error;

  }

  if(!(outputChannelCount$link1 == 0))
  {
    result=TestParameters(hostApi$link1, outputParameters$link1, sampleRate$link1, (enum anonymous$5)StreamDirection_Out);
    if(!(result == 0))
      goto error;

  }

  return 0;

error:
  ;
  return result;
}

// IsFormatSupported$link2
// file src/hostapi/jack/pa_jack.c line 839
static signed int IsFormatSupported$link2(struct PaUtilHostApiRepresentation *hostApi$link2, const struct PaStreamParameters *inputParameters$link2, const struct PaStreamParameters *outputParameters$link2, double sampleRate$link2)
{
  signed int inputChannelCount$link2 = 0;
  signed int outputChannelCount$link2 = 0;
  unsigned long int inputSampleFormat$link2;
  unsigned long int outputSampleFormat$link2;
  if(!(inputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
  {
    inputChannelCount$link2 = inputParameters$link2->channelCount;
    inputSampleFormat$link2 = inputParameters$link2->sampleFormat;
    if(inputParameters$link2->device == -2)
      return -9996;

    if(!(hostApi$link2->deviceInfos[(signed long int)inputParameters$link2->device]->maxInputChannels >= inputChannelCount$link2))
      return -9998;

    if(!(inputParameters$link2->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    inputChannelCount$link2 = 0;
  if(!(outputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
  {
    outputChannelCount$link2 = outputParameters$link2->channelCount;
    outputSampleFormat$link2 = outputParameters$link2->sampleFormat;
    if(outputParameters$link2->device == -2)
      return -9996;

    if(!(hostApi$link2->deviceInfos[(signed long int)outputParameters$link2->device]->maxOutputChannels >= outputChannelCount$link2))
      return -9998;

    if(!(outputParameters$link2->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    outputChannelCount$link2 = 0;
  unsigned int return_value_jack_get_sample_rate$1;
  return_value_jack_get_sample_rate$1=jack_get_sample_rate(((struct anonymous$21 *)hostApi$link2)->jack_client);
  double tmp_if_expr$4;
  unsigned int return_value_jack_get_sample_rate$2;
  unsigned int return_value_jack_get_sample_rate$3;
  if(sampleRate$link2 + -((double)return_value_jack_get_sample_rate$1) > 0.000000)
  {
    return_value_jack_get_sample_rate$2=jack_get_sample_rate(((struct anonymous$21 *)hostApi$link2)->jack_client);
    tmp_if_expr$4 = sampleRate$link2 - (double)return_value_jack_get_sample_rate$2;
  }

  else
  {
    return_value_jack_get_sample_rate$3=jack_get_sample_rate(((struct anonymous$21 *)hostApi$link2)->jack_client);
    tmp_if_expr$4 = -(sampleRate$link2 - (double)return_value_jack_get_sample_rate$3);
  }
  if(tmp_if_expr$4 > 1.000000)
    return -9997;

  else
    return 0;
}

// IsFormatSupported$link3
// file src/hostapi/oss/pa_unix_oss.c line 605
static signed int IsFormatSupported$link3(struct PaUtilHostApiRepresentation *hostApi$link3, const struct PaStreamParameters *inputParameters$link3, const struct PaStreamParameters *outputParameters$link3, double sampleRate$link3)
{
  signed int result$link1 = 0;
  signed int device;
  struct PaDeviceInfo *deviceInfo;
  char *deviceName;
  signed int inputChannelCount$link3;
  signed int outputChannelCount$link3;
  signed int tempDevHandle = -1;
  signed int flags;
  unsigned long int inputSampleFormat$link3;
  unsigned long int outputSampleFormat$link3;
  if(!(inputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
  {
    inputChannelCount$link3 = inputParameters$link3->channelCount;
    inputSampleFormat$link3 = inputParameters$link3->sampleFormat;
    if(inputParameters$link3->device == -2)
      return -9996;

    if(!(hostApi$link3->deviceInfos[(signed long int)inputParameters$link3->device]->maxInputChannels >= inputChannelCount$link3))
      return -9998;

    if(!(inputParameters$link3->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    inputChannelCount$link3 = 0;
  if(!(outputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
  {
    outputChannelCount$link3 = outputParameters$link3->channelCount;
    outputSampleFormat$link3 = outputParameters$link3->sampleFormat;
    if(outputParameters$link3->device == -2)
      return -9996;

    if(!(hostApi$link3->deviceInfos[(signed long int)outputParameters$link3->device]->maxOutputChannels >= outputChannelCount$link3))
      return -9998;

    if(!(outputParameters$link3->hostApiSpecificStreamInfo == NULL))
      return -9984;

  }

  else
    outputChannelCount$link3 = 0;
  unsigned long int return_value_pthread_self$3;
  if(inputChannelCount$link3 == 0 && outputChannelCount$link3 == 0)
    return -9998;

  else
    if(inputChannelCount$link3 >= 1 && outputChannelCount$link3 >= 1)
    {
      if(inputParameters$link3->device == outputParameters$link3->device)
        goto __CPROVER_DUMP_L12;

      return -9996;
    }

    else
    {

    __CPROVER_DUMP_L12:
      ;
      if(inputChannelCount$link3 >= 1 && outputChannelCount$link3 >= 1 && !(inputChannelCount$link3 == outputChannelCount$link3))
        return -9998;

      else
      {
        if(inputChannelCount$link3 >= 1)
        {
          result$link1=PaUtil_DeviceIndexToHostApiDeviceIndex(&device, inputParameters$link3->device, hostApi$link3);
          if(!(result$link1 == 0))
            return result$link1;

        }

        else
        {
          result$link1=PaUtil_DeviceIndexToHostApiDeviceIndex(&device, outputParameters$link3->device, hostApi$link3);
          if(!(result$link1 == 0))
            return result$link1;

        }
        deviceInfo = hostApi$link3->deviceInfos[(signed long int)device];
        deviceName = (char *)deviceInfo->name;
        flags = 04000;
        if(inputChannelCount$link3 >= 1 && outputChannelCount$link3 >= 1)
          flags = flags | 02;

        else
          if(inputChannelCount$link3 >= 1)
            flags = flags | 00;

          else
            flags = flags | 01;
        do
        {
          tempDevHandle=open(deviceInfo->name, flags);
          sysErr_ = tempDevHandle;
          if(!(sysErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'tempDevHandle = open( deviceInfo->name, flags )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 708\n");
            result$link1 = -9985;
            break;
          }

        }
        while((_Bool)0);

      error:
        ;
        if(tempDevHandle >= 0)
          close(tempDevHandle);

        return result$link1;
      }
    }
}

// IsStreamActive
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 717
static signed int IsStreamActive(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return 0;
}

// IsStreamActive$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3150
static signed int IsStreamActive$link1(void *s$link1)
{
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  return stream$link1->isActive;
}

// IsStreamActive$link2
// file src/hostapi/jack/pa_jack.c line 1726
static signed int IsStreamActive$link2(void *s$link2)
{
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  return stream$link2->is_active;
}

// IsStreamActive$link3
// file src/hostapi/oss/pa_unix_oss.c line 1880
static signed int IsStreamActive$link3(void *s$link3)
{
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  return stream$link3->isActive;
}

// IsStreamStopped
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 704
static signed int IsStreamStopped(void *s)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return 0;
}

// IsStreamStopped$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3142
static signed int IsStreamStopped$link1(void *s$link1)
{
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  signed int return_value_IsStreamActive$1;
  return_value_IsStreamActive$1=IsStreamActive$link1(s$link1);
  _Bool tmp_if_expr$2;
  if(return_value_IsStreamActive$1 == 0)
    tmp_if_expr$2 = !(stream$link1->callback_finished != 0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  return (signed int)tmp_if_expr$2;
}

// IsStreamStopped$link2
// file src/hostapi/jack/pa_jack.c line 1719
static signed int IsStreamStopped$link2(void *s$link2)
{
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  return (signed int)!(stream$link2->is_running != 0);
}

// IsStreamStopped$link3
// file src/hostapi/oss/pa_unix_oss.c line 1870
static signed int IsStreamStopped$link3(void *s$link3)
{
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  return stream$link3->isStopped;
}

// JackCallback
// file src/hostapi/jack/pa_jack.c line 1501
static signed int JackCallback(unsigned int frames, void *userData)
{
  signed int result = 0;
  struct anonymous$21 *hostApi = (struct anonymous$21 *)userData;
  struct PaJackStream *stream = (struct PaJackStream *)(void *)0;
  signed int xrun = hostApi->xrun;
  hostApi->xrun = 0;
  /* assertion hostApi */
  assert(hostApi != ((struct anonymous$21 *)NULL));
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int JackCallback$$1$$1$$paErr;
    JackCallback$$1$$1$$paErr=UpdateQueue(hostApi);
    if(!(JackCallback$$1$$1$$paErr >= 0))
    {
      if(JackCallback$$1$$1$$paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *JackCallback$$1$$1$$1$$1$$err = jackErr_;
          if(JackCallback$$1$$1$$1$$1$$err == ((const char *)NULL))
            JackCallback$$1$$1$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, JackCallback$$1$$1$$1$$1$$err);
        }

      }

      PaUtil_DebugPrint("Expression 'UpdateQueue( hostApi )' failed in 'src/hostapi/jack/pa_jack.c', line: 1511\n");
      result = JackCallback$$1$$1$$paErr;
      goto error;
    }

  }
  while((_Bool)0);
  stream = hostApi->processQueue;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_pthread_self$3;
  _Bool tmp_if_expr$5;
  for( ; !(stream == ((struct PaJackStream *)NULL)); stream = stream->next)
  {
    if(!(xrun == 0))
      stream->xrun = 1;

    if(!(stream->doStart == 0))
    {
      signed int JackCallback$$1$$2$$1$$1$$err;
      JackCallback$$1$$2$$1$$1$$err=pthread_mutex_trylock(&stream->hostApi->mtx);
      if(JackCallback$$1$$2$$1$$1$$err == 0)
      {
        if(!(stream->doStart == 0))
        {
          stream->is_active = 1;
          stream->doStart = 0;
          do
          {
            signed int JackCallback$$1$$2$$1$$1$$1$$1$$1$$err;
            JackCallback$$1$$2$$1$$1$$1$$1$$1$$err=pthread_cond_signal(&stream->hostApi->cond);
            /* assertion err == 0 */
            assert(JackCallback$$1$$2$$1$$1$$1$$1$$1$$err == 0);
          }
          while((_Bool)0);
          stream->callbackResult = 0;
          stream->isSilenced = 0;
        }

        do
        {
          signed int err;
          err=pthread_mutex_unlock(&stream->hostApi->mtx);
          /* assertion err == 0 */
          assert(err == 0);
        }
        while((_Bool)0);
      }

      else
        /* assertion err == 16 */
        assert(JackCallback$$1$$2$$1$$1$$err == 16);
    }

    else
    {
      if(!(stream->doStop == 0))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = stream->doAbort != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        if(stream->callbackResult == 0)
          stream->callbackResult = stream->doStop != 0 ? 1 : 2;

      }

    }
    if(!(stream->is_active == 0))
      do
      {
        signed int paErr;
        paErr=RealProcess(stream, frames);
        if(!(paErr >= 0))
        {
          if(paErr == -9999)
          {
            return_value_pthread_self$3=pthread_self();
            if(return_value_pthread_self$3 == mainThread_)
            {
              const char *JackCallback$$1$$2$$1$$3$$1$$1$$err = jackErr_;
              if(JackCallback$$1$$2$$1$$3$$1$$1$$err == ((const char *)NULL))
                JackCallback$$1$$2$$1$$3$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, JackCallback$$1$$2$$1$$3$$1$$1$$err);
            }

          }

          PaUtil_DebugPrint("Expression 'RealProcess( stream, frames )' failed in 'src/hostapi/jack/pa_jack.c', line: 1552\n");
          result = paErr;
          goto error;
        }

      }
      while((_Bool)0);

    if(stream->is_active == 0)
    {
      if(stream->isSilenced == 0)
      {
        signed int i = 0;
        for( ; !(i >= stream->num_outgoing_connections); i = i + 1)
        {
          float *buffer;
          void *return_value_jack_port_get_buffer$4;
          return_value_jack_port_get_buffer$4=jack_port_get_buffer(stream->local_output_ports[(signed long int)i], frames);
          buffer = (float *)return_value_jack_port_get_buffer$4;
          memset((void *)buffer, 0, sizeof(float) /*4ul*/  * (unsigned long int)frames);
        }
        stream->isSilenced = 1;
      }

    }

    if(!(stream->doStop == 0))
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = stream->doAbort != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      if(stream->is_active == 0)
      {
        signed int JackCallback$$1$$2$$1$$5$$1$$err;
        JackCallback$$1$$2$$1$$5$$1$$err=pthread_mutex_trylock(&stream->hostApi->mtx);
        if(JackCallback$$1$$2$$1$$5$$1$$err == 0)
        {
          stream->doAbort = 0;
          stream->doStop = stream->doAbort;
          do
          {
            signed int JackCallback$$1$$2$$1$$5$$1$$1$$1$$err;
            JackCallback$$1$$2$$1$$5$$1$$1$$1$$err=pthread_cond_signal(&stream->hostApi->cond);
            /* assertion err == 0 */
            assert(JackCallback$$1$$2$$1$$5$$1$$1$$1$$err == 0);
          }
          while((_Bool)0);
          do
          {
            signed int JackCallback$$1$$2$$1$$5$$1$$1$$2$$err;
            JackCallback$$1$$2$$1$$5$$1$$1$$2$$err=pthread_mutex_unlock(&stream->hostApi->mtx);
            /* assertion err == 0 */
            assert(JackCallback$$1$$2$$1$$5$$1$$1$$2$$err == 0);
          }
          while((_Bool)0);
        }

        else
          /* assertion err == 16 */
          assert(JackCallback$$1$$2$$1$$5$$1$$err == 16);
      }

    }

  }
  return 0;

error:
  ;
  return -1;
}

// JackErrorCallback
// file src/hostapi/jack/pa_jack.c line 652
static void JackErrorCallback(const char *msg)
{
  unsigned long int return_value_pthread_self$3;
  return_value_pthread_self$3=pthread_self();
  if(return_value_pthread_self$3 == mainThread_)
  {
    /* assertion msg */
    assert(msg != ((const char *)NULL));
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(msg);
    void *return_value_realloc$2;
    return_value_realloc$2=realloc((void *)jackErr_, return_value_strlen$1 + (unsigned long int)1);
    jackErr_ = (char *)return_value_realloc$2;
    strcpy(jackErr_, msg);
  }

}

// JackOnShutdown
// file src/hostapi/jack/pa_jack.c line 662
static void JackOnShutdown(void *arg)
{
  struct anonymous$21 *jackApi = (struct anonymous$21 *)arg;
  struct PaJackStream *stream = jackApi->processQueue;
  for( ; !(stream == ((struct PaJackStream *)NULL)); stream = stream->next)
    stream->is_active = 0;
  do
  {
    signed int err;
    err=pthread_mutex_lock(&jackApi->mtx);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  jackApi->jackIsDown = 1;
  do
  {
    signed int JackOnShutdown$$1$$3$$err;
    JackOnShutdown$$1$$3$$err=pthread_cond_signal(&jackApi->cond);
    /* assertion err == 0 */
    assert(JackOnShutdown$$1$$3$$err == 0);
  }
  while((_Bool)0);
  do
  {
    signed int JackOnShutdown$$1$$4$$err;
    JackOnShutdown$$1$$4$$err=pthread_mutex_unlock(&jackApi->mtx);
    /* assertion err == 0 */
    assert(JackOnShutdown$$1$$4$$err == 0);
  }
  while((_Bool)0);
}

// JackSrCb
// file src/hostapi/jack/pa_jack.c line 681
static signed int JackSrCb(unsigned int nframes, void *arg)
{
  struct anonymous$21 *jackApi = (struct anonymous$21 *)arg;
  double sampleRate = (double)nframes;
  struct PaJackStream *stream = jackApi->processQueue;
  for( ; !(stream == ((struct PaJackStream *)NULL)); stream = stream->next)
    if(IEEE_FLOAT_NOTEQUAL(stream->streamRepresentation.streamInfo.sampleRate, sampleRate))
      UpdateSampleRate(stream, sampleRate);

  return 0;
}

// JackXRunCb
// file src/hostapi/jack/pa_jack.c line 701
static signed int JackXRunCb(void *arg)
{
  struct anonymous$21 *hostApi = (struct anonymous$21 *)arg;
  /* assertion hostApi */
  assert(hostApi != ((struct anonymous$21 *)NULL));
  hostApi->xrun = 1;
  return 0;
}

// LCM
// file src/common/pa_process.c line 66
static unsigned long int LCM(unsigned long int a, unsigned long int b)
{
  unsigned long int return_value_GCD$1;
  return_value_GCD$1=GCD(a, b);
  return (a * b) / return_value_GCD$1;
}

// LogAllAvailableFormats
// file src/hostapi/alsa/pa_linux_alsa.c line 1556
static void LogAllAvailableFormats(struct _snd_pcm *pcm)
{
  unsigned long int available = (unsigned long int)0;
  struct _snd_pcm_hw_params *hwParams;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&hwParams) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$1;
  memset((void *)*(&hwParams), 0, __alsa_alloca_size);
  alsa_snd_pcm_hw_params_any(pcm, hwParams);
  signed int return_value;
  return_value=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S8);
  signed int return_value_1;
  return_value_1=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U8);
  signed int return_value_2;
  return_value_2=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S16_LE);
  signed int return_value_3;
  return_value_3=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S16_BE);
  signed int return_value_4;
  return_value_4=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U16_LE);
  signed int return_value_5;
  return_value_5=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U16_BE);
  signed int return_value_6;
  return_value_6=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24_LE);
  signed int return_value_7;
  return_value_7=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24_BE);
  signed int return_value_8;
  return_value_8=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U24_LE);
  signed int return_value_9;
  return_value_9=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U24_BE);
  signed int return_value_10;
  return_value_10=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT_LE);
  signed int return_value_11;
  return_value_11=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT_BE);
  signed int return_value_12;
  return_value_12=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT64_LE);
  signed int return_value_13;
  return_value_13=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT64_BE);
  signed int return_value_14;
  return_value_14=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_IEC958_SUBFRAME_LE);
  signed int return_value_15;
  return_value_15=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_IEC958_SUBFRAME_BE);
  signed int return_value_16;
  return_value_16=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_MU_LAW);
  signed int return_value_17;
  return_value_17=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_A_LAW);
  signed int return_value_18;
  return_value_18=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_IMA_ADPCM);
  signed int return_value_19;
  return_value_19=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_MPEG);
  signed int return_value_20;
  return_value_20=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_GSM);
  signed int return_value_21;
  return_value_21=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_SPECIAL);
  signed int return_value_22;
  return_value_22=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24_3LE);
  signed int return_value_23;
  return_value_23=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24_3BE);
  signed int return_value_24;
  return_value_24=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U24_3LE);
  signed int return_value_25;
  return_value_25=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U24_3BE);
  signed int return_value_26;
  return_value_26=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S20_3LE);
  signed int return_value_27;
  return_value_27=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S20_3BE);
  signed int return_value_28;
  return_value_28=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U20_3LE);
  signed int return_value_29;
  return_value_29=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U20_3BE);
  signed int return_value_30;
  return_value_30=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S18_3LE);
  signed int return_value_31;
  return_value_31=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S18_3BE);
  signed int return_value_32;
  return_value_32=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U18_3LE);
  signed int return_value_33;
  return_value_33=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U18_3BE);
  signed int return_value_34;
  return_value_34=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S16);
  signed int return_value_35;
  return_value_35=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U16);
  signed int return_value_36;
  return_value_36=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S24);
  signed int return_value_37;
  return_value_37=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U24);
  signed int return_value_38;
  return_value_38=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_S32);
  signed int return_value_39;
  return_value_39=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_U32);
  signed int return_value_40;
  return_value_40=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT);
  signed int return_value_41;
  return_value_41=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT64);
  signed int return_value_42;
  return_value_42=alsa_snd_pcm_hw_params_test_format(pcm, hwParams, (enum _snd_pcm_format)SND_PCM_FORMAT_IEC958_SUBFRAME);
}

// ModifyBlocking
// file src/hostapi/oss/pa_unix_oss.c line 788
static signed int ModifyBlocking(signed int fd, signed int blocking)
{
  signed int result = 0;
  signed int fflags;
  unsigned long int return_value_pthread_self$3;
  do
  {
    fflags=fcntl(fd, 3);
    sysErr_ = fflags;
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$3=pthread_self();
      if(return_value_pthread_self$3 == mainThread_$link1)
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
      }

      PaUtil_DebugPrint("Expression 'fflags = fcntl( fd, F_GETFL )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 793\n");
      result = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  if(!(blocking == 0))
    fflags = fflags & ~04000;

  else
    fflags = fflags | 04000;
  unsigned long int return_value_pthread_self$6;
  do
  {
    sysErr_=fcntl(fd, 4, fflags);
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$6=pthread_self();
      if(return_value_pthread_self$6 == mainThread_$link1)
      {
        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        char *return_value_strerror$5;
        return_value_strerror$5=strerror(*return_value___errno_location$4);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$5);
      }

      PaUtil_DebugPrint("Expression 'fcntl( fd, F_SETFL, fflags )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 800\n");
      result = -9999;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// NonAdaptingProcess
// file src/common/pa_process.c line 704
static unsigned long int NonAdaptingProcess(struct anonymous$13 *bp, signed int *streamCallbackResult, struct PaUtilChannelDescriptor *hostInputChannels, struct PaUtilChannelDescriptor *hostOutputChannels, unsigned long int framesToProcess)
{
  void *userInput;
  void *userOutput;
  unsigned char *srcBytePtr;
  unsigned char *destBytePtr;
  unsigned int srcSampleStrideSamples;
  unsigned int srcChannelStrideBytes;
  unsigned int destSampleStrideSamples;
  unsigned int destChannelStrideBytes;
  unsigned int i;
  unsigned long int frameCount;
  unsigned long int framesToGo = framesToProcess;
  unsigned long int framesProcessed = (unsigned long int)0;
  signed int skipOutputConvert = 0;
  signed int skipInputConvert = 0;
  unsigned long int tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$1;
  if(*streamCallbackResult == 0)
  {
    if(!(bp->framesPerTempBuffer >= framesToGo))
      tmp_if_expr$2 = bp->framesPerTempBuffer;

    else
      tmp_if_expr$2 = framesToGo;
    frameCount = tmp_if_expr$2;
    if(bp->inputChannelCount == 0u)
      userInput = NULL;

    else
    {
      destBytePtr = (unsigned char *)bp->tempInputBuffer;
      if(!(bp->userInputIsInterleaved == 0))
      {
        destSampleStrideSamples = bp->inputChannelCount;
        destChannelStrideBytes = bp->bytesPerUserInputSample;
        if(!(bp->userInputSampleFormatIsEqualToHost == 0))
          tmp_if_expr$3 = bp->hostInputIsInterleaved != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (bp->hostInputChannels[(signed long int)0] + (signed long int)0)->data != NULL ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
          tmp_if_expr$5 = bp->inputChannelCount == (hostInputChannels + (signed long int)0)->stride ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
        {
          userInput = (hostInputChannels + (signed long int)0)->data;
          destBytePtr = (unsigned char *)(hostInputChannels + (signed long int)0)->data;
          skipInputConvert = 1;
        }

        else
          userInput = bp->tempInputBuffer;
      }

      else
      {
        destSampleStrideSamples = (unsigned int)1;
        destChannelStrideBytes = (unsigned int)(frameCount * (unsigned long int)bp->bytesPerUserInputSample);
        if(!(bp->userInputSampleFormatIsEqualToHost == 0))
          tmp_if_expr$6 = !(bp->hostInputIsInterleaved != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
          tmp_if_expr$7 = (bp->hostInputChannels[(signed long int)0] + (signed long int)0)->data != NULL ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$7 = (_Bool)0;
        if(tmp_if_expr$7)
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->inputChannelCount); i = i + 1u)
            bp->tempInputBufferPtrs[(signed long int)i] = (hostInputChannels + (signed long int)i)->data;
          skipInputConvert = 1;
        }

        else
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->inputChannelCount); i = i + 1u)
            bp->tempInputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempInputBuffer + (signed long int)((unsigned long int)(i * bp->bytesPerUserInputSample) * frameCount));
        }
        userInput = (void *)bp->tempInputBufferPtrs;
      }
      if(bp->hostInputChannels[0l]->data == NULL)
      {
        i = (unsigned int)0;
        if(!(i >= bp->inputChannelCount))
        {
          bp->inputZeroer((void *)destBytePtr, (signed int)destSampleStrideSamples, (unsigned int)frameCount);
          destBytePtr = destBytePtr + (signed long int)destChannelStrideBytes;
          i = i + 1u;
        }

      }

      else
        if(!(skipInputConvert == 0))
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->inputChannelCount); i = i + 1u)
            (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostInputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostInputSample));
        }

        else
        {
          i = (unsigned int)0;
          if(!(i >= bp->inputChannelCount))
          {
            bp->inputConverter((void *)destBytePtr, (signed int)destSampleStrideSamples, (hostInputChannels + (signed long int)i)->data, (signed int)(hostInputChannels + (signed long int)i)->stride, (unsigned int)frameCount, &bp->ditherGenerator);
            destBytePtr = destBytePtr + (signed long int)destChannelStrideBytes;
            (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostInputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostInputSample));
            i = i + 1u;
          }

        }
    }
    if(bp->outputChannelCount == 0u)
      userOutput = NULL;

    else
      if(!(bp->userOutputIsInterleaved == 0))
      {
        if(!(bp->userOutputSampleFormatIsEqualToHost == 0))
          tmp_if_expr$8 = bp->hostOutputIsInterleaved != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$8 = (_Bool)0;
        if(tmp_if_expr$8)
        {
          userOutput = (hostOutputChannels + (signed long int)0)->data;
          skipOutputConvert = 1;
        }

        else
          userOutput = bp->tempOutputBuffer;
      }

      else
      {
        if(!(bp->userOutputSampleFormatIsEqualToHost == 0))
          tmp_if_expr$9 = !(bp->hostOutputIsInterleaved != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$9 = (_Bool)0;
        if(tmp_if_expr$9)
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->outputChannelCount); i = i + 1u)
            bp->tempOutputBufferPtrs[(signed long int)i] = (hostOutputChannels + (signed long int)i)->data;
          skipOutputConvert = 1;
        }

        else
        {
          i = (unsigned int)0;
          for( ; !(i >= bp->outputChannelCount); i = i + 1u)
            bp->tempOutputBufferPtrs[(signed long int)i] = (void *)((unsigned char *)bp->tempOutputBuffer + (signed long int)((unsigned long int)(i * bp->bytesPerUserOutputSample) * frameCount));
        }
        userOutput = (void *)bp->tempOutputBufferPtrs;
      }
    *streamCallbackResult=bp->streamCallback(userInput, userOutput, frameCount, bp->timeInfo, bp->callbackStatusFlags, bp->userData);
    if(!(*streamCallbackResult == 2))
    {
      bp->timeInfo->inputBufferAdcTime = bp->timeInfo->inputBufferAdcTime + (double)frameCount * bp->samplePeriod;
      bp->timeInfo->outputBufferDacTime = bp->timeInfo->outputBufferDacTime + (double)frameCount * bp->samplePeriod;
      if(!(bp->outputChannelCount == 0u))
      {
        if(!(bp->hostOutputChannels[0l]->data == NULL))
        {
          if(!(skipOutputConvert == 0))
          {
            i = (unsigned int)0;
            if(!(i >= bp->outputChannelCount))
            {
              (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostOutputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostOutputSample));
              i = i + 1u;
            }

          }

          else
          {
            srcBytePtr = (unsigned char *)bp->tempOutputBuffer;
            if(!(bp->userOutputIsInterleaved == 0))
            {
              srcSampleStrideSamples = bp->outputChannelCount;
              srcChannelStrideBytes = bp->bytesPerUserOutputSample;
            }

            else
            {
              srcSampleStrideSamples = (unsigned int)1;
              srcChannelStrideBytes = (unsigned int)(frameCount * (unsigned long int)bp->bytesPerUserOutputSample);
            }
            i = (unsigned int)0;
            if(!(i >= bp->outputChannelCount))
            {
              bp->outputConverter((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (void *)srcBytePtr, (signed int)srcSampleStrideSamples, (unsigned int)frameCount, &bp->ditherGenerator);
              srcBytePtr = srcBytePtr + (signed long int)srcChannelStrideBytes;
              (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostOutputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostOutputSample));
              i = i + 1u;
            }

          }
        }

      }

      framesProcessed = framesProcessed + frameCount;
      framesToGo = framesToGo - frameCount;
    }

    if(framesToGo >= 1ul)
      tmp_if_expr$1 = *streamCallbackResult == 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
  }

  if(framesToGo >= 1ul)
  {
    frameCount = framesToGo;
    if(!(bp->outputChannelCount == 0u))
    {
      if(!(bp->hostOutputChannels[0l]->data == NULL))
      {
        i = (unsigned int)0;
        if(!(i >= bp->outputChannelCount))
        {
          bp->outputZeroer((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (unsigned int)frameCount);
          (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(frameCount * (unsigned long int)(hostOutputChannels + (signed long int)i)->stride * (unsigned long int)bp->bytesPerHostOutputSample));
          i = i + 1u;
        }

      }

    }

    framesProcessed = framesProcessed + frameCount;
  }

  return framesProcessed;
}

// OnExit
// file src/hostapi/alsa/pa_linux_alsa.c line 3383
static void OnExit(void *data)
{
  struct PaAlsaStream *stream = (struct PaAlsaStream *)data;
  /* assertion data */
  assert(data != NULL);
  PaUtil_ResetCpuLoadMeasurer(&stream->cpuLoadMeasurer);
  stream->callback_finished = 1;
  AlsaStop(stream, stream->callbackAbort);
  if(!(stream->streamRepresentation.streamFinishedCallback == ((void (*)(void *))NULL)))
    stream->streamRepresentation.streamFinishedCallback(stream->streamRepresentation.userData);

  stream->isActive = 0;
}

// OnExit$link1
// file src/hostapi/oss/pa_unix_oss.c line 1555
static void OnExit$link1(void *data$link1)
{
  struct PaOssStream *stream$link1 = (struct PaOssStream *)data$link1;
  /* assertion data */
  assert(data$link1 != NULL);
  PaUtil_ResetCpuLoadMeasurer(&stream$link1->cpuLoadMeasurer);
  PaOssStream_Stop(stream$link1, stream$link1->callbackAbort);
  if(!(stream$link1->streamRepresentation.streamFinishedCallback == ((void (*)(void *))NULL)))
    stream$link1->streamRepresentation.streamFinishedCallback(stream$link1->streamRepresentation.userData);

  stream$link1->callbackAbort = 0;
  stream$link1->isActive = 0;
}

// OpenDevices
// file src/hostapi/oss/pa_unix_oss.c line 811
static signed int OpenDevices(const char *idevName, const char *odevName, signed int *idev, signed int *odev)
{
  signed int result = 0;
  signed int flags = 04000;
  signed int duplex = 0;
  *odev = -1;
  *idev = *odev;
  if(!(idevName == ((const char *)NULL)) && !(odevName == ((const char *)NULL)))
  {
    duplex = 1;
    flags = flags | 02;
  }

  else
    if(!(idevName == ((const char *)NULL)))
      flags = flags | 00;

    else
      flags = flags | 01;
  /* assertion flags & 04000 */
  assert((flags & 04000) != 0);
  unsigned long int return_value_pthread_self$3;
  if(!(idevName == ((const char *)NULL)))
  {
    do
    {
      *idev=open(idevName, flags);
      sysErr_ = *idev;
      if(!(sysErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression '*idev = open( idevName, flags )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 832\n");
        result = -9985;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_$link1=ModifyBlocking(*idev, 1);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'ModifyBlocking( *idev, 1 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 833\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
  }

  unsigned long int return_value_pthread_self$6;
  unsigned long int return_value_pthread_self$9;
  if(!(odevName == ((const char *)NULL)))
  {
    if(idevName == ((const char *)NULL))
    {
      do
      {
        *odev=open(odevName, flags);
        sysErr_ = *odev;
        if(!(sysErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression '*odev = open( odevName, flags )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 839\n");
          result = -9985;
          goto error;
        }

      }
      while((_Bool)0);
      do
      {
        paUtilErr_$link1=ModifyBlocking(*odev, 1);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'ModifyBlocking( *odev, 1 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 840\n");
          result = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
    }

    else
      do
      {
        *odev=dup(*idev);
        sysErr_ = *odev;
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$9=pthread_self();
          if(return_value_pthread_self$9 == mainThread_$link1)
          {
            signed int *return_value___errno_location$7;
            return_value___errno_location$7=__errno_location();
            char *return_value_strerror$8;
            return_value_strerror$8=strerror(*return_value___errno_location$7);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$8);
          }

          PaUtil_DebugPrint("Expression '*odev = dup( *idev )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 844\n");
          result = -9999;
          break;
        }

      }
      while((_Bool)0);
  }


error:
  ;
  return result;
}

// OpenPcm
// file src/hostapi/alsa/pa_linux_alsa.c line 1122
static signed int OpenPcm(struct _snd_pcm **pcmp, const char *name, enum _snd_pcm_stream stream, signed int mode, signed int waitOnBusy)
{
  signed int ret;
  signed int tries = 0;
  signed int maxTries = waitOnBusy != 0 ? busyRetries_ : 0;
  ret=alsa_snd_pcm_open(pcmp, name, stream, mode);
  tries = 0;
  if(ret == -16 && !(tries >= maxTries))
  {
    Pa_Sleep((signed long int)10);
    ret=alsa_snd_pcm_open(pcmp, name, stream, mode);
    tries = tries + 1;
  }

  return ret;
}

// OpenStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 371
static signed int OpenStream(struct PaUtilHostApiRepresentation *hostApi, void **s, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData)
{
  signed int result = 0;
  struct anonymous$15 *skeletonHostApi = (struct anonymous$15 *)hostApi;
  struct PaSkeletonStream *stream = ((struct PaSkeletonStream *)NULL);
  unsigned long int framesPerHostBuffer = framesPerBuffer;
  signed int inputChannelCount;
  signed int outputChannelCount;
  unsigned long int inputSampleFormat;
  unsigned long int outputSampleFormat;
  unsigned long int hostInputSampleFormat;
  unsigned long int hostOutputSampleFormat;
  if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    inputChannelCount = inputParameters->channelCount;
    inputSampleFormat = inputParameters->sampleFormat;
    if(inputParameters->device == -2)
      return -9996;

    if(!(hostApi->deviceInfos[(signed long int)inputParameters->device]->maxInputChannels >= inputChannelCount))
      return -9998;

    if(!(inputParameters->hostApiSpecificStreamInfo == NULL))
      return -9984;

    hostInputSampleFormat=PaUtil_SelectClosestAvailableFormat((unsigned long int)0x00000008, inputSampleFormat);
  }

  else
  {
    inputChannelCount = 0;
    hostInputSampleFormat = (unsigned long int)0x00000008;
    inputSampleFormat = hostInputSampleFormat;
  }
  if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    outputChannelCount = outputParameters->channelCount;
    outputSampleFormat = outputParameters->sampleFormat;
    if(outputParameters->device == -2)
      return -9996;

    if(!(hostApi->deviceInfos[(signed long int)outputParameters->device]->maxOutputChannels >= outputChannelCount))
      return -9998;

    if(!(outputParameters->hostApiSpecificStreamInfo == NULL))
      return -9984;

    hostOutputSampleFormat=PaUtil_SelectClosestAvailableFormat((unsigned long int)0x00000008, outputSampleFormat);
  }

  else
  {
    outputChannelCount = 0;
    hostOutputSampleFormat = (unsigned long int)0x00000008;
    outputSampleFormat = hostOutputSampleFormat;
  }
  unsigned long int return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2;
  unsigned long int return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3;
  if(!((4294901760ul & streamFlags) == 0ul))
    return -9995;

  else
  {
    void *return_value_PaUtil_AllocateMemory$1;
    return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)sizeof(struct PaSkeletonStream) /*424ul*/ );
    stream = (struct PaSkeletonStream *)return_value_PaUtil_AllocateMemory$1;
    if(stream == ((struct PaSkeletonStream *)NULL))
      result = -9992;

    else
    {
      if(!(streamCallback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL)))
        PaUtil_InitializeStreamRepresentation(&stream->streamRepresentation, &skeletonHostApi->callbackStreamInterface, streamCallback, userData);

      else
        PaUtil_InitializeStreamRepresentation(&stream->streamRepresentation, &skeletonHostApi->blockingStreamInterface, streamCallback, userData);
      PaUtil_InitializeCpuLoadMeasurer(&stream->cpuLoadMeasurer, sampleRate);
      result=PaUtil_InitializeBufferProcessor(&stream->bufferProcessor, inputChannelCount, inputSampleFormat, hostInputSampleFormat, outputChannelCount, outputSampleFormat, hostOutputSampleFormat, sampleRate, streamFlags, framesPerBuffer, framesPerHostBuffer, (enum anonymous$12)paUtilFixedHostBufferSize, streamCallback, userData);
      if(result == 0)
      {
        return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2=PaUtil_GetBufferProcessorInputLatencyFrames(&stream->bufferProcessor);
        stream->streamRepresentation.streamInfo.inputLatency = (double)return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2 / sampleRate;
        return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3=PaUtil_GetBufferProcessorOutputLatencyFrames(&stream->bufferProcessor);
        stream->streamRepresentation.streamInfo.outputLatency = (double)return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3 / sampleRate;
        stream->streamRepresentation.streamInfo.sampleRate = sampleRate;
        stream->framesPerHostCallback = framesPerHostBuffer;
        *s = (void *)stream;
        return result;
      }

    }

  error:
    ;
    if(!(stream == ((struct PaSkeletonStream *)NULL)))
      PaUtil_FreeMemory((void *)stream);

    return result;
  }
}

// OpenStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2792
static signed int OpenStream$link1(struct PaUtilHostApiRepresentation *hostApi$link1, void **s$link1, const struct PaStreamParameters *inputParameters$link1, const struct PaStreamParameters *outputParameters$link1, double sampleRate$link1, unsigned long int framesPerBuffer$link1, unsigned long int streamFlags$link1, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link1)
{
  signed int result$link1 = 0;
  struct PaAlsaHostApiRepresentation *alsaHostApi = (struct PaAlsaHostApiRepresentation *)hostApi$link1;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)(void *)0;
  unsigned long int hostInputSampleFormat$link1 = (unsigned long int)0;
  unsigned long int hostOutputSampleFormat$link1 = (unsigned long int)0;
  unsigned long int inputSampleFormat$link1 = (unsigned long int)0;
  unsigned long int outputSampleFormat$link1 = (unsigned long int)0;
  signed int numInputChannels = 0;
  signed int numOutputChannels = 0;
  double inputLatency;
  double outputLatency;
  enum anonymous$12 hostBufferSizeMode = (enum anonymous$12)paUtilFixedHostBufferSize;
  char *return_value_getenv$3;
  unsigned long int return_value_PaUtil_GetBufferProcessorInputLatencyFrames$5;
  unsigned long int return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$6;
  if(!((4294901760ul & streamFlags$link1) == 0ul))
    return -9995;

  else
  {
    if(!(inputParameters$link1 == ((const struct PaStreamParameters *)NULL)))
    {
      do
      {
        paUtilErr_=ValidateParameters(inputParameters$link1, hostApi$link1, (enum anonymous$5)StreamDirection_In);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'ValidateParameters( inputParameters, hostApi, StreamDirection_In )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2818\n");
          result$link1 = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);
      numInputChannels = inputParameters$link1->channelCount;
      inputSampleFormat$link1 = inputParameters$link1->sampleFormat;
    }

    if(!(outputParameters$link1 == ((const struct PaStreamParameters *)NULL)))
    {
      do
      {
        paUtilErr_=ValidateParameters(outputParameters$link1, hostApi$link1, (enum anonymous$5)StreamDirection_Out);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'ValidateParameters( outputParameters, hostApi, StreamDirection_Out )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2825\n");
          result$link1 = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);
      numOutputChannels = outputParameters$link1->channelCount;
      outputSampleFormat$link1 = outputParameters$link1->sampleFormat;
    }

    if(framesPerBuffer$link1 == 0ul)
    {
      return_value_getenv$3=getenv("PA_ALSA_PERIODSIZE");
      if(!(return_value_getenv$3 == ((char *)NULL)))
      {
        char *return_value_getenv$1;
        return_value_getenv$1=getenv("PA_ALSA_PERIODSIZE");
        signed int return_value_atoi$2;
        return_value_atoi$2=atoi(return_value_getenv$1);
        framesPerBuffer$link1 = (unsigned long int)return_value_atoi$2;
      }

    }

    do
    {
      void *return_value_PaUtil_AllocateMemory$4;
      return_value_PaUtil_AllocateMemory$4=PaUtil_AllocateMemory((signed long int)sizeof(struct PaAlsaStream) /*928ul*/ );
      stream$link1 = (struct PaAlsaStream *)return_value_PaUtil_AllocateMemory$4;
      if(stream$link1 == ((struct PaAlsaStream *)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream = (PaAlsaStream*)PaUtil_AllocateMemory( sizeof(PaAlsaStream) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2838\n");
        result$link1 = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_=PaAlsaStream_Initialize(stream$link1, alsaHostApi, inputParameters$link1, outputParameters$link1, sampleRate$link1, framesPerBuffer$link1, callback, streamFlags$link1, userData$link1);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_Initialize( stream, alsaHostApi, inputParameters, outputParameters, sampleRate, framesPerBuffer, callback, streamFlags, userData )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2840\n");
        result$link1 = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_=PaAlsaStream_Configure(stream$link1, inputParameters$link1, outputParameters$link1, sampleRate$link1, framesPerBuffer$link1, &inputLatency, &outputLatency, &hostBufferSizeMode);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_Configure( stream, inputParameters, outputParameters, sampleRate, framesPerBuffer, &inputLatency, &outputLatency, &hostBufferSizeMode )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2843\n");
        result$link1 = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    hostInputSampleFormat$link1 = stream$link1->capture.hostSampleFormat | (!(stream$link1->capture.hostInterleaved != 0) ? (unsigned long int)0x80000000 : (unsigned long int)0);
    hostOutputSampleFormat$link1 = stream$link1->playback.hostSampleFormat | (!(stream$link1->playback.hostInterleaved != 0) ? (unsigned long int)0x80000000 : (unsigned long int)0);
    do
    {
      paUtilErr_=PaUtil_InitializeBufferProcessor(&stream$link1->bufferProcessor, numInputChannels, inputSampleFormat$link1, hostInputSampleFormat$link1, numOutputChannels, outputSampleFormat$link1, hostOutputSampleFormat$link1, sampleRate$link1, streamFlags$link1, framesPerBuffer$link1, stream$link1->maxFramesPerHostBuffer, hostBufferSizeMode, callback, userData$link1);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUtil_InitializeBufferProcessor( &stream->bufferProcessor, numInputChannels, inputSampleFormat, hostInputSampleFormat, numOutputChannels, outputSampleFormat, hostOutputSampleFormat, sampleRate, streamFlags, framesPerBuffer, stream->maxFramesPerHostBuffer, hostBufferSizeMode, callback, userData )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2851\n");
        result$link1 = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    if(numInputChannels >= 1)
    {
      return_value_PaUtil_GetBufferProcessorInputLatencyFrames$5=PaUtil_GetBufferProcessorInputLatencyFrames(&stream$link1->bufferProcessor);
      stream$link1->streamRepresentation.streamInfo.inputLatency = inputLatency + (double)((double)return_value_PaUtil_GetBufferProcessorInputLatencyFrames$5 / sampleRate$link1);
    }

    if(numOutputChannels >= 1)
    {
      return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$6=PaUtil_GetBufferProcessorOutputLatencyFrames(&stream$link1->bufferProcessor);
      stream$link1->streamRepresentation.streamInfo.outputLatency = outputLatency + (double)((double)return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$6 / sampleRate$link1);
    }

    *s$link1 = (void *)stream$link1;
    return result$link1;

  error:
    ;
    if(!(stream$link1 == ((struct PaAlsaStream *)NULL)))
      PaAlsaStream_Terminate(stream$link1);

    return result$link1;
  }
}

// OpenStream$link2
// file src/hostapi/jack/pa_jack.c line 1067
static signed int OpenStream$link2(struct PaUtilHostApiRepresentation *hostApi$link2, void **s$link2, const struct PaStreamParameters *inputParameters$link2, const struct PaStreamParameters *outputParameters$link2, double sampleRate$link2, unsigned long int framesPerBuffer$link2, unsigned long int streamFlags$link2, signed int (*streamCallback$link1)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link2)
{
  signed int result$link2 = 0;
  struct anonymous$21 *jackHostApi = (struct anonymous$21 *)hostApi$link2;
  struct PaJackStream *stream$link2 = (struct PaJackStream *)(void *)0;
  char *port_string;
  signed int return_value_jack_port_name_size$1;
  return_value_jack_port_name_size$1=jack_port_name_size();
  void *return_value_PaUtil_GroupAllocateMemory$2;
  return_value_PaUtil_GroupAllocateMemory$2=PaUtil_GroupAllocateMemory(jackHostApi->deviceInfoMemory, (signed long int)return_value_jack_port_name_size$1);
  port_string = (char *)return_value_PaUtil_GroupAllocateMemory$2;
  unsigned long int regexSz;
  signed int return_value_jack_client_name_size$3;
  return_value_jack_client_name_size$3=jack_client_name_size();
  regexSz = (unsigned long int)(return_value_jack_client_name_size$3 + 3);
  char *regex_pattern;
  void *return_value_PaUtil_GroupAllocateMemory$4;
  return_value_PaUtil_GroupAllocateMemory$4=PaUtil_GroupAllocateMemory(jackHostApi->deviceInfoMemory, (signed long int)regexSz);
  regex_pattern = (char *)return_value_PaUtil_GroupAllocateMemory$4;
  const char **jack_ports = (const char **)(void *)0;
  signed int i;
  signed int inputChannelCount$link1;
  signed int outputChannelCount$link1;
  double jackSr;
  unsigned int return_value_jack_get_sample_rate$5;
  return_value_jack_get_sample_rate$5=jack_get_sample_rate(jackHostApi->jack_client);
  jackSr = (const double)return_value_jack_get_sample_rate$5;
  unsigned long int inputSampleFormat$link2 = (unsigned long int)0;
  unsigned long int outputSampleFormat$link2 = (unsigned long int)0;
  signed int bpInitialized = 0;
  signed int srInitialized = 0;
  unsigned long int ofs;
  unsigned long int return_value_pthread_self$6;
  unsigned long int return_value_pthread_self$8;
  _Bool tmp_if_expr$9;
  unsigned long int return_value_pthread_self$12;
  unsigned long int return_value_pthread_self$14;
  unsigned long int return_value_pthread_self$15;
  _Bool tmp_if_expr$16;
  unsigned long int return_value_pthread_self$17;
  unsigned long int return_value_pthread_self$18;
  unsigned long int return_value_pthread_self$19;
  _Bool tmp_if_expr$20;
  unsigned long int return_value_pthread_self$21;
  unsigned long int return_value_pthread_self$22;
  unsigned long int return_value_pthread_self$23;
  unsigned int return_value_jack_port_get_latency$24;
  unsigned int return_value_jack_get_buffer_size$25;
  unsigned long int return_value_PaUtil_GetBufferProcessorInputLatencyFrames$26;
  unsigned int return_value_jack_port_get_latency$27;
  unsigned int return_value_jack_get_buffer_size$28;
  unsigned long int return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$29;
  unsigned long int return_value_pthread_self$30;
  if(!((4294901760ul & streamFlags$link2) == 0ul))
    return -9995;

  else
  {
    if(!((8ul & streamFlags$link2) == 0ul))
      streamFlags$link2 = streamFlags$link2 & ~((unsigned long int)0x00000008);

    if(!(inputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
    {
      inputChannelCount$link1 = inputParameters$link2->channelCount;
      inputSampleFormat$link2 = inputParameters$link2->sampleFormat;
      if(inputParameters$link2->device == -2)
        return -9996;

      if(!(hostApi$link2->deviceInfos[(signed long int)inputParameters$link2->device]->maxInputChannels >= inputChannelCount$link1))
        return -9998;

      if(!(inputParameters$link2->hostApiSpecificStreamInfo == NULL))
        return -9984;

    }

    else
      inputChannelCount$link1 = 0;
    if(!(outputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
    {
      outputChannelCount$link1 = outputParameters$link2->channelCount;
      outputSampleFormat$link2 = outputParameters$link2->sampleFormat;
      if(outputParameters$link2->device == -2)
        return -9996;

      if(!(hostApi$link2->deviceInfos[(signed long int)outputParameters$link2->device]->maxOutputChannels >= outputChannelCount$link1))
        return -9998;

      if(!(outputParameters$link2->hostApiSpecificStreamInfo == NULL))
        return -9984;

    }

    else
      outputChannelCount$link1 = 0;
    if(sampleRate$link2 + -jackSr > 0.000000 ? sampleRate$link2 + -jackSr > 1.000000 : -(sampleRate$link2 + -jackSr) > 1.000000)
      return -9997;

    else
    {
      do
      {
        void *return_value_PaUtil_AllocateMemory$7;
        return_value_PaUtil_AllocateMemory$7=PaUtil_AllocateMemory((signed long int)sizeof(struct PaJackStream) /*688ul*/ );
        stream$link2 = (struct PaJackStream *)return_value_PaUtil_AllocateMemory$7;
        if(stream$link2 == ((struct PaJackStream *)NULL))
        {
          PaUtil_DebugPrint("Expression 'stream = (PaJackStream*)PaUtil_AllocateMemory( sizeof(PaJackStream) )' failed in 'src/hostapi/jack/pa_jack.c', line: 1165\n");
          result$link2 = -9992;
          goto error;
        }

      }
      while((_Bool)0);
      do
      {
        signed int OpenStream$$1$$8$$paErr;
        OpenStream$$1$$8$$paErr=InitializeStream(stream$link2, jackHostApi, inputChannelCount$link1, outputChannelCount$link1);
        if(!(OpenStream$$1$$8$$paErr >= 0))
        {
          if(OpenStream$$1$$8$$paErr == -9999)
          {
            return_value_pthread_self$8=pthread_self();
            if(return_value_pthread_self$8 == mainThread_)
            {
              const char *err = jackErr_;
              if(err == ((const char *)NULL))
                err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
            }

          }

          PaUtil_DebugPrint("Expression 'InitializeStream( stream, jackHostApi, inputChannelCount, outputChannelCount )' failed in 'src/hostapi/jack/pa_jack.c', line: 1166\n");
          result$link2 = OpenStream$$1$$8$$paErr;
          goto error;
        }

      }
      while((_Bool)0);
      stream$link2->isBlockingStream = (signed int)!(streamCallback$link1 != ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL));
      if(!(stream$link2->isBlockingStream == 0))
      {
        float latency = (float)0.001;
        signed int minimum_buffer_frames = 0;
        if(!(inputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
          tmp_if_expr$9 = inputParameters$link2->suggestedLatency > (double)latency ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$9 = (_Bool)0;
        if(tmp_if_expr$9)
          latency = (float)inputParameters$link2->suggestedLatency;

        else
          if(!(outputParameters$link2 == ((const struct PaStreamParameters *)NULL)))
          {
            if(outputParameters$link2->suggestedLatency > (double)latency)
              latency = (float)outputParameters$link2->suggestedLatency;

          }

        unsigned int return_value_jack_get_sample_rate$10;
        return_value_jack_get_sample_rate$10=jack_get_sample_rate(jackHostApi->jack_client);
        minimum_buffer_frames = (signed int)(latency * (float)return_value_jack_get_sample_rate$10);
        if(!(minimum_buffer_frames >= 3 * jackHostApi->jack_buffer_size))
          minimum_buffer_frames = jackHostApi->jack_buffer_size * 3;

        BlockingBegin(stream$link2, minimum_buffer_frames);
        streamCallback$link1 = BlockingCallback;
        userData$link2 = (void *)stream$link2;
        PaUtil_InitializeStreamRepresentation(&stream$link2->streamRepresentation, &jackHostApi->blockingStreamInterface, streamCallback$link1, userData$link2);
      }

      else
        PaUtil_InitializeStreamRepresentation(&stream$link2->streamRepresentation, &jackHostApi->callbackStreamInterface, streamCallback$link1, userData$link2);
      srInitialized = 1;
      PaUtil_InitializeCpuLoadMeasurer(&stream$link2->cpuLoadMeasurer, jackSr);
      ofs = jackHostApi->inputBase;
      i = 0;
      for( ; !(i >= inputChannelCount$link1); i = i + 1)
      {
        signed int return_value_jack_port_name_size$11;
        return_value_jack_port_name_size$11=jack_port_name_size();
        snprintf(port_string, (unsigned long int)return_value_jack_port_name_size$11, "in_%lu", ofs + (unsigned long int)i);
        do
        {
          stream$link2->local_input_ports[(signed long int)i]=jack_port_register(jackHostApi->jack_client, port_string, "32 bit float mono audio", (unsigned long int)1, (unsigned long int)0);
          if(stream$link2->local_input_ports[(signed long int)i] == ((struct _jack_port *)NULL))
          {
            PaUtil_DebugPrint("Expression 'stream->local_input_ports[i] = jack_port_register( jackHostApi->jack_client, port_string, JACK_DEFAULT_AUDIO_TYPE, JackPortIsInput, 0 )' failed in 'src/hostapi/jack/pa_jack.c', line: 1217\n");
            result$link2 = -9992;
            goto error;
          }

        }
        while((_Bool)0);
      }
      jackHostApi->inputBase = jackHostApi->inputBase + (unsigned long int)inputChannelCount$link1;
      ofs = jackHostApi->outputBase;
      i = 0;
      for( ; !(i >= outputChannelCount$link1); i = i + 1)
      {
        signed int return_value_jack_port_name_size$13;
        return_value_jack_port_name_size$13=jack_port_name_size();
        snprintf(port_string, (unsigned long int)return_value_jack_port_name_size$13, "out_%lu", ofs + (unsigned long int)i);
        do
        {
          stream$link2->local_output_ports[(signed long int)i]=jack_port_register(jackHostApi->jack_client, port_string, "32 bit float mono audio", (unsigned long int)2, (unsigned long int)0);
          if(stream$link2->local_output_ports[(signed long int)i] == ((struct _jack_port *)NULL))
          {
            PaUtil_DebugPrint("Expression 'stream->local_output_ports[i] = jack_port_register( jackHostApi->jack_client, port_string, JACK_DEFAULT_AUDIO_TYPE, JackPortIsOutput, 0 )' failed in 'src/hostapi/jack/pa_jack.c', line: 1227\n");
            result$link2 = -9992;
            goto error;
          }

        }
        while((_Bool)0);
      }
      jackHostApi->outputBase = jackHostApi->outputBase + (unsigned long int)outputChannelCount$link1;
      if(inputChannelCount$link1 >= 1)
      {
        signed int OpenStream$$1$$13$$err = 0;
        snprintf(regex_pattern, regexSz, "%s:.*", hostApi$link2->deviceInfos[(signed long int)inputParameters$link2->device]->name);
        do
        {
          jack_ports=jack_get_ports(jackHostApi->jack_client, regex_pattern, "audio", (unsigned long int)2);
          if(jack_ports == ((const char **)NULL))
          {
            return_value_pthread_self$15=pthread_self();
            if(return_value_pthread_self$15 == mainThread_)
            {
              const char *OpenStream$$1$$13$$1$$1$$1$$err = jackErr_;
              if(OpenStream$$1$$13$$1$$1$$1$$err == ((const char *)NULL))
                OpenStream$$1$$13$$1$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, OpenStream$$1$$13$$1$$1$$1$$err);
            }

            PaUtil_DebugPrint("Expression 'jack_ports = jack_get_ports( jackHostApi->jack_client, regex_pattern, JACK_PORT_TYPE_FILTER, JackPortIsOutput )' failed in 'src/hostapi/jack/pa_jack.c', line: 1242\n");
            result$link2 = -9999;
            goto error;
          }

        }
        while((_Bool)0);
        i = 0;
        do
        {
          if(!(i >= inputChannelCount$link1))
            tmp_if_expr$16 = jack_ports[(signed long int)i] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$16 = (_Bool)0;
          if(!tmp_if_expr$16)
            break;

          stream$link2->remote_output_ports[(signed long int)i]=jack_port_by_name(jackHostApi->jack_client, jack_ports[(signed long int)i]);
          if(stream$link2->remote_output_ports[(signed long int)i] == ((struct _jack_port *)NULL))
          {
            OpenStream$$1$$13$$err = 1;
            break;
          }

          i = i + 1;
        }
        while((_Bool)1);
        free((void *)jack_ports);
        do
          if(!(OpenStream$$1$$13$$err == 0))
          {
            PaUtil_DebugPrint("Expression '!err' failed in 'src/hostapi/jack/pa_jack.c', line: 1253\n");
            result$link2 = -9992;
            goto error;
          }

        while((_Bool)0);
        do
          if(!(i == inputChannelCount$link1))
          {
            PaUtil_DebugPrint("Expression 'i == inputChannelCount' failed in 'src/hostapi/jack/pa_jack.c', line: 1256\n");
            result$link2 = -9986;
            goto error;
          }

        while((_Bool)0);
      }

      if(outputChannelCount$link1 >= 1)
      {
        signed int OpenStream$$1$$14$$err = 0;
        snprintf(regex_pattern, regexSz, "%s:.*", hostApi$link2->deviceInfos[(signed long int)outputParameters$link2->device]->name);
        do
        {
          jack_ports=jack_get_ports(jackHostApi->jack_client, regex_pattern, "audio", (unsigned long int)1);
          if(jack_ports == ((const char **)NULL))
          {
            return_value_pthread_self$19=pthread_self();
            if(return_value_pthread_self$19 == mainThread_)
            {
              const char *OpenStream$$1$$14$$1$$1$$1$$err = jackErr_;
              if(OpenStream$$1$$14$$1$$1$$1$$err == ((const char *)NULL))
                OpenStream$$1$$14$$1$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, OpenStream$$1$$14$$1$$1$$1$$err);
            }

            PaUtil_DebugPrint("Expression 'jack_ports = jack_get_ports( jackHostApi->jack_client, regex_pattern, JACK_PORT_TYPE_FILTER, JackPortIsInput )' failed in 'src/hostapi/jack/pa_jack.c', line: 1266\n");
            result$link2 = -9999;
            goto error;
          }

        }
        while((_Bool)0);
        i = 0;
        do
        {
          if(!(i >= outputChannelCount$link1))
            tmp_if_expr$20 = jack_ports[(signed long int)i] != ((const char *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$20 = (_Bool)0;
          if(!tmp_if_expr$20)
            break;

          stream$link2->remote_input_ports[(signed long int)i]=jack_port_by_name(jackHostApi->jack_client, jack_ports[(signed long int)i]);
          if(stream$link2->remote_input_ports[(signed long int)i] == ((struct _jack_port *)NULL))
          {
            OpenStream$$1$$14$$err = 1;
            break;
          }

          i = i + 1;
        }
        while((_Bool)1);
        free((void *)jack_ports);
        do
          if(!(OpenStream$$1$$14$$err == 0))
          {
            PaUtil_DebugPrint("Expression '!err' failed in 'src/hostapi/jack/pa_jack.c', line: 1277\n");
            result$link2 = -9992;
            goto error;
          }

        while((_Bool)0);
        do
          if(!(i == outputChannelCount$link1))
          {
            PaUtil_DebugPrint("Expression 'i == outputChannelCount' failed in 'src/hostapi/jack/pa_jack.c', line: 1280\n");
            result$link2 = -9986;
            goto error;
          }

        while((_Bool)0);
      }

      do
      {
        signed int paErr;
        paErr=PaUtil_InitializeBufferProcessor(&stream$link2->bufferProcessor, inputChannelCount$link1, inputSampleFormat$link2, (unsigned long int)0x00000001 | (unsigned long int)0x80000000, outputChannelCount$link1, outputSampleFormat$link2, (unsigned long int)0x00000001 | (unsigned long int)0x80000000, jackSr, streamFlags$link2, framesPerBuffer$link2, (unsigned long int)0, (enum anonymous$12)paUtilUnknownHostBufferSize, streamCallback$link1, userData$link2);
        if(!(paErr >= 0))
        {
          if(paErr == -9999)
          {
            return_value_pthread_self$23=pthread_self();
            if(return_value_pthread_self$23 == mainThread_)
            {
              const char *OpenStream$$1$$15$$1$$1$$err = jackErr_;
              if(OpenStream$$1$$15$$1$$1$$err == ((const char *)NULL))
                OpenStream$$1$$15$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, OpenStream$$1$$15$$1$$1$$err);
            }

          }

          PaUtil_DebugPrint("Expression 'PaUtil_InitializeBufferProcessor( &stream->bufferProcessor, inputChannelCount, inputSampleFormat, paFloat32 | paNonInterleaved, outputChannelCount, outputSampleFormat, paFloat32 | paNonInterleaved, jackSr, streamFlags, framesPerBuffer, 0, paUtilUnknownHostBufferSize, streamCallback, userData )' failed in 'src/hostapi/jack/pa_jack.c', line: 1297\n");
          result$link2 = paErr;
          goto error;
        }

      }
      while((_Bool)0);
      bpInitialized = 1;
      if(stream$link2->num_incoming_connections >= 1)
      {
        return_value_jack_port_get_latency$24=jack_port_get_latency(stream$link2->remote_output_ports[(signed long int)0]);
        return_value_jack_get_buffer_size$25=jack_get_buffer_size(jackHostApi->jack_client);
        return_value_PaUtil_GetBufferProcessorInputLatencyFrames$26=PaUtil_GetBufferProcessorInputLatencyFrames(&stream$link2->bufferProcessor);
        stream$link2->streamRepresentation.streamInfo.inputLatency = (double)((unsigned long int)(return_value_jack_port_get_latency$24 - return_value_jack_get_buffer_size$25) + return_value_PaUtil_GetBufferProcessorInputLatencyFrames$26) / sampleRate$link2;
      }

      if(stream$link2->num_outgoing_connections >= 1)
      {
        return_value_jack_port_get_latency$27=jack_port_get_latency(stream$link2->remote_input_ports[(signed long int)0]);
        return_value_jack_get_buffer_size$28=jack_get_buffer_size(jackHostApi->jack_client);
        return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$29=PaUtil_GetBufferProcessorOutputLatencyFrames(&stream$link2->bufferProcessor);
        stream$link2->streamRepresentation.streamInfo.outputLatency = (double)((unsigned long int)(return_value_jack_port_get_latency$27 - return_value_jack_get_buffer_size$28) + return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$29) / sampleRate$link2;
      }

      stream$link2->streamRepresentation.streamInfo.sampleRate = jackSr;
      stream$link2->t0=jack_frame_time(jackHostApi->jack_client);
      do
      {
        signed int OpenStream$$1$$16$$paErr;
        OpenStream$$1$$16$$paErr=AddStream(stream$link2);
        if(!(OpenStream$$1$$16$$paErr >= 0))
        {
          if(OpenStream$$1$$16$$paErr == -9999)
          {
            return_value_pthread_self$30=pthread_self();
            if(return_value_pthread_self$30 == mainThread_)
            {
              const char *OpenStream$$1$$16$$1$$1$$err = jackErr_;
              if(OpenStream$$1$$16$$1$$1$$err == ((const char *)NULL))
                OpenStream$$1$$16$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, OpenStream$$1$$16$$1$$1$$err);
            }

          }

          PaUtil_DebugPrint("Expression 'AddStream( stream )' failed in 'src/hostapi/jack/pa_jack.c', line: 1313\n");
          result$link2 = OpenStream$$1$$16$$paErr;
          goto error;
        }

      }
      while((_Bool)0);
      *s$link2 = (void *)stream$link2;
      return result$link2;

    error:
      ;
      if(!(stream$link2 == ((struct PaJackStream *)NULL)))
        CleanUpStream(stream$link2, srInitialized, bpInitialized);

      return result$link2;
    }
  }
}

// OpenStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1184
static signed int OpenStream$link3(struct PaUtilHostApiRepresentation *hostApi$link3, void **s$link3, const struct PaStreamParameters *inputParameters$link3, const struct PaStreamParameters *outputParameters$link3, double sampleRate$link3, unsigned long int framesPerBuffer$link3, unsigned long int streamFlags$link3, signed int (*streamCallback$link2)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData$link3)
{
  signed int result$link3 = 0;
  struct anonymous$1 *ossHostApi = (struct anonymous$1 *)hostApi$link3;
  struct PaOssStream *stream$link3 = (struct PaOssStream *)(void *)0;
  signed int inputChannelCount$link2 = 0;
  signed int outputChannelCount$link2 = 0;
  unsigned long int inputSampleFormat$link3 = (unsigned long int)0;
  unsigned long int outputSampleFormat$link3 = (unsigned long int)0;
  unsigned long int inputHostFormat = (unsigned long int)0;
  unsigned long int outputHostFormat = (unsigned long int)0;
  const struct PaDeviceInfo *inputDeviceInfo = ((const struct PaDeviceInfo *)NULL);
  const struct PaDeviceInfo *outputDeviceInfo = ((const struct PaDeviceInfo *)NULL);
  signed int bpInitialized$link1 = 0;
  double inLatency = 0.;
  double outLatency = 0.;
  signed int i$link1 = 0;
  if(!((4294901760ul & streamFlags$link3) == 0ul))
    return -9995;

  else
  {
    if(!(inputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
    {
      inputDeviceInfo = hostApi$link3->deviceInfos[(signed long int)inputParameters$link3->device];
      do
      {
        paUtilErr_$link1=ValidateParameters$link1(inputParameters$link3, inputDeviceInfo, (enum anonymous$4)StreamMode_In);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'ValidateParameters( inputParameters, inputDeviceInfo, StreamMode_In )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1213\n");
          result$link3 = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      inputChannelCount$link2 = inputParameters$link3->channelCount;
      inputSampleFormat$link3 = inputParameters$link3->sampleFormat;
    }

    if(!(outputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
    {
      outputDeviceInfo = hostApi$link3->deviceInfos[(signed long int)outputParameters$link3->device];
      do
      {
        paUtilErr_$link1=ValidateParameters$link1(outputParameters$link3, outputDeviceInfo, (enum anonymous$4)StreamMode_Out);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'ValidateParameters( outputParameters, outputDeviceInfo, StreamMode_Out )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1221\n");
          result$link3 = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      outputChannelCount$link2 = outputParameters$link3->channelCount;
      outputSampleFormat$link3 = outputParameters$link3->sampleFormat;
    }

    if(inputChannelCount$link2 >= 1 && outputChannelCount$link2 >= 1)
    {
      if(!(inputParameters$link3->device == outputParameters$link3->device))
        goto __CPROVER_DUMP_L8;

      if(inputParameters$link3->channelCount == outputParameters$link3->channelCount)
        goto __CPROVER_DUMP_L8;

      return -9998;
    }

    else
    {

    __CPROVER_DUMP_L8:
      ;
      if(!(framesPerBuffer$link3 == 0ul))
      {
        framesPerBuffer$link3 = framesPerBuffer$link3 & (unsigned long int)0x7fffffff;
        i$link1 = 1;
        for( ; !((unsigned long int)i$link1 >= framesPerBuffer$link3); i$link1 = i$link1 << 1)
          ;
        framesPerBuffer$link3 = (unsigned long int)i$link1;
      }

      do
      {
        void *return_value_PaUtil_AllocateMemory$1$link1;
        return_value_PaUtil_AllocateMemory$1$link1=PaUtil_AllocateMemory((signed long int)sizeof(struct PaOssStream) /*552ul*/ );
        stream$link3 = (struct PaOssStream *)return_value_PaUtil_AllocateMemory$1$link1;
        if(stream$link3 == ((struct PaOssStream *)NULL))
        {
          PaUtil_DebugPrint("Expression 'stream = (PaOssStream*)PaUtil_AllocateMemory( sizeof(PaOssStream) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1248\n");
          result$link3 = -9992;
          goto error;
        }

      }
      while((_Bool)0);
      do
      {
        paUtilErr_$link1=PaOssStream_Initialize(stream$link3, inputParameters$link3, outputParameters$link3, streamCallback$link2, userData$link3, streamFlags$link3, ossHostApi);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaOssStream_Initialize( stream, inputParameters, outputParameters, streamCallback, userData, streamFlags, ossHostApi )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1249\n");
          result$link3 = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      do
      {
        paUtilErr_$link1=PaOssStream_Configure(stream$link3, sampleRate$link3, framesPerBuffer$link3, &inLatency, &outLatency);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaOssStream_Configure( stream, sampleRate, framesPerBuffer, &inLatency, &outLatency )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1251\n");
          result$link3 = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      PaUtil_InitializeCpuLoadMeasurer(&stream$link3->cpuLoadMeasurer, sampleRate$link3);
      if(!(inputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
      {
        inputHostFormat = stream$link3->capture->hostFormat;
        unsigned long int return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2$link1;
        return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2$link1=PaUtil_GetBufferProcessorInputLatencyFrames(&stream$link3->bufferProcessor);
        stream$link3->streamRepresentation.streamInfo.inputLatency = inLatency + (double)return_value_PaUtil_GetBufferProcessorInputLatencyFrames$2$link1 / sampleRate$link3;
      }

      if(!(outputParameters$link3 == ((const struct PaStreamParameters *)NULL)))
      {
        outputHostFormat = stream$link3->playback->hostFormat;
        unsigned long int return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3$link1;
        return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3$link1=PaUtil_GetBufferProcessorOutputLatencyFrames(&stream$link3->bufferProcessor);
        stream$link3->streamRepresentation.streamInfo.outputLatency = outLatency + (double)return_value_PaUtil_GetBufferProcessorOutputLatencyFrames$3$link1 / sampleRate$link3;
      }

      do
      {
        paUtilErr_$link1=PaUtil_InitializeBufferProcessor(&stream$link3->bufferProcessor, inputChannelCount$link2, inputSampleFormat$link3, inputHostFormat, outputChannelCount$link2, outputSampleFormat$link3, outputHostFormat, sampleRate$link3, streamFlags$link3, framesPerBuffer$link3, stream$link3->framesPerHostBuffer, (enum anonymous$12)paUtilFixedHostBufferSize, streamCallback$link2, userData$link3);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaUtil_InitializeBufferProcessor( &stream->bufferProcessor, inputChannelCount, inputSampleFormat, inputHostFormat, outputChannelCount, outputSampleFormat, outputHostFormat, sampleRate, streamFlags, framesPerBuffer, stream->framesPerHostBuffer, paUtilFixedHostBufferSize, streamCallback, userData )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1275\n");
          result$link3 = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      bpInitialized$link1 = 1;
      *s$link3 = (void *)stream$link3;
      return result$link3;

    error:
      ;
      if(!(bpInitialized$link1 == 0))
        PaUtil_TerminateBufferProcessor(&stream$link3->bufferProcessor);

      if(!(stream$link3 == ((struct PaOssStream *)NULL)))
        PaOssStream_Terminate(stream$link3);

      return result$link3;
    }
  }
}

// Pa2AlsaFormat
// file src/hostapi/alsa/pa_linux_alsa.c line 1677
static enum _snd_pcm_format Pa2AlsaFormat(unsigned long int paFormat)
{
  switch(paFormat)
  {
    case (unsigned long int)0x00000001:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_FLOAT;
    case (unsigned long int)0x00000008:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_S16;
    case (unsigned long int)0x00000004:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_S24_3LE;
    case (unsigned long int)0x00000002:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_S32;
    case (unsigned long int)0x00000010:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_S8;
    case (unsigned long int)0x00000020:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_U8;
    default:
      return (enum _snd_pcm_format)SND_PCM_FORMAT_UNKNOWN;
  }
}

// Pa2OssFormat
// file src/hostapi/oss/pa_unix_oss.c line 928
static signed int Pa2OssFormat(unsigned long int paFormat, signed int *ossFormat)
{
  switch(paFormat)
  {
    case (unsigned long int)0x00000020:
    {
      *ossFormat = 0x00000008;
      break;
    }
    case (unsigned long int)0x00000010:
    {
      *ossFormat = 0x00000040;
      break;
    }
    case (unsigned long int)0x00000008:
    {
      *ossFormat = 0x00000010;
      break;
    }
    default:
      return -9986;
  }
  return 0;
}

// PaAlsaStreamComponent_BeginPolling
// file src/hostapi/alsa/pa_linux_alsa.c line 3636
static signed int PaAlsaStreamComponent_BeginPolling(struct anonymous$16 *self, struct pollfd *pfds)
{
  signed int result = 0;
  signed int ret;
  ret=alsa_snd_pcm_poll_descriptors(self->pcm, pfds, self->nfds);
  (void)ret;
  /* assertion ret == self->nfds */
  assert((unsigned int)ret == self->nfds);
  self->ready = 0;
  return result;
}

// PaAlsaStreamComponent_DetermineFramesPerBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2265
static signed int PaAlsaStreamComponent_DetermineFramesPerBuffer(struct anonymous$16 *self, const struct PaStreamParameters *params, unsigned long int framesPerUserBuffer, double sampleRate, struct _snd_pcm_hw_params *hwParams, signed int *accurate)
{
  signed int result = 0;
  unsigned long int bufferSize;
  unsigned long int framesPerHostBuffer;
  signed int dir = 0;
  bufferSize=PaAlsa_GetFramesPerHostBuffer(framesPerUserBuffer, params->suggestedLatency, sampleRate);
  unsigned int numPeriods = (unsigned int)numPeriods_;
  unsigned int maxPeriods = (unsigned int)0;
  unsigned int minPeriods = (unsigned int)numPeriods_;
  dir = 0;
  signed int __pa_unsure_error_id;
  __pa_unsure_error_id=alsa_snd_pcm_hw_params_get_periods_min(hwParams, &minPeriods, &dir);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$1=pthread_self();
    return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
    if(!(return_value_pthread_equal$2 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_periods_min( hwParams, &minPeriods, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2331\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$1$$2$$__pa_unsure_error_id;
  PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_periods_max(hwParams, &maxPeriods, &dir);
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  if(!(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$1$$2$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$3=pthread_self();
    return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
    if(!(return_value_pthread_equal$4 == 0))
    {
      const char *return_value_1;
      return_value_1=alsa_snd_strerror(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$1$$2$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$1$$2$$__pa_unsure_error_id, return_value_1);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_periods_max( hwParams, &maxPeriods, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2332\n");
    result = -9999;
  }

  /* assertion maxPeriods > 1 */
  assert(maxPeriods > (unsigned int)1);
  numPeriods = maxPeriods < (minPeriods > numPeriods ? minPeriods : numPeriods) ? maxPeriods : (minPeriods > numPeriods ? minPeriods : numPeriods);
  framesPerHostBuffer = bufferSize / (unsigned long int)numPeriods;
  signed int return_value_2;
  signed int return_value_5;
  if(!(framesPerUserBuffer == 0ul))
  {
    framesPerHostBuffer=PaAlsa_AlignForward(framesPerHostBuffer, framesPerUserBuffer);
    if(!(framesPerHostBuffer >= framesPerUserBuffer))
    {
      /* assertion framesPerUserBuffer % framesPerHostBuffer == 0 */
      assert(framesPerUserBuffer % framesPerHostBuffer == (unsigned long int)0);
      signed int return_value_4;
      return_value_4=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer, 0);
      if(!(return_value_4 >= 0))
      {
        signed int return_value_3;
        return_value_3=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer * (unsigned long int)2, 0);
        if(return_value_3 == 0)
          framesPerHostBuffer = framesPerHostBuffer * (unsigned long int)2;

        else
        {
          return_value_2=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer / (unsigned long int)2, 0);
          if(return_value_2 == 0)
            framesPerHostBuffer = framesPerHostBuffer / (unsigned long int)2;

        }
      }

    }

    else
    {
      /* assertion framesPerHostBuffer % framesPerUserBuffer == 0 */
      assert(framesPerHostBuffer % framesPerUserBuffer == (unsigned long int)0);
      signed int return_value_7;
      return_value_7=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer, 0);
      if(!(return_value_7 >= 0))
      {
        signed int return_value_6;
        return_value_6=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer + framesPerUserBuffer, 0);
        if(return_value_6 == 0)
          framesPerHostBuffer = framesPerHostBuffer + framesPerUserBuffer;

        else
        {
          return_value_5=alsa_snd_pcm_hw_params_test_period_size(self->pcm, hwParams, framesPerHostBuffer - framesPerUserBuffer, 0);
          if(return_value_5 == 0)
            framesPerHostBuffer = framesPerHostBuffer - framesPerUserBuffer;

        }
      }

    }
  }

  unsigned long int min = (unsigned long int)0;
  unsigned long int max = (unsigned long int)0;
  unsigned long int minmax_diff;
  signed int PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$1$$__pa_unsure_error_id;
  PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_min(hwParams, &min, (signed int *)(void *)0);
  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  if(!(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$1$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$5=pthread_self();
    return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
    if(!(return_value_pthread_equal$6 == 0))
    {
      const char *return_value_8;
      return_value_8=alsa_snd_strerror(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$1$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$1$$__pa_unsure_error_id, return_value_8);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_min( hwParams, &min, NULL )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2446\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$2$$__pa_unsure_error_id;
  PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_max(hwParams, &max, (signed int *)(void *)0);
  unsigned long int return_value_pthread_self$7;
  signed int return_value_pthread_equal$8;
  if(!(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$2$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$7=pthread_self();
    return_value_pthread_equal$8=pthread_equal(return_value_pthread_self$7, paUnixMainThread);
    if(!(return_value_pthread_equal$8 == 0))
    {
      const char *return_value_9;
      return_value_9=alsa_snd_strerror(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$2$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$2$$__pa_unsure_error_id, return_value_9);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_max( hwParams, &max, NULL )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2447\n");
    result = -9999;
  }

  minmax_diff = max - min;
  if(!(framesPerHostBuffer >= min))
    framesPerHostBuffer = minmax_diff == (unsigned long int)2 ? min + (unsigned long int)1 : min;

  else
    if(!(max >= framesPerHostBuffer))
      framesPerHostBuffer = minmax_diff == (unsigned long int)2 ? max - (unsigned long int)1 : max;

  dir = 0;
  signed int PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$5$$__pa_unsure_error_id;
  PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$5$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(self->pcm, hwParams, &framesPerHostBuffer, &dir);
  unsigned long int return_value_pthread_self$9;
  signed int return_value_pthread_equal$10;
  if(!(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$5$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$9=pthread_self();
    return_value_pthread_equal$10=pthread_equal(return_value_pthread_self$9, paUnixMainThread);
    if(!(return_value_pthread_equal$10 == 0))
    {
      const char *return_value_10;
      return_value_10=alsa_snd_strerror(PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$5$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_DetermineFramesPerBuffer$$1$$2$$5$$__pa_unsure_error_id, return_value_10);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( self->pcm, hwParams, &framesPerHostBuffer, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2468\n");
    result = -9999;
  }

  if(!(dir == 0))
    *accurate = 0;

  self->framesPerPeriod = framesPerHostBuffer;

error:
  ;
  return result;
}

// PaAlsaStreamComponent_DoChannelAdaption
// file src/hostapi/alsa/pa_linux_alsa.c line 3521
static signed int PaAlsaStreamComponent_DoChannelAdaption(struct anonymous$16 *self, struct anonymous$13 *bp, signed int numFrames)
{
  signed int result = 0;
  unsigned char *p;
  signed int i;
  signed int unusedChans = self->numHostChannels - self->numUserChannels;
  unsigned char *src;
  unsigned char *dst;
  signed int convertMono;
  _Bool tmp_if_expr$1;
  if(self->numHostChannels % 2 == 0)
    tmp_if_expr$1 = self->numUserChannels % 2 != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  convertMono = (signed int)tmp_if_expr$1;
  /* assertion StreamDirection_Out == self->streamDir */
  assert(StreamDirection_Out == (signed int)self->streamDir);
  unsigned char *tmp_if_expr$3;
  unsigned char *return_value_ExtractAddress$2;
  unsigned long int return_value_pthread_self$4;
  signed int return_value_pthread_equal$5;
  if(!(self->hostInterleaved == 0))
  {
    signed int swidth;
    signed long int return_value;
    return_value=alsa_snd_pcm_format_size(self->nativeFormat, (unsigned long int)1);
    swidth = (signed int)return_value;
    unsigned char *buffer;
    if(!(self->canMmap == 0))
    {
      return_value_ExtractAddress$2=ExtractAddress(self->channelAreas, self->offset);
      tmp_if_expr$3 = return_value_ExtractAddress$2;
    }

    else
      tmp_if_expr$3 = (unsigned char *)self->nonMmapBuffer;
    buffer = tmp_if_expr$3;
    p = buffer + (signed long int)(self->numUserChannels * swidth);
    if(!(convertMono == 0))
    {
      src = buffer + (signed long int)((self->numUserChannels - 1) * swidth);
      i = 0;
      if(!(i >= numFrames))
      {
        dst = src + (signed long int)swidth;
        memcpy((void *)dst, (const void *)src, (unsigned long int)swidth);
        src = src + (signed long int)(self->numHostChannels * swidth);
        i = i + 1;
      }

      p = p + (signed long int)swidth;
      unusedChans = unusedChans - 1;
    }

    if(unusedChans >= 1)
    {
      i = 0;
      if(!(i >= numFrames))
      {
        memset((void *)p, 0, (unsigned long int)(swidth * unusedChans));
        p = p + (signed long int)(self->numHostChannels * swidth);
        i = i + 1;
      }

    }

  }

  else
  {
    if(!(convertMono == 0))
    {
      signed int __pa_unsure_error_id;
      __pa_unsure_error_id=alsa_snd_pcm_area_copy(self->channelAreas + (signed long int)self->numUserChannels, self->offset, self->channelAreas + (signed long int)(self->numUserChannels - 1), self->offset, (unsigned int)numFrames, self->nativeFormat);
      if(!(__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$4=pthread_self();
        return_value_pthread_equal$5=pthread_equal(return_value_pthread_self$4, paUnixMainThread);
        if(!(return_value_pthread_equal$5 == 0))
        {
          const char *return_value_1;
          return_value_1=alsa_snd_strerror(__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_1);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_area_copy( self->channelAreas + self->numUserChannels, self->offset, self->channelAreas + ( self->numUserChannels - 1 ), self->offset, numFrames, self->nativeFormat )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3572\n");
        result = -9999;
      }

      unusedChans = unusedChans - 1;
    }

    if(unusedChans >= 1)
      alsa_snd_pcm_areas_silence(self->channelAreas + (signed long int)(self->numHostChannels - unusedChans), self->offset, (unsigned int)unusedChans, (unsigned long int)numFrames, self->nativeFormat);

  }

error:
  ;
  return result;
}

// PaAlsaStreamComponent_EndPolling
// file src/hostapi/alsa/pa_linux_alsa.c line 3654
static signed int PaAlsaStreamComponent_EndPolling(struct anonymous$16 *self, struct pollfd *pfds, signed int *shouldPoll, signed int *xrun)
{
  signed int result = 0;
  unsigned short int revents;
  signed int __pa_unsure_error_id;
  __pa_unsure_error_id=alsa_snd_pcm_poll_descriptors_revents(self->pcm, pfds, self->nfds, &revents);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$1=pthread_self();
    return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
    if(!(return_value_pthread_equal$2 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_poll_descriptors_revents( self->pcm, pfds, self->nfds, &revents )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3659\n");
    result = -9999;
  }

  if(!((signed int)revents == 0))
  {
    if(!((0x008 & (signed int)revents) == 0))
      *xrun = 1;

    else
      if(!((0x010 & (signed int)revents) == 0))
        *xrun = 1;

      else
        self->ready = 1;
    *shouldPoll = 0;
  }

  else
    if(!(self->useReventFix == 0))
    {
      self->ready = 1;
      *shouldPoll = 0;
    }


error:
  ;
  return result;
}

// PaAlsaStreamComponent_EndProcessing
// file src/hostapi/alsa/pa_linux_alsa.c line 3462
static signed int PaAlsaStreamComponent_EndProcessing(struct anonymous$16 *self, unsigned long int numFrames, signed int *xrun)
{
  signed int result = 0;
  signed int res = 0;
  signed long int return_value;
  signed long int return_value_3;
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(self->ready == 0))
  {
    if(self->canMmap == 0)
    {
      if((signed int)self->streamDir == StreamDirection_Out)
      {
        if(!(self->hostInterleaved == 0))
        {
          return_value=alsa_snd_pcm_writei(self->pcm, self->nonMmapBuffer, numFrames);
          res = (signed int)return_value;
        }

        else
        {
          const signed long int res$array_size0 = (signed long int)self->numHostChannels;
          void *bufs[res$array_size0];
          signed int bufsize;
          signed long int return_value_1;
          return_value_1=alsa_snd_pcm_format_size(self->nativeFormat, self->framesPerPeriod + (unsigned long int)1);
          bufsize = (signed int)return_value_1;
          unsigned char *buffer = (unsigned char *)self->nonMmapBuffer;
          signed int i = 0;
          if(!(i >= self->numHostChannels))
          {
            bufs[(signed long int)i] = (void *)buffer;
            buffer = buffer + (signed long int)bufsize;
            i = i + 1;
          }

          signed long int return_value_2;
          return_value_2=alsa_snd_pcm_writen(self->pcm, bufs, numFrames);
          res = (signed int)return_value_2;
        }
      }

    }

    if(!(self->canMmap == 0))
    {
      return_value_3=alsa_snd_pcm_mmap_commit(self->pcm, self->offset, numFrames);
      res = (signed int)return_value_3;
    }

    if(res == -86 || res == -32)
      *xrun = 1;

    else
      do
      {
        signed int __pa_unsure_error_id = res;
        if(!(__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$1=pthread_self();
          return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
          if(!(return_value_pthread_equal$2 == 0))
          {
            const char *return_value_4;
            return_value_4=alsa_snd_strerror(__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_4);
          }

          PaUtil_DebugPrint("Expression 'res' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3502\n");
          result = -9999;
          break;
        }

      }
      while((_Bool)0);
  }


end:

  error:
    ;
  return result;
}

// PaAlsaStreamComponent_FinishConfigure
// file src/hostapi/alsa/pa_linux_alsa.c line 2073
static signed int PaAlsaStreamComponent_FinishConfigure(struct anonymous$16 *self, struct _snd_pcm_hw_params *hwParams, const struct PaStreamParameters *params, signed int primeBuffers, double sampleRate, double *latency)
{
  signed int result = 0;
  struct _snd_pcm_sw_params *swParams;
  unsigned long int bufSz = (unsigned long int)0;
  *latency = -1.;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_sw_params_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&swParams) = (struct _snd_pcm_sw_params *)return_value___builtin_alloca$1;
  memset((void *)*(&swParams), 0, __alsa_alloca_size);
  bufSz = (unsigned long int)(params->suggestedLatency * sampleRate + (double)self->framesPerPeriod);
  signed int PaAlsaStreamComponent_FinishConfigure$$1$$2$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_buffer_size_near(self->pcm, hwParams, &bufSz);
  unsigned long int return_value_pthread_self$2;
  signed int return_value_pthread_equal$3;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$2$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$2=pthread_self();
    return_value_pthread_equal$3=pthread_equal(return_value_pthread_self$2, paUnixMainThread);
    if(!(return_value_pthread_equal$3 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$2$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$2$$__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_buffer_size_near( self->pcm, hwParams, &bufSz )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2084\n");
    result = -9999;
  }

  signed int r;
  r=alsa_snd_pcm_hw_params(self->pcm, hwParams);
  signed int PaAlsaStreamComponent_FinishConfigure$$1$$3$$1$$__pa_unsure_error_id = r;
  unsigned long int return_value_pthread_self$4;
  signed int return_value_pthread_equal$5;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$3$$1$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$4=pthread_self();
    return_value_pthread_equal$5=pthread_equal(return_value_pthread_self$4, paUnixMainThread);
    if(!(return_value_pthread_equal$5 == 0))
    {
      const char *return_value_1;
      return_value_1=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$3$$1$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$3$$1$$__pa_unsure_error_id, return_value_1);
    }

    PaUtil_DebugPrint("Expression 'r' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2097\n");
    result = -9999;
  }

  unsigned long int return_value_pthread_self$6;
  signed int return_value_pthread_equal$7;
  if(!(alsa_snd_pcm_hw_params_get_buffer_size == ((signed int (*)(const struct _snd_pcm_hw_params *, unsigned long int *))NULL)))
  {
    signed int PaAlsaStreamComponent_FinishConfigure$$1$$4$$1$$__pa_unsure_error_id;
    PaAlsaStreamComponent_FinishConfigure$$1$$4$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_buffer_size(hwParams, &self->alsaBufferSize);
    if(!(PaAlsaStreamComponent_FinishConfigure$$1$$4$$1$$__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$6=pthread_self();
      return_value_pthread_equal$7=pthread_equal(return_value_pthread_self$6, paUnixMainThread);
      if(!(return_value_pthread_equal$7 == 0))
      {
        const char *return_value_2;
        return_value_2=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$4$$1$$__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$4$$1$$__pa_unsure_error_id, return_value_2);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_buffer_size( hwParams, &self->alsaBufferSize )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2101\n");
      result = -9999;
    }

  }

  else
    self->alsaBufferSize = bufSz;
  *latency = (double)(self->alsaBufferSize - self->framesPerPeriod) / sampleRate;
  signed int PaAlsaStreamComponent_FinishConfigure$$1$$6$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$6$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_current(self->pcm, swParams);
  unsigned long int return_value_pthread_self$8;
  signed int return_value_pthread_equal$9;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$6$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$8=pthread_self();
    return_value_pthread_equal$9=pthread_equal(return_value_pthread_self$8, paUnixMainThread);
    if(!(return_value_pthread_equal$9 == 0))
    {
      const char *return_value_3;
      return_value_3=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$6$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$6$$__pa_unsure_error_id, return_value_3);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_current( self->pcm, swParams )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2112\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_FinishConfigure$$1$$7$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$7$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_start_threshold(self->pcm, swParams, self->framesPerPeriod);
  unsigned long int return_value_pthread_self$10;
  signed int return_value_pthread_equal$11;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$7$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$10=pthread_self();
    return_value_pthread_equal$11=pthread_equal(return_value_pthread_self$10, paUnixMainThread);
    if(!(return_value_pthread_equal$11 == 0))
    {
      const char *return_value_4;
      return_value_4=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$7$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$7$$__pa_unsure_error_id, return_value_4);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_start_threshold( self->pcm, swParams, self->framesPerPeriod )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2114\n");
    result = -9999;
  }

  signed int __pa_unsure_error_id;
  __pa_unsure_error_id=alsa_snd_pcm_sw_params_set_stop_threshold(self->pcm, swParams, self->alsaBufferSize);
  unsigned long int return_value_pthread_self$12;
  signed int return_value_pthread_equal$13;
  if(!(__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$12=pthread_self();
    return_value_pthread_equal$13=pthread_equal(return_value_pthread_self$12, paUnixMainThread);
    if(!(return_value_pthread_equal$13 == 0))
    {
      const char *return_value_5;
      return_value_5=alsa_snd_strerror(__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_5);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_stop_threshold( self->pcm, swParams, self->alsaBufferSize )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2115\n");
    result = -9999;
  }

  unsigned long int return_value_pthread_self$14;
  signed int return_value_pthread_equal$15;
  unsigned long int return_value_pthread_self$16;
  signed int return_value_pthread_equal$17;
  unsigned long int return_value_pthread_self$18;
  signed int return_value_pthread_equal$19;
  if(primeBuffers == 0)
  {
    unsigned long int boundary;
    signed int PaAlsaStreamComponent_FinishConfigure$$1$$9$$1$$__pa_unsure_error_id;
    PaAlsaStreamComponent_FinishConfigure$$1$$9$$1$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_get_boundary(swParams, &boundary);
    if(!(PaAlsaStreamComponent_FinishConfigure$$1$$9$$1$$__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$14=pthread_self();
      return_value_pthread_equal$15=pthread_equal(return_value_pthread_self$14, paUnixMainThread);
      if(!(return_value_pthread_equal$15 == 0))
      {
        const char *return_value_6;
        return_value_6=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$9$$1$$__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$9$$1$$__pa_unsure_error_id, return_value_6);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_get_boundary( swParams, &boundary )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2121\n");
      result = -9999;
    }

    signed int PaAlsaStreamComponent_FinishConfigure$$1$$9$$2$$__pa_unsure_error_id;
    PaAlsaStreamComponent_FinishConfigure$$1$$9$$2$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_silence_threshold(self->pcm, swParams, (unsigned long int)0);
    if(!(PaAlsaStreamComponent_FinishConfigure$$1$$9$$2$$__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$16=pthread_self();
      return_value_pthread_equal$17=pthread_equal(return_value_pthread_self$16, paUnixMainThread);
      if(!(return_value_pthread_equal$17 == 0))
      {
        const char *return_value_7;
        return_value_7=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$9$$2$$__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$9$$2$$__pa_unsure_error_id, return_value_7);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_silence_threshold( self->pcm, swParams, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2122\n");
      result = -9999;
    }

    signed int PaAlsaStreamComponent_FinishConfigure$$1$$9$$3$$__pa_unsure_error_id;
    PaAlsaStreamComponent_FinishConfigure$$1$$9$$3$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_silence_size(self->pcm, swParams, boundary);
    if(!(PaAlsaStreamComponent_FinishConfigure$$1$$9$$3$$__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$18=pthread_self();
      return_value_pthread_equal$19=pthread_equal(return_value_pthread_self$18, paUnixMainThread);
      if(!(return_value_pthread_equal$19 == 0))
      {
        const char *return_value_8;
        return_value_8=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$9$$3$$__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$9$$3$$__pa_unsure_error_id, return_value_8);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_silence_size( self->pcm, swParams, boundary )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2123\n");
      result = -9999;
    }

  }

  signed int PaAlsaStreamComponent_FinishConfigure$$1$$10$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$10$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_avail_min(self->pcm, swParams, self->framesPerPeriod);
  unsigned long int return_value_pthread_self$20;
  signed int return_value_pthread_equal$21;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$10$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$20=pthread_self();
    return_value_pthread_equal$21=pthread_equal(return_value_pthread_self$20, paUnixMainThread);
    if(!(return_value_pthread_equal$21 == 0))
    {
      const char *return_value_9;
      return_value_9=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$10$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$10$$__pa_unsure_error_id, return_value_9);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_avail_min( self->pcm, swParams, self->framesPerPeriod )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2126\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_FinishConfigure$$1$$11$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$11$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_xfer_align(self->pcm, swParams, (unsigned long int)1);
  unsigned long int return_value_pthread_self$22;
  signed int return_value_pthread_equal$23;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$11$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$22=pthread_self();
    return_value_pthread_equal$23=pthread_equal(return_value_pthread_self$22, paUnixMainThread);
    if(!(return_value_pthread_equal$23 == 0))
    {
      const char *return_value_10;
      return_value_10=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$11$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$11$$__pa_unsure_error_id, return_value_10);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_xfer_align( self->pcm, swParams, 1 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2127\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_FinishConfigure$$1$$12$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$12$$__pa_unsure_error_id=alsa_snd_pcm_sw_params_set_tstamp_mode(self->pcm, swParams, (enum _snd_pcm_tstamp)SND_PCM_TSTAMP_MMAP);
  unsigned long int return_value_pthread_self$24;
  signed int return_value_pthread_equal$25;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$12$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$24=pthread_self();
    return_value_pthread_equal$25=pthread_equal(return_value_pthread_self$24, paUnixMainThread);
    if(!(return_value_pthread_equal$25 == 0))
    {
      const char *return_value_11;
      return_value_11=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$12$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$12$$__pa_unsure_error_id, return_value_11);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params_set_tstamp_mode( self->pcm, swParams, SND_PCM_TSTAMP_ENABLE )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2128\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_FinishConfigure$$1$$13$$__pa_unsure_error_id;
  PaAlsaStreamComponent_FinishConfigure$$1$$13$$__pa_unsure_error_id=alsa_snd_pcm_sw_params(self->pcm, swParams);
  unsigned long int return_value_pthread_self$26;
  signed int return_value_pthread_equal$27;
  if(!(PaAlsaStreamComponent_FinishConfigure$$1$$13$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$26=pthread_self();
    return_value_pthread_equal$27=pthread_equal(return_value_pthread_self$26, paUnixMainThread);
    if(!(return_value_pthread_equal$27 == 0))
    {
      const char *return_value_12;
      return_value_12=alsa_snd_strerror(PaAlsaStreamComponent_FinishConfigure$$1$$13$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_FinishConfigure$$1$$13$$__pa_unsure_error_id, return_value_12);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_sw_params( self->pcm, swParams )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2131\n");
    result = -9999;
  }


error:
  ;
  return result;
}

// PaAlsaStreamComponent_GetAvailableFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3612
static signed int PaAlsaStreamComponent_GetAvailableFrames(struct anonymous$16 *self, unsigned long int *numFrames, signed int *xrunOccurred)
{
  signed int result = 0;
  signed long int framesAvail;
  framesAvail=alsa_snd_pcm_avail_update(self->pcm);
  *xrunOccurred = 0;
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(framesAvail == -32l)
  {
    *xrunOccurred = 1;
    framesAvail = (signed long int)0;
  }

  else
  {
    signed int __pa_unsure_error_id = (signed int)framesAvail;
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$1=pthread_self();
      return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
      if(!(return_value_pthread_equal$2 == 0))
      {
        const char *return_value;
        return_value=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
      }

      PaUtil_DebugPrint("Expression 'framesAvail' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3625\n");
      result = -9999;
    }

  }
  *numFrames = (unsigned long int)framesAvail;

error:
  ;
  return result;
}

// PaAlsaStreamComponent_InitialConfigure
// file src/hostapi/alsa/pa_linux_alsa.c line 1958
static signed int PaAlsaStreamComponent_InitialConfigure(struct anonymous$16 *self, const struct PaStreamParameters *params, signed int primeBuffers, struct _snd_pcm_hw_params *hwParams, double *sampleRate)
{
  signed int result = 0;
  enum _snd_pcm_access accessMode;
  enum _snd_pcm_access alternateAccessMode;
  signed int dir = 0;
  struct _snd_pcm *pcm = self->pcm;
  double sr = *sampleRate;
  unsigned int minPeriods = (unsigned int)2;
  signed int PaAlsaStreamComponent_InitialConfigure$$1$$1$$__pa_unsure_error_id;
  PaAlsaStreamComponent_InitialConfigure$$1$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_any(pcm, hwParams);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(PaAlsaStreamComponent_InitialConfigure$$1$$1$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$1=pthread_self();
    return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
    if(!(return_value_pthread_equal$2 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(PaAlsaStreamComponent_InitialConfigure$$1$$1$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_InitialConfigure$$1$$1$$__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_any( pcm, hwParams )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1979\n");
    result = -9999;
  }

  signed int PaAlsaStreamComponent_InitialConfigure$$1$$2$$__pa_unsure_error_id;
  PaAlsaStreamComponent_InitialConfigure$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_periods_integer(pcm, hwParams);
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  if(!(PaAlsaStreamComponent_InitialConfigure$$1$$2$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$3=pthread_self();
    return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
    if(!(return_value_pthread_equal$4 == 0))
    {
      const char *return_value_1;
      return_value_1=alsa_snd_strerror(PaAlsaStreamComponent_InitialConfigure$$1$$2$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_InitialConfigure$$1$$2$$__pa_unsure_error_id, return_value_1);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_periods_integer( pcm, hwParams )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1981\n");
    result = -9999;
  }

  dir = 0;
  signed int PaAlsaStreamComponent_InitialConfigure$$1$$3$$__pa_unsure_error_id;
  PaAlsaStreamComponent_InitialConfigure$$1$$3$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_periods_min(pcm, hwParams, &minPeriods, &dir);
  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  if(!(PaAlsaStreamComponent_InitialConfigure$$1$$3$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$5=pthread_self();
    return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
    if(!(return_value_pthread_equal$6 == 0))
    {
      const char *return_value_2;
      return_value_2=alsa_snd_strerror(PaAlsaStreamComponent_InitialConfigure$$1$$3$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_InitialConfigure$$1$$3$$__pa_unsure_error_id, return_value_2);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_periods_min( pcm, hwParams, &minPeriods, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1984\n");
    result = -9999;
  }

  _Bool tmp_if_expr$7;
  signed int return_value_4;
  _Bool tmp_if_expr$8;
  signed int return_value_6;
  if(!(self->userInterleaved == 0))
  {
    accessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_MMAP_INTERLEAVED;
    alternateAccessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_MMAP_NONINTERLEAVED;
    signed int return_value_3;
    return_value_3=alsa_snd_pcm_hw_params_test_access(pcm, hwParams, accessMode);
    if(return_value_3 >= 0)
      tmp_if_expr$7 = (_Bool)1;

    else
    {
      return_value_4=alsa_snd_pcm_hw_params_test_access(pcm, hwParams, alternateAccessMode);
      tmp_if_expr$7 = return_value_4 >= 0 ? (_Bool)1 : (_Bool)0;
    }
    self->canMmap = (signed int)tmp_if_expr$7;
    if(self->canMmap == 0)
    {
      accessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_RW_INTERLEAVED;
      alternateAccessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_RW_NONINTERLEAVED;
    }

  }

  else
  {
    accessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_MMAP_NONINTERLEAVED;
    alternateAccessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_MMAP_INTERLEAVED;
    signed int return_value_5;
    return_value_5=alsa_snd_pcm_hw_params_test_access(pcm, hwParams, accessMode);
    if(return_value_5 >= 0)
      tmp_if_expr$8 = (_Bool)1;

    else
    {
      return_value_6=alsa_snd_pcm_hw_params_test_access(pcm, hwParams, alternateAccessMode);
      tmp_if_expr$8 = return_value_6 >= 0 ? (_Bool)1 : (_Bool)0;
    }
    self->canMmap = (signed int)tmp_if_expr$8;
    if(self->canMmap == 0)
    {
      accessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_RW_NONINTERLEAVED;
      alternateAccessMode = (enum _snd_pcm_access)SND_PCM_ACCESS_RW_INTERLEAVED;
    }

  }
  signed int return_value_8;
  return_value_8=alsa_snd_pcm_hw_params_set_access(pcm, hwParams, accessMode);
  if(!(return_value_8 >= 0))
  {
    signed int err = 0;
    err=alsa_snd_pcm_hw_params_set_access(pcm, hwParams, alternateAccessMode);
    if(!(err >= 0))
    {
      result = -9999;
      const char *return_value_7;
      return_value_7=alsa_snd_strerror(err);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)err, return_value_7);
    }

    self->hostInterleaved = (signed int)!(self->userInterleaved != 0);
  }

  signed int __pa_unsure_error_id;
  __pa_unsure_error_id=alsa_snd_pcm_hw_params_set_format(pcm, hwParams, self->nativeFormat);
  unsigned long int return_value_pthread_self$9;
  signed int return_value_pthread_equal$10;
  if(!(__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$9=pthread_self();
    return_value_pthread_equal$10=pthread_equal(return_value_pthread_self$9, paUnixMainThread);
    if(!(return_value_pthread_equal$10 == 0))
    {
      const char *return_value_9;
      return_value_9=alsa_snd_strerror(__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_9);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_format( pcm, hwParams, self->nativeFormat )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2040\n");
    result = -9999;
  }

  result=SetApproximateSampleRate(pcm, hwParams, sr);
  unsigned long int return_value_pthread_self$11;
  signed int return_value_pthread_equal$12;
  if(!(result == -9999))
  {
    signed int PaAlsaStreamComponent_InitialConfigure$$1$$8$$1$$__pa_unsure_error_id;
    PaAlsaStreamComponent_InitialConfigure$$1$$8$$1$$__pa_unsure_error_id=GetExactSampleRate(hwParams, &sr);
    if(!(PaAlsaStreamComponent_InitialConfigure$$1$$8$$1$$__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$11=pthread_self();
      return_value_pthread_equal$12=pthread_equal(return_value_pthread_self$11, paUnixMainThread);
      if(!(return_value_pthread_equal$12 == 0))
      {
        const char *return_value_10;
        return_value_10=alsa_snd_strerror(PaAlsaStreamComponent_InitialConfigure$$1$$8$$1$$__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStreamComponent_InitialConfigure$$1$$8$$1$$__pa_unsure_error_id, return_value_10);
      }

      PaUtil_DebugPrint("Expression 'GetExactSampleRate( hwParams, &sr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2044\n");
      result = -9999;
    }

    if(result == -9997)
    {
      paUtilErr_ = -9997;
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'paInvalidSampleRate' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2048\n");
        result = paUtilErr_;
      }

    }

  }

  else
  {
    paUtilErr_ = -9999;
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'paUnanticipatedHostError' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2053\n");
      result = paUtilErr_;
    }

  }
  signed int PaAlsaStreamComponent_InitialConfigure$$1$$10$$__pa_unsure_error_id;
  PaAlsaStreamComponent_InitialConfigure$$1$$10$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_channels(pcm, hwParams, (unsigned int)self->numHostChannels);
  unsigned long int return_value_pthread_self$13;
  signed int return_value_pthread_equal$14;
  if(!(PaAlsaStreamComponent_InitialConfigure$$1$$10$$__pa_unsure_error_id >= 0))
  {
    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_channels( pcm, hwParams, self->numHostChannels )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2056\n");
    result = -9998;
  }

  *sampleRate = sr;

end:
  ;
  return result;

error:
  ;
}

// PaAlsaStreamComponent_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 1872
static signed int PaAlsaStreamComponent_Initialize(struct anonymous$16 *self, struct PaAlsaHostApiRepresentation *alsaApi, const struct PaStreamParameters *params, enum anonymous$5 streamDir, signed int callbackMode)
{
  signed int result = 0;
  unsigned long int userSampleFormat = params->sampleFormat;
  unsigned long int hostSampleFormat = (unsigned long int)0;
  struct _snd_pcm_info *pcmInfo;
  /* assertion params->channelCount > 0 */
  assert(params->channelCount > 0);
  memset((void *)self, 0, sizeof(struct anonymous$16) /*136ul*/ );
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$3;
  signed int tmp_if_expr$2;
  if(params->hostApiSpecificStreamInfo == NULL)
  {
    const struct PaAlsaDeviceInfo *devInfo;
    devInfo=GetDeviceInfo(&alsaApi->baseHostApiRep, params->device);
    if((signed int)streamDir == StreamDirection_In)
      tmp_if_expr$1 = devInfo->minInputChannels;

    else
      tmp_if_expr$1 = devInfo->minOutputChannels;
    if(!(tmp_if_expr$1 >= params->channelCount))
      tmp_if_expr$3 = params->channelCount;

    else
    {
      if((signed int)streamDir == StreamDirection_In)
        tmp_if_expr$2 = devInfo->minInputChannels;

      else
        tmp_if_expr$2 = devInfo->minOutputChannels;
      tmp_if_expr$3 = tmp_if_expr$2;
    }
    self->numHostChannels = tmp_if_expr$3;
    self->deviceIsPlug = devInfo->isPlug;
  }

  else
  {
    self->numHostChannels = params->channelCount;
    signed int return_value_strncmp$4;
    return_value_strncmp$4=strncmp("hw:", ((struct PaAlsaStreamInfo *)params->hostApiSpecificStreamInfo)->deviceString, (unsigned long int)3);
    if(!(return_value_strncmp$4 == 0))
      self->deviceIsPlug = 1;

  }
  if(!(self->deviceIsPlug == 0))
  {
    if(!(alsaApi->alsaLibVersion >= 65552u))
      self->useReventFix = 1;

  }

  self->device = params->device;
  do
  {
    paUtilErr_=AlsaOpen(&alsaApi->baseHostApiRep, params, streamDir, &self->pcm);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'AlsaOpen( &alsaApi->baseHostApiRep, params, streamDir, &self->pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1904\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    unsigned long int return_value_snd_pcm_info_sizeof$5;
    return_value_snd_pcm_info_sizeof$5=snd_pcm_info_sizeof();
    void *return_value___builtin_alloca$6;
    return_value___builtin_alloca$6=__builtin_alloca(return_value_snd_pcm_info_sizeof$5);
    *(&pcmInfo) = (struct _snd_pcm_info *)return_value___builtin_alloca$6;
    unsigned long int return_value_snd_pcm_info_sizeof$7;
    return_value_snd_pcm_info_sizeof$7=snd_pcm_info_sizeof();
    memset((void *)*(&pcmInfo), 0, return_value_snd_pcm_info_sizeof$7);
  }
  while((_Bool)0);
  self->card=snd_pcm_info_get_card(pcmInfo);
  signed int return_value;
  return_value=alsa_snd_pcm_poll_descriptors_count(self->pcm);
  self->nfds = (unsigned int)return_value;
  unsigned long int return_value_GetAvailableFormats$8;
  return_value_GetAvailableFormats$8=GetAvailableFormats(self->pcm);
  hostSampleFormat=PaUtil_SelectClosestAvailableFormat(return_value_GetAvailableFormats$8, userSampleFormat);
  paUtilErr_ = (signed int)hostSampleFormat;
  if(!(paUtilErr_ >= 0))
  {
    PaUtil_DebugPrint("Expression 'hostSampleFormat = PaUtil_SelectClosestAvailableFormat( GetAvailableFormats( self->pcm ), userSampleFormat )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1910\n");
    result = paUtilErr_;
  }

  else
  {
    self->hostSampleFormat = hostSampleFormat;
    self->nativeFormat=Pa2AlsaFormat(hostSampleFormat);
    self->userInterleaved = (signed int)!((userSampleFormat & (unsigned long int)0x80000000) != 0ul);
    self->hostInterleaved = self->userInterleaved;
    self->numUserChannels = params->channelCount;
    self->streamDir = streamDir;
    self->canMmap = 0;
    self->nonMmapBuffer = (void *)0;
    self->nonMmapBufferSize = (unsigned int)0;
    if(callbackMode == 0)
    {
      if(self->userInterleaved == 0)
      {
        void *return_value_PaUtil_AllocateMemory$9;
        return_value_PaUtil_AllocateMemory$9=PaUtil_AllocateMemory((signed long int)(sizeof(void *) /*8ul*/  * (unsigned long int)self->numUserChannels));
        self->userBuffers = (void **)return_value_PaUtil_AllocateMemory$9;
        if(self->userBuffers == ((void **)NULL))
        {
          PaUtil_DebugPrint("Expression 'self->userBuffers = PaUtil_AllocateMemory( sizeof (void *) * self->numUserChannels )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1925\n");
          result = -9992;
        }

      }

    }

  }

error:
  ;
  if(hostSampleFormat == 18446744073709541622ul)
    LogAllAvailableFormats(self->pcm);

  return result;
}

// PaAlsaStreamComponent_RegisterChannels
// file src/hostapi/alsa/pa_linux_alsa.c line 3947
static signed int PaAlsaStreamComponent_RegisterChannels(struct anonymous$16 *self, struct anonymous$13 *bp, unsigned long int *numFrames, signed int *xrun)
{
  signed int result = 0;
  const struct _snd_pcm_channel_area *areas;
  const struct _snd_pcm_channel_area *area;
  void (*setChannel)(struct anonymous$13 *, unsigned int, void *, unsigned int) = StreamDirection_In == (signed int)self->streamDir ? PaUtil_SetInputChannel : PaUtil_SetOutputChannel;
  unsigned char *buffer;
  unsigned char *p;
  signed int i;
  unsigned long int framesAvail;
  do
  {
    paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(self, &framesAvail, xrun);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( self, &framesAvail, xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3959\n");
      result = paUtilErr_;
      goto end;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  unsigned char *tmp_if_expr$4;
  unsigned char *return_value_ExtractAddress$3;
  signed long int return_value_3;
  if(!(*xrun == 0))
    *numFrames = (unsigned long int)0;

  else
  {
    if(!(self->canMmap == 0))
    {
      signed int __pa_unsure_error_id;
      __pa_unsure_error_id=alsa_snd_pcm_mmap_begin(self->pcm, &areas, &self->offset, numFrames);
      if(!(__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$1=pthread_self();
        return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
        if(!(return_value_pthread_equal$2 == 0))
        {
          const char *return_value;
          return_value=alsa_snd_strerror(__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_mmap_begin( self->pcm, &areas, &self->offset, numFrames )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3968\n");
        result = -9999;
      }

      self->channelAreas = (struct _snd_pcm_channel_area *)areas;
    }

    else
    {
      unsigned int bufferSize;
      signed long int return_value_1;
      return_value_1=alsa_snd_pcm_format_size(self->nativeFormat, *numFrames);
      bufferSize = (unsigned int)((signed long int)self->numHostChannels * return_value_1);
      if(!(self->nonMmapBufferSize >= bufferSize))
      {
        self->nonMmapBufferSize = bufferSize;
        self->nonMmapBuffer=realloc(self->nonMmapBuffer, (unsigned long int)self->nonMmapBufferSize);
        if(self->nonMmapBuffer == NULL)
          result = -9992;

      }

    }
    if(!(self->hostInterleaved == 0))
    {
      signed int swidth;
      signed long int return_value_2;
      return_value_2=alsa_snd_pcm_format_size(self->nativeFormat, (unsigned long int)1);
      swidth = (signed int)return_value_2;
      if(!(self->canMmap == 0))
      {
        return_value_ExtractAddress$3=ExtractAddress(areas, self->offset);
        tmp_if_expr$4 = return_value_ExtractAddress$3;
      }

      else
        tmp_if_expr$4 = (unsigned char *)self->nonMmapBuffer;
      buffer = tmp_if_expr$4;
      p = buffer;
      i = 0;
      if(!(i >= self->numUserChannels))
      {
        setChannel(bp, (unsigned int)i, (void *)p, (unsigned int)self->numHostChannels);
        p = p + (signed long int)swidth;
        i = i + 1;
      }

    }

    else
      if(!(self->canMmap == 0))
      {
        i = 0;
        if(!(i >= self->numUserChannels))
        {
          area = areas + (signed long int)i;
          buffer=ExtractAddress(area, self->offset);
          setChannel(bp, (unsigned int)i, (void *)buffer, (unsigned int)1);
          i = i + 1;
        }

      }

      else
      {
        unsigned int buf_per_ch_size = self->nonMmapBufferSize / (unsigned int)self->numHostChannels;
        buffer = (unsigned char *)self->nonMmapBuffer;
        i = 0;
        if(!(i >= self->numUserChannels))
        {
          setChannel(bp, (unsigned int)i, (void *)buffer, (unsigned int)1);
          buffer = buffer + (signed long int)buf_per_ch_size;
          i = i + 1;
        }

      }
    if(self->canMmap == 0)
    {
      if((signed int)self->streamDir == StreamDirection_In)
      {
        signed int res;
        if(!(self->hostInterleaved == 0))
        {
          return_value_3=alsa_snd_pcm_readi(self->pcm, self->nonMmapBuffer, *numFrames);
          res = (signed int)return_value_3;
        }

        else
        {
          const signed long int res$array_size0 = (signed long int)self->numHostChannels;
          void *bufs[res$array_size0];
          unsigned int PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buf_per_ch_size = self->nonMmapBufferSize / (unsigned int)self->numHostChannels;
          unsigned char *PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buffer = (unsigned char *)self->nonMmapBuffer;
          signed int PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$i = 0;
          if(!(PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$i >= self->numHostChannels))
          {
            bufs[(signed long int)PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$i] = (void *)PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buffer;
            PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buffer = PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buffer + (signed long int)PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$buf_per_ch_size;
            PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$i = PaAlsaStreamComponent_RegisterChannels$$1$$7$$1$$i + 1;
          }

          signed long int return_value_4;
          return_value_4=alsa_snd_pcm_readn(self->pcm, bufs, *numFrames);
          res = (signed int)return_value_4;
        }
        if(res == -86 || res == -32)
        {
          *xrun = 1;
          *numFrames = (unsigned long int)0;
        }

      }

    }

  }

end:

  error:
    ;
  return result;
}

// PaAlsaStreamComponent_Terminate
// file src/hostapi/alsa/pa_linux_alsa.c line 1940
static void PaAlsaStreamComponent_Terminate(struct anonymous$16 *self)
{
  alsa_snd_pcm_close(self->pcm);
  PaUtil_FreeMemory((void *)self->userBuffers);
  PaUtil_FreeMemory(self->nonMmapBuffer);
}

// PaAlsaStream_Configure
// file src/hostapi/alsa/pa_linux_alsa.c line 2706
static signed int PaAlsaStream_Configure(struct PaAlsaStream *self, const struct PaStreamParameters *inParams, const struct PaStreamParameters *outParams, double sampleRate, unsigned long int framesPerUserBuffer, double *inputLatency, double *outputLatency, enum anonymous$12 *hostBufferSizeMode)
{
  signed int result = 0;
  double realSr = sampleRate;
  struct _snd_pcm_hw_params *hwParamsCapture;
  struct _snd_pcm_hw_params *hwParamsPlayback;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&hwParamsCapture) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$1;
  memset((void *)*(&hwParamsCapture), 0, __alsa_alloca_size);
  unsigned long int PaAlsaStream_Configure$$1$$2$$__alsa_alloca_size;
  PaAlsaStream_Configure$$1$$2$$__alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$2;
  return_value___builtin_alloca$2=__builtin_alloca(PaAlsaStream_Configure$$1$$2$$__alsa_alloca_size);
  *(&hwParamsPlayback) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$2;
  memset((void *)*(&hwParamsPlayback), 0, PaAlsaStream_Configure$$1$$2$$__alsa_alloca_size);
  if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
  {
    paUtilErr_=PaAlsaStreamComponent_InitialConfigure(&self->capture, inParams, self->primeBuffers, hwParamsCapture, &realSr);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_InitialConfigure( &self->capture, inParams, self->primeBuffers, hwParamsCapture, &realSr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2719\n");
      result = paUtilErr_;
    }

  }

  if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
  {
    paUtilErr_=PaAlsaStreamComponent_InitialConfigure(&self->playback, outParams, self->primeBuffers, hwParamsPlayback, &realSr);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_InitialConfigure( &self->playback, outParams, self->primeBuffers, hwParamsPlayback, &realSr )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2722\n");
      result = paUtilErr_;
    }

  }

  paUtilErr_=PaAlsaStream_DetermineFramesPerBuffer(self, realSr, inParams, outParams, framesPerUserBuffer, hwParamsCapture, hwParamsPlayback, hostBufferSizeMode);
  unsigned long int tmp_if_expr$3;
  unsigned long int tmp_if_expr$4;
  unsigned long int tmp_if_expr$7;
  unsigned long int tmp_if_expr$5;
  unsigned long int tmp_if_expr$6;
  if(!(paUtilErr_ >= 0))
  {
    PaUtil_DebugPrint("Expression 'PaAlsaStream_DetermineFramesPerBuffer( self, realSr, inParams, outParams, framesPerUserBuffer, hwParamsCapture, hwParamsPlayback, hostBufferSizeMode )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2725\n");
    result = paUtilErr_;
  }

  else
  {
    if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      /* assertion self->capture.framesPerPeriod != 0 */
      assert(self->capture.framesPerPeriod != (unsigned long int)0);
      paUtilErr_=PaAlsaStreamComponent_FinishConfigure(&self->capture, hwParamsCapture, inParams, self->primeBuffers, realSr, inputLatency);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_FinishConfigure( &self->capture, hwParamsCapture, inParams, self->primeBuffers, realSr, inputLatency )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2731\n");
        result = paUtilErr_;
      }

    }

    if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
    {
      /* assertion self->playback.framesPerPeriod != 0 */
      assert(self->playback.framesPerPeriod != (unsigned long int)0);
      paUtilErr_=PaAlsaStreamComponent_FinishConfigure(&self->playback, hwParamsPlayback, outParams, self->primeBuffers, realSr, outputLatency);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_FinishConfigure( &self->playback, hwParamsPlayback, outParams, self->primeBuffers, realSr, outputLatency )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2738\n");
        result = paUtilErr_;
      }

    }

    self->streamRepresentation.streamInfo.sampleRate = realSr;
    if(!(self->callbackMode == 0))
    {
      if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
      {
        if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
        {
          signed int err;
          err=alsa_snd_pcm_link(self->capture.pcm, self->playback.pcm);
          if(err == 0)
            self->pcmsSynced = 1;

        }

      }

    }

    unsigned long int minFramesPerHostBuffer;
    if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
      tmp_if_expr$3 = self->capture.framesPerPeriod;

    else
      tmp_if_expr$3 = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
    if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
      tmp_if_expr$4 = self->playback.framesPerPeriod;

    else
      tmp_if_expr$4 = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
    if(!(tmp_if_expr$3 >= tmp_if_expr$4))
    {
      if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
        tmp_if_expr$5 = self->capture.framesPerPeriod;

      else
        tmp_if_expr$5 = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
      tmp_if_expr$7 = tmp_if_expr$5;
    }

    else
    {
      if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
        tmp_if_expr$6 = self->playback.framesPerPeriod;

      else
        tmp_if_expr$6 = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
      tmp_if_expr$7 = tmp_if_expr$6;
    }
    minFramesPerHostBuffer = tmp_if_expr$7;
    self->pollTimeout=CalculatePollTimeout(self, minFramesPerHostBuffer);
  }

error:
  ;
  return result;
}

// PaAlsaStream_DetermineFramesPerBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2517
static signed int PaAlsaStream_DetermineFramesPerBuffer(struct PaAlsaStream *self, double sampleRate, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, unsigned long int framesPerUserBuffer, struct _snd_pcm_hw_params *hwParamsCapture, struct _snd_pcm_hw_params *hwParamsPlayback, enum anonymous$12 *hostBufferSizeMode)
{
  signed int result = 0;
  unsigned long int framesPerHostBuffer = (unsigned long int)0;
  signed int dir = 0;
  signed int accurate = 1;
  unsigned int numPeriods = (unsigned int)numPeriods_;
  _Bool tmp_if_expr$32;
  if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    tmp_if_expr$32 = self->playback.pcm != ((struct _snd_pcm *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$32 = (_Bool)0;
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  unsigned long int return_value_pthread_self$3;
  signed int return_value_pthread_equal$4;
  unsigned long int return_value_pthread_self$5;
  signed int return_value_pthread_equal$6;
  unsigned long int return_value_pthread_self$7;
  signed int return_value_pthread_equal$8;
  double tmp_if_expr$9;
  unsigned long int return_value_pthread_self$10;
  signed int return_value_pthread_equal$11;
  unsigned long int return_value_pthread_self$12;
  signed int return_value_pthread_equal$13;
  signed int return_value_6;
  signed int return_value_8;
  unsigned long int return_value_pthread_self$18;
  signed int return_value_pthread_equal$19;
  unsigned long int return_value_pthread_self$20;
  signed int return_value_pthread_equal$21;
  unsigned long int return_value_pthread_self$22;
  signed int return_value_pthread_equal$23;
  unsigned long int return_value_pthread_self$24;
  signed int return_value_pthread_equal$25;
  unsigned long int tmp_if_expr$26;
  unsigned long int return_value_pthread_self$27;
  signed int return_value_pthread_equal$28;
  unsigned long int return_value_pthread_self$29;
  signed int return_value_pthread_equal$30;
  unsigned long int tmp_if_expr$31;
  if(tmp_if_expr$32)
  {
    if(framesPerUserBuffer == 0ul)
    {
      unsigned long int desiredBufSz;
      unsigned long int e;
      unsigned long int minPeriodSize;
      unsigned long int maxPeriodSize;
      unsigned long int optimalPeriodSize;
      unsigned long int periodSize;
      unsigned long int minCapture;
      unsigned long int minPlayback;
      unsigned long int maxCapture;
      unsigned long int maxPlayback;
      dir = 0;
      signed int __pa_unsure_error_id;
      __pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_min(hwParamsCapture, &minCapture, &dir);
      if(!(__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$1=pthread_self();
        return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
        if(!(return_value_pthread_equal$2 == 0))
        {
          const char *return_value;
          return_value=alsa_snd_strerror(__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_min( hwParamsCapture, &minCapture, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2536\n");
        result = -9999;
      }

      dir = 0;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$2$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_min(hwParamsPlayback, &minPlayback, &dir);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$2$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$3=pthread_self();
        return_value_pthread_equal$4=pthread_equal(return_value_pthread_self$3, paUnixMainThread);
        if(!(return_value_pthread_equal$4 == 0))
        {
          const char *return_value_1;
          return_value_1=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$2$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$2$$__pa_unsure_error_id, return_value_1);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_min( hwParamsPlayback, &minPlayback, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2538\n");
        result = -9999;
      }

      dir = 0;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$3$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$3$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_max(hwParamsCapture, &maxCapture, &dir);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$3$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$5=pthread_self();
        return_value_pthread_equal$6=pthread_equal(return_value_pthread_self$5, paUnixMainThread);
        if(!(return_value_pthread_equal$6 == 0))
        {
          const char *return_value_2;
          return_value_2=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$3$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$3$$__pa_unsure_error_id, return_value_2);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_max( hwParamsCapture, &maxCapture, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2540\n");
        result = -9999;
      }

      dir = 0;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$4$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$4$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_period_size_max(hwParamsPlayback, &maxPlayback, &dir);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$4$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$7=pthread_self();
        return_value_pthread_equal$8=pthread_equal(return_value_pthread_self$7, paUnixMainThread);
        if(!(return_value_pthread_equal$8 == 0))
        {
          const char *return_value_3;
          return_value_3=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$4$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$4$$__pa_unsure_error_id, return_value_3);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_period_size_max( hwParamsPlayback, &maxPlayback, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2542\n");
        result = -9999;
      }

      minPeriodSize = minPlayback > minCapture ? minPlayback : minCapture;
      maxPeriodSize = maxPlayback < maxCapture ? maxPlayback : maxCapture;
      if(!(maxPeriodSize >= minPeriodSize))
      {
        PaUtil_DebugPrint("Expression 'minPeriodSize <= maxPeriodSize' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2545\n");
        result = -9993;
      }

      if(outputParameters->suggestedLatency < inputParameters->suggestedLatency)
        tmp_if_expr$9 = outputParameters->suggestedLatency;

      else
        tmp_if_expr$9 = inputParameters->suggestedLatency;
      desiredBufSz = (unsigned long int)(tmp_if_expr$9 * sampleRate);
      unsigned long int maxBufferSize;
      unsigned long int maxBufferSizeCapture;
      unsigned long int maxBufferSizePlayback;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$1$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_buffer_size_max(hwParamsCapture, &maxBufferSizeCapture);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$1$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$10=pthread_self();
        return_value_pthread_equal$11=pthread_equal(return_value_pthread_self$10, paUnixMainThread);
        if(!(return_value_pthread_equal$11 == 0))
        {
          const char *return_value_4;
          return_value_4=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$1$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$1$$__pa_unsure_error_id, return_value_4);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_buffer_size_max( hwParamsCapture, &maxBufferSizeCapture )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2553\n");
        result = -9999;
      }

      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$2$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_buffer_size_max(hwParamsPlayback, &maxBufferSizePlayback);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$2$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$12=pthread_self();
        return_value_pthread_equal$13=pthread_equal(return_value_pthread_self$12, paUnixMainThread);
        if(!(return_value_pthread_equal$13 == 0))
        {
          const char *return_value_5;
          return_value_5=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$2$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$6$$2$$__pa_unsure_error_id, return_value_5);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_buffer_size_max( hwParamsPlayback, &maxBufferSizePlayback )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2554\n");
        result = -9999;
      }

      maxBufferSize = maxBufferSizeCapture < maxBufferSizePlayback ? maxBufferSizeCapture : maxBufferSizePlayback;
      desiredBufSz = desiredBufSz < maxBufferSize ? desiredBufSz : maxBufferSize;
      signed int return_value_ilogb$14;
      return_value_ilogb$14=ilogb((double)minPeriodSize);
      e = (unsigned long int)return_value_ilogb$14;
      if(!((minPeriodSize + 18446744073709551615ul & minPeriodSize) == 0ul))
        e = e + (unsigned long int)1;

      double return_value_pow$15;
      return_value_pow$15=pow((double)2, (double)e);
      periodSize = (unsigned long int)return_value_pow$15;
      if(maxPeriodSize >= periodSize)
      {
        signed int return_value_7;
        return_value_7=alsa_snd_pcm_hw_params_test_period_size(self->playback.pcm, hwParamsPlayback, periodSize, 0);
        if(return_value_7 >= 0)
          return_value_6=alsa_snd_pcm_hw_params_test_period_size(self->capture.pcm, hwParamsCapture, periodSize, 0);

        periodSize = periodSize * (unsigned long int)2;
      }

      optimalPeriodSize = desiredBufSz / (unsigned long int)numPeriods > minPeriodSize ? desiredBufSz / (unsigned long int)numPeriods : minPeriodSize;
      optimalPeriodSize = optimalPeriodSize < maxPeriodSize ? optimalPeriodSize : maxPeriodSize;
      signed int return_value_ilogb$16;
      return_value_ilogb$16=ilogb((double)optimalPeriodSize);
      e = (unsigned long int)return_value_ilogb$16;
      if(!((optimalPeriodSize + 18446744073709551615ul & optimalPeriodSize) == 0ul))
        e = e + (unsigned long int)1;

      double return_value_pow$17;
      return_value_pow$17=pow((double)2, (double)e);
      optimalPeriodSize = (unsigned long int)return_value_pow$17;
      if(optimalPeriodSize >= periodSize)
      {
        signed int return_value_9;
        return_value_9=alsa_snd_pcm_hw_params_test_period_size(self->capture.pcm, hwParamsCapture, optimalPeriodSize, 0);
        if(return_value_9 >= 0)
          return_value_8=alsa_snd_pcm_hw_params_test_period_size(self->playback.pcm, hwParamsPlayback, optimalPeriodSize, 0);

        optimalPeriodSize = optimalPeriodSize / (unsigned long int)2;
      }

      if(!(periodSize >= optimalPeriodSize))
        periodSize = optimalPeriodSize;

      if(maxPeriodSize >= periodSize)
      {
        signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$1$$__pa_unsure_error_id;
        PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size(self->capture.pcm, hwParamsCapture, periodSize, 0);
        if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$1$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$18=pthread_self();
          return_value_pthread_equal$19=pthread_equal(return_value_pthread_self$18, paUnixMainThread);
          if(!(return_value_pthread_equal$19 == 0))
          {
            const char *return_value_10;
            return_value_10=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$1$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$1$$__pa_unsure_error_id, return_value_10);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size( self->capture.pcm, hwParamsCapture, periodSize, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2605\n");
          result = -9999;
        }

        signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$2$$__pa_unsure_error_id;
        PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size(self->playback.pcm, hwParamsPlayback, periodSize, 0);
        if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$2$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$20=pthread_self();
          return_value_pthread_equal$21=pthread_equal(return_value_pthread_self$20, paUnixMainThread);
          if(!(return_value_pthread_equal$21 == 0))
          {
            const char *return_value_11;
            return_value_11=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$2$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$9$$2$$__pa_unsure_error_id, return_value_11);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size( self->playback.pcm, hwParamsPlayback, periodSize, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2607\n");
          result = -9999;
        }

        self->playback.framesPerPeriod = periodSize;
        self->capture.framesPerPeriod = self->playback.framesPerPeriod;
        framesPerHostBuffer = periodSize;
      }

      else
      {
        optimalPeriodSize = desiredBufSz / (unsigned long int)numPeriods > minPeriodSize ? desiredBufSz / (unsigned long int)numPeriods : minPeriodSize;
        optimalPeriodSize = optimalPeriodSize < maxPeriodSize ? optimalPeriodSize : maxPeriodSize;
        self->capture.framesPerPeriod = optimalPeriodSize;
        dir = 0;
        signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$1$$__pa_unsure_error_id;
        PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(self->capture.pcm, hwParamsCapture, &self->capture.framesPerPeriod, &dir);
        if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$1$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$22=pthread_self();
          return_value_pthread_equal$23=pthread_equal(return_value_pthread_self$22, paUnixMainThread);
          if(!(return_value_pthread_equal$23 == 0))
          {
            const char *return_value_12;
            return_value_12=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$1$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$1$$__pa_unsure_error_id, return_value_12);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( self->capture.pcm, hwParamsCapture, &self->capture.framesPerPeriod, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2620\n");
          result = -9999;
        }

        self->playback.framesPerPeriod = optimalPeriodSize;
        dir = 0;
        signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$2$$__pa_unsure_error_id;
        PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(self->playback.pcm, hwParamsPlayback, &self->playback.framesPerPeriod, &dir);
        if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$2$$__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$24=pthread_self();
          return_value_pthread_equal$25=pthread_equal(return_value_pthread_self$24, paUnixMainThread);
          if(!(return_value_pthread_equal$25 == 0))
          {
            const char *return_value_13;
            return_value_13=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$2$$__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$1$$10$$2$$__pa_unsure_error_id, return_value_13);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( self->playback.pcm, hwParamsPlayback, &self->playback.framesPerPeriod, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2624\n");
          result = -9999;
        }

        if(!(self->playback.framesPerPeriod >= self->capture.framesPerPeriod))
          tmp_if_expr$26 = self->capture.framesPerPeriod;

        else
          tmp_if_expr$26 = self->playback.framesPerPeriod;
        framesPerHostBuffer = tmp_if_expr$26;
        *hostBufferSizeMode = (enum anonymous$12)paUtilBoundedHostBufferSize;
      }
    }

    else
    {
      unsigned int maxPeriods = (unsigned int)0;
      struct anonymous$16 *first = &self->capture;
      struct anonymous$16 *second = &self->playback;
      const struct PaStreamParameters *firstStreamParams = inputParameters;
      struct _snd_pcm_hw_params *firstHwParams = hwParamsCapture;
      struct _snd_pcm_hw_params *secondHwParams = hwParamsPlayback;
      dir = 0;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$1$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_periods_max(hwParamsPlayback, &maxPeriods, &dir);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$1$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$27=pthread_self();
        return_value_pthread_equal$28=pthread_equal(return_value_pthread_self$27, paUnixMainThread);
        if(!(return_value_pthread_equal$28 == 0))
        {
          const char *return_value_14;
          return_value_14=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$1$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$1$$__pa_unsure_error_id, return_value_14);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_periods_max( hwParamsPlayback, &maxPeriods, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2641\n");
        result = -9999;
      }

      if(!(maxPeriods >= numPeriods))
      {
        first = &self->playback;
        second = &self->capture;
        firstStreamParams = outputParameters;
        firstHwParams = hwParamsPlayback;
        secondHwParams = hwParamsCapture;
      }

      paUtilErr_=PaAlsaStreamComponent_DetermineFramesPerBuffer(first, firstStreamParams, framesPerUserBuffer, sampleRate, firstHwParams, &accurate);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_DetermineFramesPerBuffer( first, firstStreamParams, framesPerUserBuffer, sampleRate, firstHwParams, &accurate )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2653\n");
        result = paUtilErr_;
      }

      second->framesPerPeriod = first->framesPerPeriod;
      dir = 0;
      signed int PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$4$$__pa_unsure_error_id;
      PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$4$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_set_period_size_near(second->pcm, secondHwParams, &second->framesPerPeriod, &dir);
      if(!(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$4$$__pa_unsure_error_id >= 0))
      {
        return_value_pthread_self$29=pthread_self();
        return_value_pthread_equal$30=pthread_equal(return_value_pthread_self$29, paUnixMainThread);
        if(!(return_value_pthread_equal$30 == 0))
        {
          const char *return_value_15;
          return_value_15=alsa_snd_strerror(PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$4$$__pa_unsure_error_id);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)PaAlsaStream_DetermineFramesPerBuffer$$1$$1$$2$$4$$__pa_unsure_error_id, return_value_15);
        }

        PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_period_size_near( second->pcm, secondHwParams, &second->framesPerPeriod, &dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2658\n");
        result = -9999;
      }

      if(self->capture.framesPerPeriod == self->playback.framesPerPeriod)
        framesPerHostBuffer = self->capture.framesPerPeriod;

      else
      {
        if(!(self->playback.framesPerPeriod >= self->capture.framesPerPeriod))
          tmp_if_expr$31 = self->capture.framesPerPeriod;

        else
          tmp_if_expr$31 = self->playback.framesPerPeriod;
        framesPerHostBuffer = tmp_if_expr$31;
        *hostBufferSizeMode = (enum anonymous$12)paUtilBoundedHostBufferSize;
      }
    }
  }

  else
    if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      do
      {
        paUtilErr_=PaAlsaStreamComponent_DetermineFramesPerBuffer(&self->capture, inputParameters, framesPerUserBuffer, sampleRate, hwParamsCapture, &accurate);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_DetermineFramesPerBuffer( &self->capture, inputParameters, framesPerUserBuffer, sampleRate, hwParamsCapture, &accurate)' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2675\n");
          result = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);
      framesPerHostBuffer = self->capture.framesPerPeriod;
    }

    else
    {
      /* assertion self->playback.pcm */
      assert(self->playback.pcm != ((struct _snd_pcm *)NULL));
      do
      {
        paUtilErr_=PaAlsaStreamComponent_DetermineFramesPerBuffer(&self->playback, outputParameters, framesPerUserBuffer, sampleRate, hwParamsPlayback, &accurate);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_DetermineFramesPerBuffer( &self->playback, outputParameters, framesPerUserBuffer, sampleRate, hwParamsPlayback, &accurate )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2682\n");
          result = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);
      framesPerHostBuffer = self->playback.framesPerPeriod;
    }
  do
    if(framesPerHostBuffer == 0ul)
    {
      PaUtil_DebugPrint("Expression 'framesPerHostBuffer != 0' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2687\n");
      result = -9986;
      goto error;
    }

  while((_Bool)0);
  self->maxFramesPerHostBuffer = framesPerHostBuffer;
  if(self->playback.canMmap == 0 || accurate == 0)
  {
    *hostBufferSizeMode = (enum anonymous$12)paUtilBoundedHostBufferSize;
    if(accurate == 0)
      self->maxFramesPerHostBuffer = self->maxFramesPerHostBuffer + 1ul;

  }


error:
  ;
  return result;
}

// PaAlsaStream_EndProcessing
// file src/hostapi/alsa/pa_linux_alsa.c line 3586
static signed int PaAlsaStream_EndProcessing(struct PaAlsaStream *self, unsigned long int numFrames, signed int *xrunOccurred)
{
  signed int result = 0;
  signed int xrun = 0;
  if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    do
    {
      paUtilErr_=PaAlsaStreamComponent_EndProcessing(&self->capture, numFrames, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_EndProcessing( &self->capture, numFrames, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3593\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);

  if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
  {
    if(!(self->playback.numUserChannels >= self->playback.numHostChannels))
      do
      {
        paUtilErr_=PaAlsaStreamComponent_DoChannelAdaption(&self->playback, &self->bufferProcessor, (signed int)numFrames);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_DoChannelAdaption( &self->playback, &self->bufferProcessor, numFrames )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3599\n");
          result = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);

    do
    {
      paUtilErr_=PaAlsaStreamComponent_EndProcessing(&self->playback, numFrames, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_EndProcessing( &self->playback, numFrames, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3601\n");
        result = paUtilErr_;
        break;
      }

    }
    while((_Bool)0);
  }


error:
  ;
  *xrunOccurred = xrun;
  return result;
}

// PaAlsaStream_GetAvailableFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3701
static signed int PaAlsaStream_GetAvailableFrames(struct PaAlsaStream *self, signed int queryCapture, signed int queryPlayback, unsigned long int *available, signed int *xrunOccurred)
{
  signed int result = 0;
  unsigned long int captureFrames;
  unsigned long int playbackFrames;
  *xrunOccurred = 0;
  /* assertion queryCapture || queryPlayback */
  assert(queryCapture != 0 || queryPlayback != 0);
  if(!(queryCapture == 0))
  {
    /* assertion self->capture.pcm */
    assert(self->capture.pcm != ((struct _snd_pcm *)NULL));
    do
    {
      paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(&self->capture, &captureFrames, xrunOccurred);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( &self->capture, &captureFrames, xrunOccurred )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3713\n");
        result = paUtilErr_;
        goto end;
      }

    }
    while((_Bool)0);
    if(!(*xrunOccurred == 0))
      goto end;

  }

  if(!(queryPlayback == 0))
  {
    /* assertion self->playback.pcm */
    assert(self->playback.pcm != ((struct _snd_pcm *)NULL));
    do
    {
      paUtilErr_=PaAlsaStreamComponent_GetAvailableFrames(&self->playback, &playbackFrames, xrunOccurred);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_GetAvailableFrames( &self->playback, &playbackFrames, xrunOccurred )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3722\n");
        result = paUtilErr_;
        goto end;
      }

    }
    while((_Bool)0);
    if(!(*xrunOccurred == 0))
      goto end;

  }

  if(!(queryCapture == 0) && !(queryPlayback == 0))
    *available = captureFrames < playbackFrames ? captureFrames : playbackFrames;

  else
    if(!(queryCapture == 0))
      *available = captureFrames;

    else
      *available = playbackFrames;

end:

  error:
    ;
  return result;
}

// PaAlsaStream_HandleXrun
// file src/hostapi/alsa/pa_linux_alsa.c line 3259
static signed int PaAlsaStream_HandleXrun(struct PaAlsaStream *self)
{
  signed int result = 0;
  struct _snd_pcm_status *st;
  double now;
  now=PaUtil_GetTime();
  struct timeval t;
  signed int restartAlsa = 0;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_status_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&st) = (struct _snd_pcm_status *)return_value___builtin_alloca$1;
  memset((void *)*(&st), 0, __alsa_alloca_size);
  if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
  {
    alsa_snd_pcm_status(self->playback.pcm, st);
    enum _snd_pcm_state return_value_1;
    return_value_1=alsa_snd_pcm_status_get_state(st);
    if((signed int)return_value_1 == SND_PCM_STATE_XRUN)
    {
      alsa_snd_pcm_status_get_trigger_tstamp(st, &t);
      self->underrun = now * (double)1000 - ((double)t.tv_sec * (double)1000 + (double)t.tv_usec / (double)1000);
      if(self->playback.canMmap == 0)
      {
        signed int return_value;
        return_value=alsa_snd_pcm_recover(self->playback.pcm, -32, 0);
        if(!(return_value >= 0))
          restartAlsa = restartAlsa + 1;

      }

      else
        restartAlsa = restartAlsa + 1;
    }

  }

  if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
  {
    alsa_snd_pcm_status(self->capture.pcm, st);
    enum _snd_pcm_state return_value_3;
    return_value_3=alsa_snd_pcm_status_get_state(st);
    if((signed int)return_value_3 == SND_PCM_STATE_XRUN)
    {
      alsa_snd_pcm_status_get_trigger_tstamp(st, &t);
      self->overrun = now * (double)1000 - ((double)t.tv_sec * (double)1000 + (double)t.tv_usec / (double)1000);
      if(self->capture.canMmap == 0)
      {
        signed int return_value_2;
        return_value_2=alsa_snd_pcm_recover(self->capture.pcm, -32, 0);
        if(!(return_value_2 >= 0))
          restartAlsa = restartAlsa + 1;

      }

      else
        restartAlsa = restartAlsa + 1;
    }

  }

  if(!(restartAlsa == 0))
  {
    paUtilErr_=AlsaRestart(self);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'AlsaRestart( self )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3313\n");
      result = paUtilErr_;
    }

  }


end:
  ;
  return result;

error:
  ;
}

// PaAlsaStream_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 2137
static signed int PaAlsaStream_Initialize(struct PaAlsaStream *self, struct PaAlsaHostApiRepresentation *alsaApi, const struct PaStreamParameters *inParams, const struct PaStreamParameters *outParams, double sampleRate, unsigned long int framesPerUserBuffer, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), unsigned long int streamFlags, void *userData)
{
  signed int result = 0;
  /* assertion self */
  assert(self != ((struct PaAlsaStream *)NULL));
  memset((void *)self, 0, sizeof(struct PaAlsaStream) /*928ul*/ );
  if(!(callback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL)))
  {
    PaUtil_InitializeStreamRepresentation(&self->streamRepresentation, &alsaApi->callbackStreamInterface, callback, userData);
    self->callbackMode = 1;
  }

  else
    PaUtil_InitializeStreamRepresentation(&self->streamRepresentation, &alsaApi->blockingStreamInterface, (signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))(void *)0, userData);
  self->framesPerUserBuffer = framesPerUserBuffer;
  self->neverDropInput = (signed int)(streamFlags & (unsigned long int)0x00000004);
  memset((void *)&self->capture, 0, sizeof(struct anonymous$16) /*136ul*/ );
  memset((void *)&self->playback, 0, sizeof(struct anonymous$16) /*136ul*/ );
  if(!(inParams == ((const struct PaStreamParameters *)NULL)))
    do
    {
      paUtilErr_=PaAlsaStreamComponent_Initialize(&self->capture, alsaApi, inParams, (enum anonymous$5)StreamDirection_In, (signed int)((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))(void *)0 != callback));
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_Initialize( &self->capture, alsaApi, inParams, StreamDirection_In, NULL != callback )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2171\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);

  if(!(outParams == ((const struct PaStreamParameters *)NULL)))
    do
    {
      paUtilErr_=PaAlsaStreamComponent_Initialize(&self->playback, alsaApi, outParams, (enum anonymous$5)StreamDirection_Out, (signed int)((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))(void *)0 != callback));
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_Initialize( &self->playback, alsaApi, outParams, StreamDirection_Out, NULL != callback )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2175\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);

  _Bool tmp_if_expr$1;
  if(!(self->capture.nfds == 0u))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = self->playback.nfds != 0u ? (_Bool)1 : (_Bool)0;
  /* assertion self->capture.nfds || self->playback.nfds */
  assert(tmp_if_expr$1);
  do
  {
    void *return_value_PaUtil_AllocateMemory$2;
    return_value_PaUtil_AllocateMemory$2=PaUtil_AllocateMemory((signed long int)((unsigned long int)(self->capture.nfds + self->playback.nfds) * sizeof(struct pollfd) /*8ul*/ ));
    self->pfds = (struct pollfd *)return_value_PaUtil_AllocateMemory$2;
    if(self->pfds == ((struct pollfd *)NULL))
    {
      PaUtil_DebugPrint("Expression 'self->pfds = (struct pollfd*)PaUtil_AllocateMemory( ( self->capture.nfds + self->playback.nfds ) * sizeof( struct pollfd ) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2181\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  PaUtil_InitializeCpuLoadMeasurer(&self->cpuLoadMeasurer, sampleRate);
  do
  {
    signed int __pa_assert_error_id;
    __pa_assert_error_id=PaUnixMutex_Initialize(&self->stateMtx);
    /* assertion paNoError == __pa_assert_error_id */
    assert(0 == __pa_assert_error_id);
  }
  while((_Bool)0);

error:
  ;
  return result;
}

// PaAlsaStream_SetUpBuffers
// file src/hostapi/alsa/pa_linux_alsa.c line 4062
static signed int PaAlsaStream_SetUpBuffers(struct PaAlsaStream *self, unsigned long int *numFrames, signed int *xrunOccurred)
{
  signed int result = 0;
  unsigned long int captureFrames = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
  unsigned long int playbackFrames = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
  unsigned long int commonFrames = (unsigned long int)0;
  signed int xrun = 0;
  _Bool tmp_if_expr$1;
  if(!(*xrunOccurred == 0))
  {
    *numFrames = (unsigned long int)0;
    return result;
  }

  else
  {
    do
    {
      if(!(self->capture.ready == 0))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = self->playback.ready != 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$1)
      {
        PaUtil_DebugPrint("Expression 'self->capture.ready || self->playback.ready' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4074\n");
        result = -9986;
        goto error;
      }

    }
    while((_Bool)0);
    if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    {
      if(!(self->capture.ready == 0))
      {
        captureFrames = *numFrames;
        do
        {
          paUtilErr_=PaAlsaStreamComponent_RegisterChannels(&self->capture, &self->bufferProcessor, &captureFrames, &xrun);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_RegisterChannels( &self->capture, &self->bufferProcessor, &captureFrames, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4083\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
      }

    }

    if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
    {
      if(!(self->playback.ready == 0))
      {
        playbackFrames = *numFrames;
        do
        {
          paUtilErr_=PaAlsaStreamComponent_RegisterChannels(&self->playback, &self->bufferProcessor, &playbackFrames, &xrun);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_RegisterChannels( &self->playback, &self->bufferProcessor, &playbackFrames, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4089\n");
            result = paUtilErr_;
            goto error;
          }

        }
        while((_Bool)0);
      }

    }

    if(!(xrun == 0))
      /* assertion 0 == commonFrames */
      assert((unsigned long int)0 == commonFrames);

    else
    {
      commonFrames = captureFrames < playbackFrames ? captureFrames : playbackFrames;
      if(!(*numFrames >= commonFrames))
        commonFrames = (unsigned long int)0;

      else
      {
        if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
        {
          if(!(self->capture.ready == 0))
            PaUtil_SetInputFrameCount(&self->bufferProcessor, commonFrames);

          else
            PaUtil_SetNoInput(&self->bufferProcessor);
        }

        if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
        {
          if(!(self->playback.ready == 0))
            PaUtil_SetOutputFrameCount(&self->bufferProcessor, commonFrames);

          else
          {
            /* assertion self->neverDropInput */
            assert(self->neverDropInput != 0);
            /* assertion self->capture.pcm != ((void *)0) */
            assert(self->capture.pcm != (struct _snd_pcm *)(void *)0);
            PaUtil_SetNoOutput(&self->bufferProcessor);
          }
        }

      }
    }

  end:
    ;
    *numFrames = commonFrames;

  error:
    ;
    for( ; (_Bool)1; result = paUtilErr_)
    {
      if(xrun == 0)
        goto __CPROVER_DUMP_L20;


    __CPROVER_DUMP_L18:
      ;
      paUtilErr_=PaAlsaStream_HandleXrun(self);
      if(paUtilErr_ >= 0)
        break;

      PaUtil_DebugPrint("Expression 'PaAlsaStream_HandleXrun( self )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4156\n");
    }
    *numFrames = (unsigned long int)0;

  __CPROVER_DUMP_L20:
    ;
    *xrunOccurred = xrun;
    return result;
  }
}

// PaAlsaStream_Terminate
// file src/hostapi/alsa/pa_linux_alsa.c line 2194
static void PaAlsaStream_Terminate(struct PaAlsaStream *self)
{
  /* assertion self */
  assert(self != ((struct PaAlsaStream *)NULL));
  if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
    PaAlsaStreamComponent_Terminate(&self->capture);

  if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
    PaAlsaStreamComponent_Terminate(&self->playback);

  PaUtil_FreeMemory((void *)self->pfds);
  do
  {
    signed int __pa_assert_error_id;
    __pa_assert_error_id=PaUnixMutex_Terminate(&self->stateMtx);
    /* assertion paNoError == __pa_assert_error_id */
    assert(0 == __pa_assert_error_id);
  }
  while((_Bool)0);
  PaUtil_FreeMemory((void *)self);
}

// PaAlsaStream_WaitForFrames
// file src/hostapi/alsa/pa_linux_alsa.c line 3758
static signed int PaAlsaStream_WaitForFrames(struct PaAlsaStream *self, unsigned long int *framesAvail, signed int *xrunOccurred)
{
  signed int result = 0;
  signed int pollPlayback = (signed int)(self->playback.pcm != (struct _snd_pcm *)(void *)0);
  signed int pollCapture = (signed int)(self->capture.pcm != (struct _snd_pcm *)(void *)0);
  signed int pollTimeout = self->pollTimeout;
  signed int xrun = 0;
  signed int timeouts = 0;
  signed int pollResults;
  /* assertion self */
  assert(self != ((struct PaAlsaStream *)NULL));
  /* assertion framesAvail */
  assert(framesAvail != ((unsigned long int *)NULL));
  unsigned int tmp_if_expr$1;
  signed int tmp_if_expr$3;
  signed int tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  unsigned long int tmp_if_expr$5;
  if(self->callbackMode == 0)
  {
    do
    {
      paUtilErr_=PaAlsaStream_GetAvailableFrames(self, (signed int)(self->capture.pcm != (struct _snd_pcm *)(void *)0), (signed int)(self->playback.pcm != (struct _snd_pcm *)(void *)0), framesAvail, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_GetAvailableFrames( self, self->capture.pcm != NULL, self->playback.pcm != NULL, framesAvail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3773\n");
        result = paUtilErr_;
        goto end;
      }

    }
    while((_Bool)0);
    if(!(xrun == 0))
      goto end;

    if(!(*framesAvail >= 1ul))
      goto __CPROVER_DUMP_L5;

    if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
      self->capture.ready = 1;

    if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
      self->playback.ready = 1;

  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    while(!(pollCapture == 0) || !(pollPlayback == 0))
    {
      signed int totalFds = 0;
      struct pollfd *capturePfds = (struct pollfd *)(void *)0;
      struct pollfd *playbackPfds = (struct pollfd *)(void *)0;
      pthread_testcancel();
      if(!(pollCapture == 0))
      {
        capturePfds = self->pfds;
        do
        {
          paUtilErr_=PaAlsaStreamComponent_BeginPolling(&self->capture, capturePfds);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_BeginPolling( &self->capture, capturePfds )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3802\n");
            result = paUtilErr_;
            goto end;
          }

        }
        while((_Bool)0);
        totalFds = totalFds + (signed int)self->capture.nfds;
      }

      if(!(pollPlayback == 0))
      {
        if(!(pollCapture == 0))
          tmp_if_expr$1 = self->capture.nfds;

        else
          tmp_if_expr$1 = (unsigned int)0;
        playbackPfds = self->pfds + (signed long int)tmp_if_expr$1;
        do
        {
          paUtilErr_=PaAlsaStreamComponent_BeginPolling(&self->playback, playbackPfds);
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_BeginPolling( &self->playback, playbackPfds )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3809\n");
            result = paUtilErr_;
            goto end;
          }

        }
        while((_Bool)0);
        totalFds = totalFds + (signed int)self->playback.nfds;
      }

      pollResults=poll(self->pfds, (unsigned long int)totalFds, pollTimeout);
      if(!(pollResults >= 0))
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        if(*return_value___errno_location$2 == 4)
        {
          Pa_Sleep((signed long int)1);
          continue;
        }

        do
        {
          paUtilErr_ = -9986;
          if(!(paUtilErr_ >= 0))
          {
            PaUtil_DebugPrint("Expression 'paInternalError' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3826\n");
            result = paUtilErr_;
            goto end;
          }

        }
        while((_Bool)0);
      }

      else
        if(pollResults == 0)
        {
          timeouts = timeouts + 1;
          if(timeouts >= 2)
            Pa_Sleep((signed long int)1);

          if(timeouts >= 2048)
          {
            *framesAvail = (unsigned long int)0;
            xrun = 1;
            goto end;
          }

        }

        else
          if(pollResults >= 1)
          {
            timeouts = 0;
            if(!(pollCapture == 0))
              do
              {
                paUtilErr_=PaAlsaStreamComponent_EndPolling(&self->capture, capturePfds, &pollCapture, &xrun);
                if(!(paUtilErr_ >= 0))
                {
                  PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_EndPolling( &self->capture, capturePfds, &pollCapture, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3861\n");
                  result = paUtilErr_;
                  goto end;
                }

              }
              while((_Bool)0);

            if(!(pollPlayback == 0))
              do
              {
                paUtilErr_=PaAlsaStreamComponent_EndPolling(&self->playback, playbackPfds, &pollPlayback, &xrun);
                if(!(paUtilErr_ >= 0))
                {
                  PaUtil_DebugPrint("Expression 'PaAlsaStreamComponent_EndPolling( &self->playback, playbackPfds, &pollPlayback, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3865\n");
                  result = paUtilErr_;
                  goto end;
                }

              }
              while((_Bool)0);

            if(!(xrun == 0))
              break;

          }

      if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
      {
        if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
        {
          if(pollPlayback == 0 && !(pollCapture == 0))
            do
            {
              paUtilErr_=ContinuePoll(self, (enum anonymous$5)StreamDirection_In, &pollTimeout, &pollCapture);
              if(!(paUtilErr_ >= 0))
              {
                PaUtil_DebugPrint("Expression 'ContinuePoll( self, StreamDirection_In, &pollTimeout, &pollCapture )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3881\n");
                result = paUtilErr_;
                goto end;
              }

            }
            while((_Bool)0);

          else
            if(pollCapture == 0 && !(pollPlayback == 0))
              do
              {
                paUtilErr_=ContinuePoll(self, (enum anonymous$5)StreamDirection_Out, &pollTimeout, &pollPlayback);
                if(!(paUtilErr_ >= 0))
                {
                  PaUtil_DebugPrint("Expression 'ContinuePoll( self, StreamDirection_Out, &pollTimeout, &pollPlayback )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3885\n");
                  result = paUtilErr_;
                  goto end;
                }

              }
              while((_Bool)0);

        }

      }

    }
    if(xrun == 0)
    {
      signed int captureReady;
      if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
        tmp_if_expr$3 = self->capture.ready;

      else
        tmp_if_expr$3 = 0;
      captureReady = tmp_if_expr$3;
      signed int playbackReady;
      if(!(self->playback.pcm == ((struct _snd_pcm *)NULL)))
        tmp_if_expr$4 = self->playback.ready;

      else
        tmp_if_expr$4 = 0;
      playbackReady = tmp_if_expr$4;
      do
      {
        paUtilErr_=PaAlsaStream_GetAvailableFrames(self, captureReady, playbackReady, framesAvail, &xrun);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStream_GetAvailableFrames( self, captureReady, playbackReady, framesAvail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3899\n");
          result = paUtilErr_;
          goto end;
        }

      }
      while((_Bool)0);
      if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
        tmp_if_expr$6 = self->playback.pcm != ((struct _snd_pcm *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$6 = (_Bool)0;
      if(tmp_if_expr$6)
      {
        if(self->playback.ready == 0)
        {
          if(self->neverDropInput == 0)
          {
            /* assertion self->capture.ready */
            assert(self->capture.ready != 0);
            if(!(self->capture.framesPerPeriod >= *framesAvail))
              tmp_if_expr$5 = self->capture.framesPerPeriod;

            else
              tmp_if_expr$5 = *framesAvail;
            PaAlsaStreamComponent_EndProcessing(&self->capture, tmp_if_expr$5, &xrun);
            *framesAvail = (unsigned long int)0;
            self->capture.ready = 0;
          }

        }

      }

      else
        if(!(self->capture.pcm == ((struct _snd_pcm *)NULL)))
          /* assertion self->capture.ready */
          assert(self->capture.ready != 0);

        else
          /* assertion self->playback.ready */
          assert(self->playback.ready != 0);
    }

  }

end:

  error:
    ;
  _Bool tmp_if_expr$7;
  for( ; (_Bool)1; result = -9986)
  {
    if(!(xrun == 0))
    {
      do
      {
        paUtilErr_=PaAlsaStream_HandleXrun(self);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStream_HandleXrun( self )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3924\n");
          result = paUtilErr_;
          goto end;
        }

      }
      while((_Bool)0);
      *framesAvail = (unsigned long int)0;
      goto __CPROVER_DUMP_L57;
    }

    if(*framesAvail == 0ul)
      goto __CPROVER_DUMP_L57;


  __CPROVER_DUMP_L53:
    ;
    if(!(self->capture.ready == 0))
      tmp_if_expr$7 = (_Bool)1;

    else
      tmp_if_expr$7 = self->playback.ready != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$7)
      break;

    PaUtil_DebugPrint("Expression 'self->capture.ready || self->playback.ready' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3932\n");
  }

__CPROVER_DUMP_L57:
  ;
  *xrunOccurred = xrun;
  return result;
}

// PaAlsaVersionNum
// file src/hostapi/alsa/pa_linux_alsa.c line 970
static unsigned int PaAlsaVersionNum(void)
{
  char *verStr;
  unsigned int verNum;
  const char *return_value;
  return_value=alsa_snd_asoundlib_version();
  verStr = (char *)return_value;
  signed int return_value_atoi$1;
  return_value_atoi$1=atoi(verStr);
  signed int return_value_atoi$2;
  return_value_atoi$2=atoi(verStr + (signed long int)2);
  signed int return_value_atoi$3;
  return_value_atoi$3=atoi(verStr + (signed long int)4);
  verNum = (unsigned int)(return_value_atoi$1 << 16 | return_value_atoi$2 << 8 | return_value_atoi$3);
  return verNum;
}

// PaAlsa_AlignForward
// file src/hostapi/alsa/pa_linux_alsa.c line 2240
static unsigned long int PaAlsa_AlignForward(unsigned long int v, unsigned long int align)
{
  unsigned long int remainder = align != 0ul ? v % align : (unsigned long int)0;
  return remainder != (unsigned long int)0 ? v + (align - remainder) : v;
}

// PaAlsa_CloseLibrary
// file src/hostapi/alsa/pa_linux_alsa.c line 553
static void PaAlsa_CloseLibrary()
{
  ;
}

// PaAlsa_EnableRealtimeScheduling
// file src/hostapi/alsa/pa_linux_alsa.c line 4552
void PaAlsa_EnableRealtimeScheduling(void *s, signed int enable)
{
  struct PaAlsaStream *stream = (struct PaAlsaStream *)s;
  stream->rtSched = enable;
}

// PaAlsa_GetFramesPerHostBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2253
static unsigned long int PaAlsa_GetFramesPerHostBuffer(unsigned long int userFramesPerBuffer, double suggestedLatency, double sampleRate)
{
  unsigned long int frames = userFramesPerBuffer + (userFramesPerBuffer > (unsigned long int)(suggestedLatency * sampleRate) ? userFramesPerBuffer : (unsigned long int)(suggestedLatency * sampleRate));
  return frames;
}

// PaAlsa_GetStreamInputCard
// file src/hostapi/alsa/pa_linux_alsa.c line 4585
signed int PaAlsa_GetStreamInputCard(void *s, signed int *card)
{
  struct PaAlsaStream *stream;
  signed int result = 0;
  struct _snd_pcm_info *pcmInfo;
  do
  {
    paUtilErr_=GetAlsaStreamPointer(s, &stream);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'GetAlsaStreamPointer( s, &stream )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4591\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
    if(stream->capture.pcm == ((struct _snd_pcm *)NULL))
    {
      PaUtil_DebugPrint("Expression 'stream->capture.pcm' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4594\n");
      result = -9985;
      goto error;
    }

  while((_Bool)0);
  *card = stream->capture.card;

error:
  ;
  return result;
}

// PaAlsa_GetStreamOutputCard
// file src/hostapi/alsa/pa_linux_alsa.c line 4602
signed int PaAlsa_GetStreamOutputCard(void *s, signed int *card)
{
  struct PaAlsaStream *stream;
  signed int result = 0;
  struct _snd_pcm_info *pcmInfo;
  do
  {
    paUtilErr_=GetAlsaStreamPointer(s, &stream);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'GetAlsaStreamPointer( s, &stream )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4608\n");
      result = paUtilErr_;
      goto error;
    }

  }
  while((_Bool)0);
  do
    if(stream->playback.pcm == ((struct _snd_pcm *)NULL))
    {
      PaUtil_DebugPrint("Expression 'stream->playback.pcm' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4611\n");
      result = -9985;
      goto error;
    }

  while((_Bool)0);
  *card = stream->playback.card;

error:
  ;
  return result;
}

// PaAlsa_Initialize
// file src/hostapi/alsa/pa_linux_alsa.c line 738
signed int PaAlsa_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex)
{
  signed int result = 0;
  struct PaAlsaHostApiRepresentation *alsaHostApi = (struct PaAlsaHostApiRepresentation *)(void *)0;
  signed int return_value_PaAlsa_LoadLibrary$1;
  return_value_PaAlsa_LoadLibrary$1=PaAlsa_LoadLibrary();
  if(return_value_PaAlsa_LoadLibrary$1 == 0)
    return -9979;

  else
  {
    do
    {
      void *return_value_PaUtil_AllocateMemory$2;
      return_value_PaUtil_AllocateMemory$2=PaUtil_AllocateMemory((signed long int)sizeof(struct PaAlsaHostApiRepresentation) /*280ul*/ );
      alsaHostApi = (struct PaAlsaHostApiRepresentation *)return_value_PaUtil_AllocateMemory$2;
      if(alsaHostApi == ((struct PaAlsaHostApiRepresentation *)NULL))
      {
        PaUtil_DebugPrint("Expression 'alsaHostApi = (PaAlsaHostApiRepresentation*) PaUtil_AllocateMemory( sizeof(PaAlsaHostApiRepresentation) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 748\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      alsaHostApi->allocations=PaUtil_CreateAllocationGroup();
      if(alsaHostApi->allocations == ((struct anonymous$14 *)NULL))
      {
        PaUtil_DebugPrint("Expression 'alsaHostApi->allocations = PaUtil_CreateAllocationGroup()' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 749\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    alsaHostApi->hostApiIndex = hostApiIndex;
    alsaHostApi->alsaLibVersion=PaAlsaVersionNum();
    *hostApi = (struct PaUtilHostApiRepresentation *)alsaHostApi;
    (*hostApi)->info.structVersion = 1;
    (*hostApi)->info.type = (enum PaHostApiTypeId)paALSA;
    (*hostApi)->info.name = "ALSA";
    (*hostApi)->Terminate = Terminate$link1;
    (*hostApi)->OpenStream = OpenStream$link1;
    (*hostApi)->IsFormatSupported = IsFormatSupported$link1;
    do
    {
      paUtilErr_=BuildDeviceList(alsaHostApi);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'BuildDeviceList( alsaHostApi )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 767\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    PaUtil_InitializeStreamInterface(&alsaHostApi->callbackStreamInterface, CloseStream$link1, StartStream$link1, StopStream$link1, AbortStream$link1, IsStreamStopped$link1, IsStreamActive$link1, GetStreamTime$link1, GetStreamCpuLoad$link1, PaUtil_DummyRead, PaUtil_DummyWrite, PaUtil_DummyGetReadAvailable, PaUtil_DummyGetWriteAvailable);
    PaUtil_InitializeStreamInterface(&alsaHostApi->blockingStreamInterface, CloseStream$link1, StartStream$link1, StopStream$link1, AbortStream$link1, IsStreamStopped$link1, IsStreamActive$link1, GetStreamTime$link1, PaUtil_DummyGetCpuLoad, ReadStream$link1, WriteStream$link1, GetStreamReadAvailable$link1, GetStreamWriteAvailable$link1);
    do
    {
      paUtilErr_=PaUnixThreading_Initialize();
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixThreading_Initialize()' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 787\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    return result;

  error:
    ;
    if(!(alsaHostApi == ((struct PaAlsaHostApiRepresentation *)NULL)))
    {
      if(!(alsaHostApi->allocations == ((struct anonymous$14 *)NULL)))
      {
        PaUtil_FreeAllAllocations(alsaHostApi->allocations);
        PaUtil_DestroyAllocationGroup(alsaHostApi->allocations);
      }

      PaUtil_FreeMemory((void *)alsaHostApi);
    }

    return result;
  }
}

// PaAlsa_InitializeStreamInfo
// file src/hostapi/alsa/pa_linux_alsa.c line 4544
void PaAlsa_InitializeStreamInfo(struct PaAlsaStreamInfo *info)
{
  info->size = sizeof(struct PaAlsaStreamInfo) /*32ul*/ ;
  info->hostApiType = (enum PaHostApiTypeId)paALSA;
  info->version = (unsigned long int)1;
  info->deviceString = (const char *)(void *)0;
}

// PaAlsa_LoadLibrary
// file src/hostapi/alsa/pa_linux_alsa.c line 352
static signed int PaAlsa_LoadLibrary()
{
  alsa_snd_pcm_open = snd_pcm_open;
  alsa_snd_pcm_close = snd_pcm_close;
  alsa_snd_pcm_nonblock = snd_pcm_nonblock;
  alsa_snd_pcm_frames_to_bytes = snd_pcm_frames_to_bytes;
  alsa_snd_pcm_prepare = snd_pcm_prepare;
  alsa_snd_pcm_start = snd_pcm_start;
  alsa_snd_pcm_resume = snd_pcm_resume;
  alsa_snd_pcm_wait = snd_pcm_wait;
  alsa_snd_pcm_state = snd_pcm_state;
  alsa_snd_pcm_avail_update = snd_pcm_avail_update;
  alsa_snd_pcm_areas_silence = snd_pcm_areas_silence;
  alsa_snd_pcm_mmap_begin = snd_pcm_mmap_begin;
  alsa_snd_pcm_mmap_commit = snd_pcm_mmap_commit;
  alsa_snd_pcm_readi = snd_pcm_readi;
  alsa_snd_pcm_readn = snd_pcm_readn;
  alsa_snd_pcm_writei = snd_pcm_writei;
  alsa_snd_pcm_writen = snd_pcm_writen;
  alsa_snd_pcm_drain = snd_pcm_drain;
  alsa_snd_pcm_recover = snd_pcm_recover;
  alsa_snd_pcm_drop = snd_pcm_drop;
  alsa_snd_pcm_area_copy = snd_pcm_area_copy;
  alsa_snd_pcm_poll_descriptors = snd_pcm_poll_descriptors;
  alsa_snd_pcm_poll_descriptors_count = snd_pcm_poll_descriptors_count;
  alsa_snd_pcm_poll_descriptors_revents = snd_pcm_poll_descriptors_revents;
  alsa_snd_pcm_format_size = snd_pcm_format_size;
  alsa_snd_pcm_link = snd_pcm_link;
  alsa_snd_pcm_delay = snd_pcm_delay;
  alsa_snd_pcm_hw_params_sizeof = snd_pcm_hw_params_sizeof;
  alsa_snd_pcm_hw_params_malloc = snd_pcm_hw_params_malloc;
  alsa_snd_pcm_hw_params_free = snd_pcm_hw_params_free;
  alsa_snd_pcm_hw_params_any = snd_pcm_hw_params_any;
  alsa_snd_pcm_hw_params_set_access = snd_pcm_hw_params_set_access;
  alsa_snd_pcm_hw_params_set_format = snd_pcm_hw_params_set_format;
  alsa_snd_pcm_hw_params_set_channels = snd_pcm_hw_params_set_channels;
  alsa_snd_pcm_hw_params_set_rate_near = snd_pcm_hw_params_set_rate_near;
  alsa_snd_pcm_hw_params_set_rate = snd_pcm_hw_params_set_rate;
  alsa_snd_pcm_hw_params_set_rate_resample = snd_pcm_hw_params_set_rate_resample;
  alsa_snd_pcm_hw_params_set_buffer_size = snd_pcm_hw_params_set_buffer_size;
  alsa_snd_pcm_hw_params_set_buffer_size_near = snd_pcm_hw_params_set_buffer_size_near;
  alsa_snd_pcm_hw_params_set_buffer_size_min = snd_pcm_hw_params_set_buffer_size_min;
  alsa_snd_pcm_hw_params_set_period_size_near = snd_pcm_hw_params_set_period_size_near;
  alsa_snd_pcm_hw_params_set_periods_integer = snd_pcm_hw_params_set_periods_integer;
  alsa_snd_pcm_hw_params_set_periods_min = snd_pcm_hw_params_set_periods_min;
  alsa_snd_pcm_hw_params_get_buffer_size = snd_pcm_hw_params_get_buffer_size;
  alsa_snd_pcm_hw_params_get_channels_min = snd_pcm_hw_params_get_channels_min;
  alsa_snd_pcm_hw_params_get_channels_max = snd_pcm_hw_params_get_channels_max;
  alsa_snd_pcm_hw_params_test_period_size = snd_pcm_hw_params_test_period_size;
  alsa_snd_pcm_hw_params_test_format = snd_pcm_hw_params_test_format;
  alsa_snd_pcm_hw_params_test_access = snd_pcm_hw_params_test_access;
  alsa_snd_pcm_hw_params_dump = snd_pcm_hw_params_dump;
  alsa_snd_pcm_hw_params = snd_pcm_hw_params;
  alsa_snd_pcm_hw_params_get_periods_min = snd_pcm_hw_params_get_periods_min;
  alsa_snd_pcm_hw_params_get_periods_max = snd_pcm_hw_params_get_periods_max;
  alsa_snd_pcm_hw_params_set_period_size = snd_pcm_hw_params_set_period_size;
  alsa_snd_pcm_hw_params_get_period_size_min = snd_pcm_hw_params_get_period_size_min;
  alsa_snd_pcm_hw_params_get_period_size_max = snd_pcm_hw_params_get_period_size_max;
  alsa_snd_pcm_hw_params_get_buffer_size_max = snd_pcm_hw_params_get_buffer_size_max;
  alsa_snd_pcm_hw_params_get_rate_min = snd_pcm_hw_params_get_rate_min;
  alsa_snd_pcm_hw_params_get_rate_max = snd_pcm_hw_params_get_rate_max;
  alsa_snd_pcm_hw_params_get_rate_numden = snd_pcm_hw_params_get_rate_numden;
  alsa_snd_pcm_sw_params_sizeof = snd_pcm_sw_params_sizeof;
  alsa_snd_pcm_sw_params_malloc = snd_pcm_sw_params_malloc;
  alsa_snd_pcm_sw_params_current = snd_pcm_sw_params_current;
  alsa_snd_pcm_sw_params_set_avail_min = snd_pcm_sw_params_set_avail_min;
  alsa_snd_pcm_sw_params = snd_pcm_sw_params;
  alsa_snd_pcm_sw_params_free = snd_pcm_sw_params_free;
  alsa_snd_pcm_sw_params_set_start_threshold = snd_pcm_sw_params_set_start_threshold;
  alsa_snd_pcm_sw_params_set_stop_threshold = snd_pcm_sw_params_set_stop_threshold;
  alsa_snd_pcm_sw_params_get_boundary = snd_pcm_sw_params_get_boundary;
  alsa_snd_pcm_sw_params_set_silence_threshold = snd_pcm_sw_params_set_silence_threshold;
  alsa_snd_pcm_sw_params_set_silence_size = snd_pcm_sw_params_set_silence_size;
  alsa_snd_pcm_sw_params_set_xfer_align = snd_pcm_sw_params_set_xfer_align;
  alsa_snd_pcm_sw_params_set_tstamp_mode = snd_pcm_sw_params_set_tstamp_mode;
  alsa_snd_pcm_info = snd_pcm_info;
  alsa_snd_pcm_info_sizeof = snd_pcm_info_sizeof;
  alsa_snd_pcm_info_malloc = snd_pcm_info_malloc;
  alsa_snd_pcm_info_free = snd_pcm_info_free;
  alsa_snd_pcm_info_set_device = snd_pcm_info_set_device;
  alsa_snd_pcm_info_set_subdevice = snd_pcm_info_set_subdevice;
  alsa_snd_pcm_info_set_stream = snd_pcm_info_set_stream;
  alsa_snd_pcm_info_get_name = snd_pcm_info_get_name;
  alsa_snd_pcm_info_get_card = snd_pcm_info_get_card;
  alsa_snd_ctl_pcm_next_device = snd_ctl_pcm_next_device;
  alsa_snd_ctl_pcm_info = snd_ctl_pcm_info;
  alsa_snd_ctl_open = snd_ctl_open;
  alsa_snd_ctl_close = snd_ctl_close;
  alsa_snd_ctl_card_info_malloc = snd_ctl_card_info_malloc;
  alsa_snd_ctl_card_info_free = snd_ctl_card_info_free;
  alsa_snd_ctl_card_info = snd_ctl_card_info;
  alsa_snd_ctl_card_info_sizeof = snd_ctl_card_info_sizeof;
  alsa_snd_ctl_card_info_get_name = snd_ctl_card_info_get_name;
  alsa_snd_config = &snd_config;
  alsa_snd_config_update = snd_config_update;
  alsa_snd_config_search = snd_config_search;
  alsa_snd_config_iterator_entry = snd_config_iterator_entry;
  alsa_snd_config_iterator_first = snd_config_iterator_first;
  alsa_snd_config_iterator_end = snd_config_iterator_end;
  alsa_snd_config_iterator_next = snd_config_iterator_next;
  alsa_snd_config_get_string = snd_config_get_string;
  alsa_snd_config_get_id = snd_config_get_id;
  alsa_snd_config_update_free_global = snd_config_update_free_global;
  alsa_snd_pcm_status = snd_pcm_status;
  alsa_snd_pcm_status_sizeof = snd_pcm_status_sizeof;
  alsa_snd_pcm_status_get_tstamp = snd_pcm_status_get_tstamp;
  alsa_snd_pcm_status_get_state = snd_pcm_status_get_state;
  alsa_snd_pcm_status_get_trigger_tstamp = snd_pcm_status_get_trigger_tstamp;
  alsa_snd_pcm_status_get_delay = snd_pcm_status_get_delay;
  alsa_snd_card_next = snd_card_next;
  alsa_snd_asoundlib_version = snd_asoundlib_version;
  alsa_snd_strerror = snd_strerror;
  alsa_snd_output_stdio_attach = snd_output_stdio_attach;
  return 1;
}

// PaAlsa_SetLibraryPathName
// file src/hostapi/alsa/pa_linux_alsa.c line 543
void PaAlsa_SetLibraryPathName(const char *pathName)
{
  (void)pathName;
}

// PaAlsa_SetNumPeriods
// file src/hostapi/alsa/pa_linux_alsa.c line 590
signed int PaAlsa_SetNumPeriods(signed int numPeriods)
{
  numPeriods_ = numPeriods;
  return 0;
}

// PaAlsa_SetRetriesBusy
// file src/hostapi/alsa/pa_linux_alsa.c line 4619
signed int PaAlsa_SetRetriesBusy(signed int retries)
{
  busyRetries_ = retries;
  return 0;
}

// PaAlsa_StrDup
// file src/hostapi/alsa/pa_linux_alsa.c line 1046
static signed int PaAlsa_StrDup(struct PaAlsaHostApiRepresentation *alsaApi, char **dst, const char *src)
{
  signed int result = 0;
  signed int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(src);
  len = (signed int)(return_value_strlen$1 + (unsigned long int)1);
  do
  {
    void *return_value_PaUtil_GroupAllocateMemory$2;
    return_value_PaUtil_GroupAllocateMemory$2=PaUtil_GroupAllocateMemory(alsaApi->allocations, (signed long int)len);
    *dst = (char *)return_value_PaUtil_GroupAllocateMemory$2;
    if(*dst == ((char *)NULL))
    {
      PaUtil_DebugPrint("Expression '*dst = (char *)PaUtil_GroupAllocateMemory( alsaApi->allocations, len )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1056\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  strncpy(*dst, src, (unsigned long int)len);

error:
  ;
  return result;
}

// PaJack_GetClientName
// file src/hostapi/jack/pa_jack.c line 1759
signed int PaJack_GetClientName(const char **clientName)
{
  signed int result = 0;
  struct anonymous$21 *jackHostApi = (struct anonymous$21 *)(void *)0;
  struct anonymous$21 **ref = &jackHostApi;
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int paErr;
    paErr=PaUtil_GetHostApiRepresentation((struct PaUtilHostApiRepresentation **)ref, (enum PaHostApiTypeId)paJACK);
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *err = jackErr_;
          if(err == ((const char *)NULL))
            err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
        }

      }

      PaUtil_DebugPrint("Expression 'PaUtil_GetHostApiRepresentation( (PaUtilHostApiRepresentation**)ref, paJACK )' failed in 'src/hostapi/jack/pa_jack.c', line: 1764\n");
      result = paErr;
      goto error;
    }

  }
  while((_Bool)0);
  *clientName=jack_get_client_name(jackHostApi->jack_client);

error:
  ;
  return result;
}

// PaJack_Initialize
// file src/hostapi/jack/pa_jack.c line 709
signed int PaJack_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex)
{
  signed int result = 0;
  struct anonymous$21 *jackHostApi;
  signed int activated = 0;
  enum JackStatus jackStatus = (enum JackStatus)0;
  *hostApi = (struct PaUtilHostApiRepresentation *)(void *)0;
  unsigned long int return_value_pthread_self$1;
  do
  {
    void *return_value_PaUtil_AllocateMemory$2;
    return_value_PaUtil_AllocateMemory$2=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$21) /*432ul*/ );
    jackHostApi = (struct anonymous$21 *)return_value_PaUtil_AllocateMemory$2;
    if(jackHostApi == ((struct anonymous$21 *)NULL))
    {
      PaUtil_DebugPrint("Expression 'jackHostApi = (PaJackHostApiRepresentation*) PaUtil_AllocateMemory( sizeof(PaJackHostApiRepresentation) )' failed in 'src/hostapi/jack/pa_jack.c', line: 719\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$3;
  do
  {
    jackHostApi->deviceInfoMemory=PaUtil_CreateAllocationGroup();
    if(jackHostApi->deviceInfoMemory == ((struct anonymous$14 *)NULL))
    {
      PaUtil_DebugPrint("Expression 'jackHostApi->deviceInfoMemory = PaUtil_CreateAllocationGroup()' failed in 'src/hostapi/jack/pa_jack.c', line: 720\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  mainThread_=pthread_self();
  do
  {
    signed int err;
    err=pthread_mutex_init(&jackHostApi->mtx, (const union anonymous$23 *)(void *)0);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  do
  {
    signed int PaJack_Initialize$$1$$4$$err;
    PaJack_Initialize$$1$$4$$err=pthread_cond_init(&jackHostApi->cond, (const union anonymous$23 *)(void *)0);
    /* assertion err == 0 */
    assert(PaJack_Initialize$$1$$4$$err == 0);
  }
  while((_Bool)0);
  jackHostApi->jack_client=jack_client_open(clientName_, (enum JackOptions)JackNoStartServer, &jackStatus);
  unsigned long int return_value_pthread_self$4;
  unsigned int return_value_jack_get_buffer_size$5;
  unsigned long int return_value_pthread_self$6;
  unsigned long int return_value_pthread_self$8;
  unsigned long int return_value_pthread_self$10;
  if(jackHostApi->jack_client == ((struct _jack_client *)NULL))
    result = 0;

  else
  {
    jackHostApi->hostApiIndex = hostApiIndex;
    *hostApi = &jackHostApi->commonHostApiRep;
    (*hostApi)->info.structVersion = 1;
    (*hostApi)->info.type = (enum PaHostApiTypeId)paJACK;
    (*hostApi)->info.name = "JACK Audio Connection Kit";
    do
    {
      signed int paErr;
      paErr=BuildDeviceList$link1(jackHostApi);
      if(!(paErr >= 0))
      {
        if(paErr == -9999)
        {
          return_value_pthread_self$4=pthread_self();
          if(return_value_pthread_self$4 == mainThread_)
          {
            const char *PaJack_Initialize$$1$$6$$1$$1$$err = jackErr_;
            if(PaJack_Initialize$$1$$6$$1$$1$$err == ((const char *)NULL))
              PaJack_Initialize$$1$$6$$1$$1$$err = "unknown error";

            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, PaJack_Initialize$$1$$6$$1$$1$$err);
          }

        }

        PaUtil_DebugPrint("Expression 'BuildDeviceList( jackHostApi )' failed in 'src/hostapi/jack/pa_jack.c', line: 752\n");
        result = paErr;
        goto error;
      }

    }
    while((_Bool)0);
    (*hostApi)->Terminate = Terminate$link2;
    (*hostApi)->OpenStream = OpenStream$link2;
    (*hostApi)->IsFormatSupported = IsFormatSupported$link2;
    PaUtil_InitializeStreamInterface(&jackHostApi->callbackStreamInterface, CloseStream$link2, StartStream$link2, StopStream$link2, AbortStream$link2, IsStreamStopped$link2, IsStreamActive$link2, GetStreamTime$link2, GetStreamCpuLoad$link2, PaUtil_DummyRead, PaUtil_DummyWrite, PaUtil_DummyGetReadAvailable, PaUtil_DummyGetWriteAvailable);
    PaUtil_InitializeStreamInterface(&jackHostApi->blockingStreamInterface, CloseStream$link2, StartStream$link2, StopStream$link2, AbortStream$link2, IsStreamStopped$link2, IsStreamActive$link2, GetStreamTime$link2, PaUtil_DummyGetCpuLoad, BlockingReadStream, BlockingWriteStream, BlockingGetStreamReadAvailable, BlockingGetStreamWriteAvailable);
    jackHostApi->outputBase = (unsigned long int)0;
    jackHostApi->inputBase = jackHostApi->outputBase;
    jackHostApi->xrun = 0;
    jackHostApi->toRemove = (struct PaJackStream *)(void *)0;
    jackHostApi->toAdd = jackHostApi->toRemove;
    jackHostApi->processQueue = (struct PaJackStream *)(void *)0;
    jackHostApi->jackIsDown = 0;
    jack_on_shutdown(jackHostApi->jack_client, JackOnShutdown, (void *)jackHostApi);
    jack_set_error_function(JackErrorCallback);
    return_value_jack_get_buffer_size$5=jack_get_buffer_size(jackHostApi->jack_client);
    jackHostApi->jack_buffer_size = (signed int)return_value_jack_get_buffer_size$5;
    jack_set_sample_rate_callback(jackHostApi->jack_client, JackSrCb, (void *)jackHostApi);
    do
    {
      signed int return_value_jack_set_xrun_callback$7;
      return_value_jack_set_xrun_callback$7=jack_set_xrun_callback(jackHostApi->jack_client, JackXRunCb, (void *)jackHostApi);
      if(!(return_value_jack_set_xrun_callback$7 == 0))
      {
        return_value_pthread_self$6=pthread_self();
        if(return_value_pthread_self$6 == mainThread_)
        {
          const char *PaJack_Initialize$$1$$7$$1$$1$$err = jackErr_;
          if(PaJack_Initialize$$1$$7$$1$$1$$err == ((const char *)NULL))
            PaJack_Initialize$$1$$7$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, PaJack_Initialize$$1$$7$$1$$1$$err);
        }

        PaUtil_DebugPrint("Expression '!jack_set_xrun_callback( jackHostApi->jack_client, JackXRunCb, jackHostApi )' failed in 'src/hostapi/jack/pa_jack.c', line: 786\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      signed int return_value_jack_set_process_callback$9;
      return_value_jack_set_process_callback$9=jack_set_process_callback(jackHostApi->jack_client, JackCallback, (void *)jackHostApi);
      if(!(return_value_jack_set_process_callback$9 == 0))
      {
        return_value_pthread_self$8=pthread_self();
        if(return_value_pthread_self$8 == mainThread_)
        {
          const char *PaJack_Initialize$$1$$8$$1$$1$$err = jackErr_;
          if(PaJack_Initialize$$1$$8$$1$$1$$err == ((const char *)NULL))
            PaJack_Initialize$$1$$8$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, PaJack_Initialize$$1$$8$$1$$1$$err);
        }

        PaUtil_DebugPrint("Expression '!jack_set_process_callback( jackHostApi->jack_client, JackCallback, jackHostApi )' failed in 'src/hostapi/jack/pa_jack.c', line: 787\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      signed int return_value_jack_activate$11;
      return_value_jack_activate$11=jack_activate(jackHostApi->jack_client);
      if(!(return_value_jack_activate$11 == 0))
      {
        return_value_pthread_self$10=pthread_self();
        if(return_value_pthread_self$10 == mainThread_)
        {
          const char *PaJack_Initialize$$1$$9$$1$$1$$err = jackErr_;
          if(PaJack_Initialize$$1$$9$$1$$1$$err == ((const char *)NULL))
            PaJack_Initialize$$1$$9$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, PaJack_Initialize$$1$$9$$1$$1$$err);
        }

        PaUtil_DebugPrint("Expression '!jack_activate( jackHostApi->jack_client )' failed in 'src/hostapi/jack/pa_jack.c', line: 788\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    activated = 1;
    return result;
  }

error:
  ;
  if(!(activated == 0))
    do
    {
      signed int PaJack_Initialize$$1$$10$$err;
      PaJack_Initialize$$1$$10$$err=jack_deactivate(jackHostApi->jack_client);
      /* assertion err == 0 */
      assert(PaJack_Initialize$$1$$10$$err == 0);
    }
    while((_Bool)0);

  if(!(jackHostApi == ((struct anonymous$21 *)NULL)))
  {
    if(!(jackHostApi->jack_client == ((struct _jack_client *)NULL)))
      do
      {
        signed int PaJack_Initialize$$1$$11$$1$$err;
        PaJack_Initialize$$1$$11$$1$$err=jack_client_close(jackHostApi->jack_client);
        /* assertion err == 0 */
        assert(PaJack_Initialize$$1$$11$$1$$err == 0);
      }
      while((_Bool)0);

    if(!(jackHostApi->deviceInfoMemory == ((struct anonymous$14 *)NULL)))
    {
      PaUtil_FreeAllAllocations(jackHostApi->deviceInfoMemory);
      PaUtil_DestroyAllocationGroup(jackHostApi->deviceInfoMemory);
    }

    PaUtil_FreeMemory((void *)jackHostApi);
  }

  return result;
}

// PaJack_SetClientName
// file src/hostapi/jack/pa_jack.c line 1748
signed int PaJack_SetClientName(const char *name)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(name);
  signed int return_value_jack_client_name_size$2;
  return_value_jack_client_name_size$2=jack_client_name_size();
  if(!((unsigned long int)return_value_jack_client_name_size$2 >= return_value_strlen$1))
    return -9995;

  else
  {
    clientName_ = name;
    return 0;
  }
}

// PaOSS_AudioThreadProc
// file src/hostapi/oss/pa_unix_oss.c line 1601
static void * PaOSS_AudioThreadProc(void *userData)
{
  signed int result = 0;
  struct PaOssStream *stream = (struct PaOssStream *)userData;
  unsigned long int framesAvail = (unsigned long int)0;
  unsigned long int framesProcessed = (unsigned long int)0;
  signed int callbackResult = 0;
  signed int triggered = stream->triggered;
  signed int initiateProcessing = triggered;
  unsigned long int cbFlags = (unsigned long int)0;
  struct PaStreamCallbackTimeInfo timeInfo = { .inputBufferAdcTime=(double)0, .currentTime=(double)0, .outputBufferDacTime=(double)0 };
  /* assertion stream */
  assert(stream != ((struct PaOssStream *)NULL));
  _Bool tmp_if_expr$2;
  signed int return_value_PaUtil_IsBufferProcessorOutputEmpty$1;
  do
  {
    struct anonymous$18 __cancel_buf;
    void (*__cancel_routine)(void *) = OnExit$link1;
    void *__cancel_arg = (void *)stream;
    signed int __not_first_call;
    __not_first_call=__sigsetjmp((struct __jmp_buf_tag *)(void *)__cancel_buf.__cancel_jmp_buf, 0);
    if(!((signed long int)__not_first_call == 0l))
    {
      __cancel_routine(__cancel_arg);
      __pthread_unwind_next(&__cancel_buf);
    }

    __pthread_register_cancel(&__cancel_buf);
    do
    {

    __CPROVER_DUMP_L3:
      ;
      paUtilErr_$link1=PaOssStream_Prepare(stream);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStream_Prepare( stream )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1626\n");
        result = paUtilErr_$link1;
        goto error;
      }

      if(!(initiateProcessing == 0))
      {
        if(!(stream->capture == ((struct anonymous$3 *)NULL)))
          ModifyBlocking(stream->capture->fd, 1);

        if(!(stream->playback == ((struct anonymous$3 *)NULL)))
          ModifyBlocking(stream->playback->fd, 1);

      }

      while((_Bool)1)
      {
        pthread_testcancel();
        if(!(stream->callbackStop == 0))
        {
          if(callbackResult == 0)
            callbackResult = 1;

        }

        if(initiateProcessing == 0)
        {
          do
          {
            paUtilErr_$link1=PaOssStream_WaitForFrames(stream, &framesAvail);
            if(!(paUtilErr_$link1 >= 0))
            {
              PaUtil_DebugPrint("Expression 'PaOssStream_WaitForFrames( stream, &framesAvail )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1663\n");
              result = paUtilErr_$link1;
              goto error;
            }

          }
          while((_Bool)0);
          /* assertion framesAvail % stream->framesPerHostBuffer == 0 */
          assert(framesAvail % stream->framesPerHostBuffer == (unsigned long int)0);
        }

        else
          framesAvail = stream->framesPerHostBuffer;
        while(framesAvail >= 1ul)
        {
          unsigned long int frames = framesAvail;
          pthread_testcancel();
          PaUtil_BeginCpuLoadMeasurement(&stream->cpuLoadMeasurer);
          if(!(stream->capture == ((struct anonymous$3 *)NULL)))
          {
            do
            {
              paUtilErr_$link1=PaOssStreamComponent_Read(stream->capture, &frames);
              if(!(paUtilErr_$link1 >= 0))
              {
                PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Read( stream->capture, &frames )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1695\n");
                result = paUtilErr_$link1;
                goto error;
              }

            }
            while((_Bool)0);
            if(!(frames >= framesAvail))
              framesAvail = frames;

          }

          PaUtil_BeginBufferProcessing(&stream->bufferProcessor, &timeInfo, cbFlags);
          cbFlags = (unsigned long int)0;
          do
          {
            paUtilErr_$link1=SetUpBuffers(stream, framesAvail);
            if(!(paUtilErr_$link1 >= 0))
            {
              PaUtil_DebugPrint("Expression 'SetUpBuffers( stream, framesAvail )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1724\n");
              result = paUtilErr_$link1;
              goto error;
            }

          }
          while((_Bool)0);
          framesProcessed=PaUtil_EndBufferProcessing(&stream->bufferProcessor, &callbackResult);
          /* assertion framesProcessed == framesAvail */
          assert(framesProcessed == framesAvail);
          PaUtil_EndCpuLoadMeasurement(&stream->cpuLoadMeasurer, framesProcessed);
          if(!(stream->playback == ((struct anonymous$3 *)NULL)))
          {
            frames = framesAvail;
            do
            {
              paUtilErr_$link1=PaOssStreamComponent_Write(stream->playback, &frames);
              if(!(paUtilErr_$link1 >= 0))
              {
                PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Write( stream->playback, &frames )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1735\n");
                result = paUtilErr_$link1;
                goto error;
              }

            }
            while((_Bool)0);
          }

          framesAvail = framesAvail - framesProcessed;
          stream->framesProcessed = stream->framesProcessed + (signed int)framesProcessed;
          if(!(callbackResult == 0))
            break;

        }
        if(triggered == 0 || !(initiateProcessing == 0))
        {
          if(!(stream->capture == ((struct anonymous$3 *)NULL)))
            do
            {
              paUtilErr_$link1=ModifyBlocking(stream->capture->fd, 0);
              if(!(paUtilErr_$link1 >= 0))
              {
                PaUtil_DebugPrint("Expression 'ModifyBlocking( stream->capture->fd, 0 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1754\n");
                result = paUtilErr_$link1;
                goto error;
              }

            }
            while((_Bool)0);

          if(!(stream->playback == ((struct anonymous$3 *)NULL)))
          {
            if(stream->sharedDevice == 0)
              do
              {
                paUtilErr_$link1=ModifyBlocking(stream->playback->fd, 0);
                if(!(paUtilErr_$link1 >= 0))
                {
                  PaUtil_DebugPrint("Expression 'ModifyBlocking( stream->playback->fd, 0 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1756\n");
                  result = paUtilErr_$link1;
                  goto error;
                }

              }
              while((_Bool)0);

          }

          initiateProcessing = 0;
          sem_post(&stream->semaphore);
        }

        if(!(callbackResult == 0))
        {
          stream->callbackAbort = (volatile signed int)(callbackResult == 2);
          if(!(stream->callbackAbort == 0))
            tmp_if_expr$2 = (_Bool)1;

          else
          {
            return_value_PaUtil_IsBufferProcessorOutputEmpty$1=PaUtil_IsBufferProcessorOutputEmpty(&stream->bufferProcessor);
            tmp_if_expr$2 = return_value_PaUtil_IsBufferProcessorOutputEmpty$1 != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$2)
            break;

        }

      }

    __CPROVER_DUMP_L31:
      ;
    }
    while((_Bool)0);
    __pthread_unregister_cancel(&__cancel_buf);
    __cancel_routine(__cancel_arg);
  }
  while((_Bool)0);

error:
  ;
  pthread_exit((void *)0);
}

// PaOSS_GetStreamInputDevice
// file src/hostapi/oss/pa_unix_oss.c line 2046
const char * PaOSS_GetStreamInputDevice(void *s)
{
  struct PaOssStream *stream = (struct PaOssStream *)s;
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
    return stream->capture->devName;

  else
    return (const char *)(void *)0;
}

// PaOSS_GetStreamOutputDevice
// file src/hostapi/oss/pa_unix_oss.c line 2058
const char * PaOSS_GetStreamOutputDevice(void *s)
{
  struct PaOssStream *stream = (struct PaOssStream *)s;
  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
    return stream->playback->devName;

  else
    return (const char *)(void *)0;
}

// PaOSS_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 241
signed int PaOSS_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex)
{
  signed int result = 0;
  struct anonymous$1 *ossHostApi = (struct anonymous$1 *)(void *)0;
  do
  {
    void *return_value_PaUtil_AllocateMemory$1;
    return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$1) /*280ul*/ );
    ossHostApi = (struct anonymous$1 *)return_value_PaUtil_AllocateMemory$1;
    if(ossHostApi == ((struct anonymous$1 *)NULL))
    {
      PaUtil_DebugPrint("Expression 'ossHostApi = (PaOSSHostApiRepresentation*)PaUtil_AllocateMemory( sizeof(PaOSSHostApiRepresentation) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 247\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    ossHostApi->allocations=PaUtil_CreateAllocationGroup();
    if(ossHostApi->allocations == ((struct anonymous$14 *)NULL))
    {
      PaUtil_DebugPrint("Expression 'ossHostApi->allocations = PaUtil_CreateAllocationGroup()' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 248\n");
      result = -9992;
      goto error;
    }

  }
  while((_Bool)0);
  ossHostApi->hostApiIndex = hostApiIndex;
  *hostApi = &ossHostApi->inheritedHostApiRep;
  (*hostApi)->info.structVersion = 1;
  (*hostApi)->info.type = (enum PaHostApiTypeId)paOSS;
  (*hostApi)->info.name = "OSS";
  (*hostApi)->Terminate = Terminate$link3;
  (*hostApi)->OpenStream = OpenStream$link3;
  (*hostApi)->IsFormatSupported = IsFormatSupported$link3;
  do
  {
    paUtilErr_$link1=BuildDeviceList$link2(ossHostApi);
    if(!(paUtilErr_$link1 >= 0))
    {
      PaUtil_DebugPrint("Expression 'BuildDeviceList( ossHostApi )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 260\n");
      result = paUtilErr_$link1;
      goto error;
    }

  }
  while((_Bool)0);
  PaUtil_InitializeStreamInterface(&ossHostApi->callbackStreamInterface, CloseStream$link3, StartStream$link3, StopStream$link3, AbortStream$link3, IsStreamStopped$link3, IsStreamActive$link3, GetStreamTime$link3, GetStreamCpuLoad$link3, PaUtil_DummyRead, PaUtil_DummyWrite, PaUtil_DummyGetReadAvailable, PaUtil_DummyGetWriteAvailable);
  PaUtil_InitializeStreamInterface(&ossHostApi->blockingStreamInterface, CloseStream$link3, StartStream$link3, StopStream$link3, AbortStream$link3, IsStreamStopped$link3, IsStreamActive$link3, GetStreamTime$link3, PaUtil_DummyGetCpuLoad, ReadStream$link2, WriteStream$link2, GetStreamReadAvailable$link2, GetStreamWriteAvailable$link2);
  mainThread_$link1=pthread_self();
  return result;

error:
  ;
  if(!(ossHostApi == ((struct anonymous$1 *)NULL)))
  {
    if(!(ossHostApi->allocations == ((struct anonymous$14 *)NULL)))
    {
      PaUtil_FreeAllAllocations(ossHostApi->allocations);
      PaUtil_DestroyAllocationGroup(ossHostApi->allocations);
    }

    PaUtil_FreeMemory((void *)ossHostApi);
  }

  return result;
}

// PaOssStreamComponent_BufferSize
// file src/hostapi/oss/pa_unix_oss.c line 981
static unsigned long int PaOssStreamComponent_BufferSize(struct anonymous$3 *component)
{
  unsigned int return_value_PaOssStreamComponent_FrameSize$1;
  return_value_PaOssStreamComponent_FrameSize$1=PaOssStreamComponent_FrameSize(component);
  return (unsigned long int)return_value_PaOssStreamComponent_FrameSize$1 * component->hostFrames * component->numBufs;
}

// PaOssStreamComponent_Configure
// file src/hostapi/oss/pa_unix_oss.c line 988
static signed int PaOssStreamComponent_Configure(struct anonymous$3 *component, double sampleRate, unsigned long int framesPerBuffer, enum anonymous$4 streamMode, struct anonymous$3 *master)
{
  signed int result = 0;
  signed int temp;
  signed int nativeFormat;
  signed int sr = (signed int)sampleRate;
  unsigned long int availableFormats = (unsigned long int)0;
  unsigned long int hostFormat = (unsigned long int)0;
  signed int chans = component->userChannelCount;
  signed int frgmt;
  signed int numBufs;
  signed int bytesPerBuf;
  unsigned long int bufSz;
  unsigned long int fragSz;
  struct audio_buf_info bufInfo;
  unsigned long int tmp_if_expr$3;
  signed int return_value_Pa_GetSampleSize$2;
  unsigned long int return_value_pthread_self$7;
  unsigned long int return_value_pthread_self$10;
  unsigned long int return_value_pthread_self$13;
  unsigned long int return_value_pthread_self$16;
  unsigned long int return_value_pthread_self$20;
  unsigned long int return_value_pthread_self$23;
  if(master == ((struct anonymous$3 *)NULL))
  {
    if(framesPerBuffer == 0ul)
    {
      fragSz = (unsigned long int)((component->latency * sampleRate) / (double)3);
      bufSz = fragSz * (unsigned long int)4;
    }

    else
    {
      fragSz = framesPerBuffer;
      bufSz = (unsigned long int)(component->latency * sampleRate) + fragSz;
    }
    do
    {
      paUtilErr_$link1=GetAvailableFormats$link1(component, &availableFormats);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'GetAvailableFormats( component, &availableFormats )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1022\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    hostFormat=PaUtil_SelectClosestAvailableFormat(availableFormats, component->userFormat);
    numBufs = (signed int)(bufSz / fragSz > (unsigned long int)2 ? bufSz / fragSz : (unsigned long int)2);
    signed int return_value_Pa_GetSampleSize$1;
    return_value_Pa_GetSampleSize$1=Pa_GetSampleSize(hostFormat);
    if(fragSz * (unsigned long int)return_value_Pa_GetSampleSize$1 * (unsigned long int)chans >= 17ul)
    {
      return_value_Pa_GetSampleSize$2=Pa_GetSampleSize(hostFormat);
      tmp_if_expr$3 = fragSz * (unsigned long int)return_value_Pa_GetSampleSize$2 * (unsigned long int)chans;
    }

    else
      tmp_if_expr$3 = (unsigned long int)16;
    bytesPerBuf = (signed int)tmp_if_expr$3;
    signed int return_value_CalcHigherLogTwo$4;
    return_value_CalcHigherLogTwo$4=CalcHigherLogTwo(bytesPerBuf);
    frgmt = (numBufs << 16) + (return_value_CalcHigherLogTwo$4 & 0xffff);
    do
    {
      sysErr_=ioctl(component->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &frgmt);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$7=pthread_self();
        if(return_value_pthread_self$7 == mainThread_$link1)
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          char *return_value_strerror$6;
          return_value_strerror$6=strerror(*return_value___errno_location$5);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$6);
        }

        PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_SETFRAGMENT, &frgmt )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1034\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_$link1=Pa2OssFormat(hostFormat, &temp);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'Pa2OssFormat( hostFormat, &temp )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1040\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    nativeFormat = temp;
    do
    {
      sysErr_=ioctl(component->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(5 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &temp);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$10=pthread_self();
        if(return_value_pthread_self$10 == mainThread_$link1)
        {
          signed int *return_value___errno_location$8;
          return_value___errno_location$8=__errno_location();
          char *return_value_strerror$9;
          return_value_strerror$9=strerror(*return_value___errno_location$8);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$9);
        }

        PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_SETFMT, &temp )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1042\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    do
      if(!(temp == nativeFormat))
      {
        PaUtil_DebugPrint("Expression 'temp == nativeFormat' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1043\n");
        result = -9986;
        goto error;
      }

    while((_Bool)0);
    do
    {
      sysErr_=ioctl(component->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(6 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &chans);
      if(!(sysErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_CHANNELS, &chans )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1046\n");
        result = -9994;
        goto error;
      }

    }
    while((_Bool)0);
    do
      if(!(chans >= component->userChannelCount))
      {
        PaUtil_DebugPrint("Expression 'chans >= component->userChannelCount' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1048\n");
        result = -9998;
        goto error;
      }

    while((_Bool)0);
    do
    {
      sysErr_=ioctl(component->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(2 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &sr);
      if(!(sysErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_SPEED, &sr )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1051\n");
        result = -9997;
        goto error;
      }

    }
    while((_Bool)0);
    double return_value_fabs$17;
    return_value_fabs$17=fabs(sampleRate - (double)sr);
    if(return_value_fabs$17 / sampleRate > 0.01)
      do
      {
        paUtilErr_$link1 = -9997;
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'paInvalidSampleRate' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1057\n");
          result = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);

    do
    {
      sysErr_=ioctl(component->fd, (signed int)streamMode == StreamMode_In ? (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(13 << 0)) | sizeof(struct audio_buf_info) /*16ul*/  << 0 + 8 + 8 : (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(12 << 0)) | sizeof(struct audio_buf_info) /*16ul*/  << 0 + 8 + 8, &bufInfo);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$20=pthread_self();
        if(return_value_pthread_self$20 == mainThread_$link1)
        {
          signed int *return_value___errno_location$18;
          return_value___errno_location$18=__errno_location();
          char *return_value_strerror$19;
          return_value_strerror$19=strerror(*return_value___errno_location$18);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$19);
        }

        PaUtil_DebugPrint("Expression 'ioctl( component->fd, streamMode == StreamMode_In ? SNDCTL_DSP_GETISPACE : SNDCTL_DSP_GETOSPACE, &bufInfo )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1061\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    component->numBufs = (unsigned long int)bufInfo.fragstotal;
    do
    {
      sysErr_=ioctl(component->fd, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(4 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &bytesPerBuf);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$23=pthread_self();
        if(return_value_pthread_self$23 == mainThread_$link1)
        {
          signed int *return_value___errno_location$21;
          return_value___errno_location$21=__errno_location();
          char *return_value_strerror$22;
          return_value_strerror$22=strerror(*return_value___errno_location$21);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$22);
        }

        PaUtil_DebugPrint("Expression 'ioctl( component->fd, SNDCTL_DSP_GETBLKSIZE, &bytesPerBuf )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1065\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    signed int return_value_Pa_GetSampleSize$24;
    return_value_Pa_GetSampleSize$24=Pa_GetSampleSize(hostFormat);
    component->hostFrames = (unsigned long int)((bytesPerBuf / return_value_Pa_GetSampleSize$24) / chans);
    component->hostChannelCount = chans;
    component->hostFormat = hostFormat;
  }

  else
  {
    component->hostFormat = master->hostFormat;
    component->hostFrames = master->hostFrames;
    component->hostChannelCount = master->hostChannelCount;
    component->numBufs = master->numBufs;
  }
  do
  {
    unsigned long int return_value_PaOssStreamComponent_BufferSize$25;
    return_value_PaOssStreamComponent_BufferSize$25=PaOssStreamComponent_BufferSize(component);
    component->buffer=PaUtil_AllocateMemory((signed long int)return_value_PaOssStreamComponent_BufferSize$25);
    if(component->buffer == NULL)
    {
      PaUtil_DebugPrint("Expression 'component->buffer = PaUtil_AllocateMemory( PaOssStreamComponent_BufferSize( component ) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1080\n");
      result = -9992;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// PaOssStreamComponent_FrameSize
// file src/hostapi/oss/pa_unix_oss.c line 973
static unsigned int PaOssStreamComponent_FrameSize(struct anonymous$3 *component)
{
  signed int return_value_Pa_GetSampleSize$1;
  return_value_Pa_GetSampleSize$1=Pa_GetSampleSize(component->hostFormat);
  return (unsigned int)(return_value_Pa_GetSampleSize$1 * component->hostChannelCount);
}

// PaOssStreamComponent_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 747
static signed int PaOssStreamComponent_Initialize(struct anonymous$3 *component, const struct PaStreamParameters *parameters, signed int callbackMode, signed int fd, const char *deviceName)
{
  signed int result = 0;
  /* assertion component */
  assert(component != ((struct anonymous$3 *)NULL));
  memset((void *)component, 0, sizeof(struct anonymous$3) /*88ul*/ );
  component->fd = fd;
  component->devName = deviceName;
  component->userChannelCount = parameters->channelCount;
  component->userFormat = parameters->sampleFormat;
  component->latency = parameters->suggestedLatency;
  component->userInterleaved = (signed int)!((parameters->sampleFormat & (unsigned long int)0x80000000) != 0ul);
  if(callbackMode == 0)
  {
    if(component->userInterleaved == 0)
      do
      {
        void *return_value_PaUtil_AllocateMemory$1;
        return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)(sizeof(void *) /*8ul*/  * (unsigned long int)component->userChannelCount));
        component->userBuffers = (void **)return_value_PaUtil_AllocateMemory$1;
        if(component->userBuffers == ((void **)NULL))
        {
          PaUtil_DebugPrint("Expression 'component->userBuffers = PaUtil_AllocateMemory( sizeof (void *) * component->userChannelCount )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 766\n");
          result = -9992;
          break;
        }

      }
      while((_Bool)0);

  }


error:
  ;
  return result;
}

// PaOssStreamComponent_Read
// file src/hostapi/oss/pa_unix_oss.c line 1086
static signed int PaOssStreamComponent_Read(struct anonymous$3 *component, unsigned long int *frames)
{
  signed int result = 0;
  unsigned long int len;
  unsigned int return_value_PaOssStreamComponent_FrameSize$1;
  return_value_PaOssStreamComponent_FrameSize$1=PaOssStreamComponent_FrameSize(component);
  len = *frames * (unsigned long int)return_value_PaOssStreamComponent_FrameSize$1;
  signed long int bytesRead;
  unsigned long int return_value_pthread_self$4;
  do
  {
    bytesRead=read(component->fd, component->buffer, len);
    sysErr_ = (signed int)bytesRead;
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$4=pthread_self();
      if(return_value_pthread_self$4 == mainThread_$link1)
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$3);
      }

      PaUtil_DebugPrint("Expression 'bytesRead = read( component->fd, component->buffer, len )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1092\n");
      result = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned int return_value_PaOssStreamComponent_FrameSize$5;
  return_value_PaOssStreamComponent_FrameSize$5=PaOssStreamComponent_FrameSize(component);
  *frames = (unsigned long int)(bytesRead / (signed long int)return_value_PaOssStreamComponent_FrameSize$5);

error:
  ;
  return result;
}

// PaOssStreamComponent_Terminate
// file src/hostapi/oss/pa_unix_oss.c line 773
static void PaOssStreamComponent_Terminate(struct anonymous$3 *component)
{
  /* assertion component */
  assert(component != ((struct anonymous$3 *)NULL));
  if(component->fd >= 0)
    close(component->fd);

  if(!(component->buffer == NULL))
    PaUtil_FreeMemory(component->buffer);

  if(!(component->userBuffers == ((void **)NULL)))
    PaUtil_FreeMemory((void *)component->userBuffers);

  PaUtil_FreeMemory((void *)component);
}

// PaOssStreamComponent_Write
// file src/hostapi/oss/pa_unix_oss.c line 1100
static signed int PaOssStreamComponent_Write(struct anonymous$3 *component, unsigned long int *frames)
{
  signed int result = 0;
  unsigned long int len;
  unsigned int return_value_PaOssStreamComponent_FrameSize$1;
  return_value_PaOssStreamComponent_FrameSize$1=PaOssStreamComponent_FrameSize(component);
  len = *frames * (unsigned long int)return_value_PaOssStreamComponent_FrameSize$1;
  signed long int bytesWritten;
  unsigned long int return_value_pthread_self$4;
  do
  {
    bytesWritten=write(component->fd, component->buffer, len);
    sysErr_ = (signed int)bytesWritten;
    if(!(sysErr_ >= 0))
    {
      return_value_pthread_self$4=pthread_self();
      if(return_value_pthread_self$4 == mainThread_$link1)
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$3);
      }

      PaUtil_DebugPrint("Expression 'bytesWritten = write( component->fd, component->buffer, len )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1106\n");
      result = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned int return_value_PaOssStreamComponent_FrameSize$5;
  return_value_PaOssStreamComponent_FrameSize$5=PaOssStreamComponent_FrameSize(component);
  *frames = (unsigned long int)(bytesWritten / (signed long int)return_value_PaOssStreamComponent_FrameSize$5);

error:
  ;
  return result;
}

// PaOssStream_Configure
// file src/hostapi/oss/pa_unix_oss.c line 1119
static signed int PaOssStream_Configure(struct PaOssStream *stream, double sampleRate, unsigned long int framesPerBuffer, double *inputLatency, double *outputLatency)
{
  signed int result = 0;
  signed int duplex;
  _Bool tmp_if_expr$1;
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
    tmp_if_expr$1 = stream->playback != ((struct anonymous$3 *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  duplex = (signed int)tmp_if_expr$1;
  unsigned long int framesPerHostBuffer = (unsigned long int)0;
  unsigned long int return_value_pthread_self$4;
  if(!(duplex == 0))
  {
    if(!(stream->sharedDevice == 0))
      do
      {
        sysErr_=ioctl(stream->capture->fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(22 << 0) | (unsigned int)(0 << 0 + 8 + 8)), 0);
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$4=pthread_self();
          if(return_value_pthread_self$4 == mainThread_$link1)
          {
            signed int *return_value___errno_location$2;
            return_value___errno_location$2=__errno_location();
            char *return_value_strerror$3;
            return_value_strerror$3=strerror(*return_value___errno_location$2);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$3);
          }

          PaUtil_DebugPrint("Expression 'ioctl( stream->capture->fd, SNDCTL_DSP_SETDUPLEX, 0 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1128\n");
          result = -9999;
          goto error;
        }

      }
      while((_Bool)0);

  }

  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
  {
    struct anonymous$3 *component = stream->capture;
    do
    {
      paUtilErr_$link1=PaOssStreamComponent_Configure(component, sampleRate, framesPerBuffer, (enum anonymous$4)StreamMode_In, (struct anonymous$3 *)(void *)0);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Configure( component, sampleRate, framesPerBuffer, StreamMode_In, NULL )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1134\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    /* assertion component->hostChannelCount > 0 */
    assert(component->hostChannelCount > 0);
    /* assertion component->hostFrames > 0 */
    assert(component->hostFrames > (unsigned long int)0);
    *inputLatency = (double)(component->hostFrames * (component->numBufs - (unsigned long int)1)) / sampleRate;
  }

  struct anonymous$3 *tmp_if_expr$5;
  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
  {
    struct anonymous$3 *PaOssStream_Configure$$1$$3$$component = stream->playback;
    struct anonymous$3 *master;
    if(!(stream->sharedDevice == 0))
      tmp_if_expr$5 = stream->capture;

    else
      tmp_if_expr$5 = (struct anonymous$3 *)(void *)0;
    master = tmp_if_expr$5;
    do
    {
      paUtilErr_$link1=PaOssStreamComponent_Configure(PaOssStream_Configure$$1$$3$$component, sampleRate, framesPerBuffer, (enum anonymous$4)StreamMode_Out, master);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Configure( component, sampleRate, framesPerBuffer, StreamMode_Out, master )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1145\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    /* assertion component->hostChannelCount > 0 */
    assert(PaOssStream_Configure$$1$$3$$component->hostChannelCount > 0);
    /* assertion component->hostFrames > 0 */
    assert(PaOssStream_Configure$$1$$3$$component->hostFrames > (unsigned long int)0);
    *outputLatency = (double)(PaOssStream_Configure$$1$$3$$component->hostFrames * (PaOssStream_Configure$$1$$3$$component->numBufs - (unsigned long int)1)) / sampleRate;
  }

  unsigned long int tmp_if_expr$6;
  if(!(duplex == 0))
  {
    if(!(stream->capture->hostFrames >= stream->playback->hostFrames))
      tmp_if_expr$6 = stream->capture->hostFrames;

    else
      tmp_if_expr$6 = stream->playback->hostFrames;
    framesPerHostBuffer = tmp_if_expr$6;
  }

  else
    if(!(stream->capture == ((struct anonymous$3 *)NULL)))
      framesPerHostBuffer = stream->capture->hostFrames;

    else
      if(!(stream->playback == ((struct anonymous$3 *)NULL)))
        framesPerHostBuffer = stream->playback->hostFrames;

  stream->framesPerHostBuffer = framesPerHostBuffer;
  double return_value_ceil$7;
  return_value_ceil$7=ceil((1e6 * (double)framesPerHostBuffer) / sampleRate);
  stream->pollTimeout = (unsigned long int)(signed int)return_value_ceil$7;
  stream->streamRepresentation.streamInfo.sampleRate = sampleRate;
  stream->sampleRate = stream->streamRepresentation.streamInfo.sampleRate;

error:
  ;
  return result;
}

// PaOssStream_Initialize
// file src/hostapi/oss/pa_unix_oss.c line 852
static signed int PaOssStream_Initialize(struct PaOssStream *stream, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, signed int (*callback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData, unsigned long int streamFlags, struct anonymous$1 *ossApi)
{
  signed int result = 0;
  signed int idev;
  signed int odev;
  struct PaUtilHostApiRepresentation *hostApi = &ossApi->inheritedHostApiRep;
  const char *idevName = (const char *)(void *)0;
  const char *odevName = (const char *)(void *)0;
  /* assertion stream */
  assert(stream != ((struct PaOssStream *)NULL));
  memset((void *)stream, 0, sizeof(struct PaOssStream) /*552ul*/ );
  stream->isStopped = 1;
  do
  {
    paUtilErr_$link1=PaUtil_InitializeThreading(&stream->threading);
    if(!(paUtilErr_$link1 >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUtil_InitializeThreading( &stream->threading )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 866\n");
      result = paUtilErr_$link1;
      goto error;
    }

  }
  while((_Bool)0);
  if(!(inputParameters == ((const struct PaStreamParameters *)NULL)) && !(outputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    if(inputParameters->device == outputParameters->device)
      stream->sharedDevice = 1;

  }

  if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
    idevName = hostApi->deviceInfos[(signed long int)inputParameters->device]->name;

  if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
    odevName = hostApi->deviceInfos[(signed long int)outputParameters->device]->name;

  do
  {
    paUtilErr_$link1=OpenDevices(idevName, odevName, &idev, &odev);
    if(!(paUtilErr_$link1 >= 0))
    {
      PaUtil_DebugPrint("Expression 'OpenDevices( idevName, odevName, &idev, &odev )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 878\n");
      result = paUtilErr_$link1;
      goto error;
    }

  }
  while((_Bool)0);
  if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    do
    {
      void *return_value_PaUtil_AllocateMemory$1;
      return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$3) /*88ul*/ );
      stream->capture = (struct anonymous$3 *)return_value_PaUtil_AllocateMemory$1;
      if(stream->capture == ((struct anonymous$3 *)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->capture = PaUtil_AllocateMemory( sizeof (PaOssStreamComponent) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 881\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_$link1=PaOssStreamComponent_Initialize(stream->capture, inputParameters, (signed int)(callback != (signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))(void *)0), idev, idevName);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Initialize( stream->capture, inputParameters, callback != NULL, idev, idevName )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 882\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
  }

  if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
  {
    do
    {
      void *return_value_PaUtil_AllocateMemory$2;
      return_value_PaUtil_AllocateMemory$2=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$3) /*88ul*/ );
      stream->playback = (struct anonymous$3 *)return_value_PaUtil_AllocateMemory$2;
      if(stream->playback == ((struct anonymous$3 *)NULL))
      {
        PaUtil_DebugPrint("Expression 'stream->playback = PaUtil_AllocateMemory( sizeof (PaOssStreamComponent) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 886\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_$link1=PaOssStreamComponent_Initialize(stream->playback, outputParameters, (signed int)(callback != (signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))(void *)0), odev, odevName);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStreamComponent_Initialize( stream->playback, outputParameters, callback != NULL, odev, odevName )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 887\n");
        result = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
  }

  if(!(callback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL)))
  {
    PaUtil_InitializeStreamRepresentation(&stream->streamRepresentation, &ossApi->callbackStreamInterface, callback, userData);
    stream->callbackMode = 1;
  }

  else
    PaUtil_InitializeStreamRepresentation(&stream->streamRepresentation, &ossApi->blockingStreamInterface, callback, userData);
  unsigned long int return_value_pthread_self$5;
  do
  {
    sysErr_=sem_init(&stream->semaphore, 0, (unsigned int)0);
    if(!(sysErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'sem_init( &stream->semaphore, 0, 0 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 902\n");
      result = -9986;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// PaOssStream_Prepare
// file src/hostapi/oss/pa_unix_oss.c line 1461
static signed int PaOssStream_Prepare(struct PaOssStream *stream)
{
  signed int result = 0;
  signed int enableBits = 0;
  unsigned long int return_value_pthread_self$3;
  unsigned long int return_value_pthread_self$6;
  unsigned long int return_value_pthread_self$10;
  unsigned long int return_value_pthread_self$13;
  unsigned long int return_value_pthread_self$16;
  if(!(stream->triggered == 0))
    return result;

  else
  {
    if(!(stream->playback == ((struct anonymous$3 *)NULL)))
      do
      {
        sysErr_=ioctl(stream->playback->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &enableBits);
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$3=pthread_self();
          if(return_value_pthread_self$3 == mainThread_$link1)
          {
            signed int *return_value___errno_location$1;
            return_value___errno_location$1=__errno_location();
            char *return_value_strerror$2;
            return_value_strerror$2=strerror(*return_value___errno_location$1);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
          }

          PaUtil_DebugPrint("Expression 'ioctl( stream->playback->fd, SNDCTL_DSP_SETTRIGGER, &enableBits )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1471\n");
          result = -9999;
          goto error;
        }

      }
      while((_Bool)0);

    if(!(stream->capture == ((struct anonymous$3 *)NULL)))
      do
      {
        sysErr_=ioctl(stream->capture->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &enableBits);
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$6=pthread_self();
          if(return_value_pthread_self$6 == mainThread_$link1)
          {
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            char *return_value_strerror$5;
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$5);
          }

          PaUtil_DebugPrint("Expression 'ioctl( stream->capture->fd, SNDCTL_DSP_SETTRIGGER, &enableBits )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1473\n");
          result = -9999;
          goto error;
        }

      }
      while((_Bool)0);

    if(!(stream->playback == ((struct anonymous$3 *)NULL)))
    {
      unsigned long int bufSz;
      bufSz=PaOssStreamComponent_BufferSize(stream->playback);
      memset(stream->playback->buffer, 0, bufSz);
      do
      {
        paUtilErr_$link1=ModifyBlocking(stream->playback->fd, 0);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'ModifyBlocking( stream->playback->fd, 0 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1482\n");
          result = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
      while((_Bool)1)
      {
        signed long int return_value_write$7;
        return_value_write$7=write(stream->playback->fd, stream->playback->buffer, bufSz);
        if(!(return_value_write$7 >= 0l))
          break;

      }
      do
      {
        paUtilErr_$link1=ModifyBlocking(stream->playback->fd, 1);
        if(!(paUtilErr_$link1 >= 0))
        {
          PaUtil_DebugPrint("Expression 'ModifyBlocking( stream->playback->fd, 1 )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1488\n");
          result = paUtilErr_$link1;
          goto error;
        }

      }
      while((_Bool)0);
    }

    if(!(stream->sharedDevice == 0))
    {
      enableBits = 0x00000001 | 0x00000002;
      do
      {
        sysErr_=ioctl(stream->capture->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &enableBits);
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$10=pthread_self();
          if(return_value_pthread_self$10 == mainThread_$link1)
          {
            signed int *return_value___errno_location$8;
            return_value___errno_location$8=__errno_location();
            char *return_value_strerror$9;
            return_value_strerror$9=strerror(*return_value___errno_location$8);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$9);
          }

          PaUtil_DebugPrint("Expression 'ioctl( stream->capture->fd, SNDCTL_DSP_SETTRIGGER, &enableBits )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1494\n");
          result = -9999;
          goto error;
        }

      }
      while((_Bool)0);
    }

    else
    {
      if(!(stream->capture == ((struct anonymous$3 *)NULL)))
      {
        enableBits = 0x00000001;
        do
        {
          sysErr_=ioctl(stream->capture->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &enableBits);
          if(!(sysErr_ >= 0))
          {
            return_value_pthread_self$13=pthread_self();
            if(return_value_pthread_self$13 == mainThread_$link1)
            {
              signed int *return_value___errno_location$11;
              return_value___errno_location$11=__errno_location();
              char *return_value_strerror$12;
              return_value_strerror$12=strerror(*return_value___errno_location$11);
              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$12);
            }

            PaUtil_DebugPrint("Expression 'ioctl( stream->capture->fd, SNDCTL_DSP_SETTRIGGER, &enableBits )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1501\n");
            result = -9999;
            goto error;
          }

        }
        while((_Bool)0);
      }

      if(!(stream->playback == ((struct anonymous$3 *)NULL)))
      {
        enableBits = 0x00000002;
        do
        {
          sysErr_=ioctl(stream->playback->fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(16 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &enableBits);
          if(!(sysErr_ >= 0))
          {
            return_value_pthread_self$16=pthread_self();
            if(return_value_pthread_self$16 == mainThread_$link1)
            {
              signed int *return_value___errno_location$14;
              return_value___errno_location$14=__errno_location();
              char *return_value_strerror$15;
              return_value_strerror$15=strerror(*return_value___errno_location$14);
              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$15);
            }

            PaUtil_DebugPrint("Expression 'ioctl( stream->playback->fd, SNDCTL_DSP_SETTRIGGER, &enableBits )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1506\n");
            result = -9999;
            goto error;
          }

        }
        while((_Bool)0);
      }

    }
    stream->triggered = 1;

  error:
    ;
    return result;
  }
}

// PaOssStream_Stop
// file src/hostapi/oss/pa_unix_oss.c line 1520
static signed int PaOssStream_Stop(struct PaOssStream *stream, signed int abort)
{
  signed int result = 0;
  signed int captureErr = 0;
  signed int playbackErr = 0;
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
    captureErr=ioctl(stream->capture->fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(8 << 0) | (unsigned int)(0 << 0 + 8 + 8)), 0);

  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
  {
    if(stream->sharedDevice == 0)
      playbackErr=ioctl(stream->playback->fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(8 << 0) | (unsigned int)(0 << 0 + 8 + 8)), 0);

  }

  if(!(captureErr == 0) || !(playbackErr == 0))
    result = -9999;

  return result;
}

// PaOssStream_Terminate
// file src/hostapi/oss/pa_unix_oss.c line 908
static void PaOssStream_Terminate(struct PaOssStream *stream)
{
  /* assertion stream */
  assert(stream != ((struct PaOssStream *)NULL));
  PaUtil_TerminateStreamRepresentation(&stream->streamRepresentation);
  PaUtil_TerminateThreading(&stream->threading);
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
    PaOssStreamComponent_Terminate(stream->capture);

  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
    PaOssStreamComponent_Terminate(stream->playback);

  sem_destroy(&stream->semaphore);
  PaUtil_FreeMemory((void *)stream);
}

// PaOssStream_WaitForFrames
// file src/hostapi/oss/pa_unix_oss.c line 1301
static signed int PaOssStream_WaitForFrames(struct PaOssStream *stream, unsigned long int *frames)
{
  signed int result = 0;
  signed int pollPlayback = 0;
  signed int pollCapture = 0;
  signed int captureAvail = 0x7fffffff;
  signed int playbackAvail = 0x7fffffff;
  signed int commonAvail;
  struct audio_buf_info bufInfo;
  struct anonymous$2 readFds;
  struct anonymous$2 writeFds;
  signed int nfds = 0;
  struct timeval selectTimeval = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  unsigned long int timeout = stream->pollTimeout;
  signed int captureFd = -1;
  signed int playbackFd = -1;
  /* assertion stream */
  assert(stream != ((struct PaOssStream *)NULL));
  /* assertion frames */
  assert(frames != ((unsigned long int *)NULL));
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
  {
    pollCapture = 1;
    captureFd = stream->capture->fd;
  }

  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
  {
    pollPlayback = 1;
    playbackFd = stream->playback->fd;
  }

  do
  {
    signed int __d0;
    signed int __d1;
    asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$2) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&readFds)->__fds_bits[(signed long int)0]) : "memory");
  }
  while((_Bool)0);
  do
  {
    signed int PaOssStream_WaitForFrames$$1$$4$$__d0;
    signed int PaOssStream_WaitForFrames$$1$$4$$__d1;
    asm("cld; rep; stosq" : "=c"(PaOssStream_WaitForFrames$$1$$4$$__d0), "=D"(PaOssStream_WaitForFrames$$1$$4$$__d1) : "a"(0), "0"(sizeof(struct anonymous$2) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&writeFds)->__fds_bits[(signed long int)0]) : "memory");
  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$3;
  while(!(pollCapture == 0) || !(pollPlayback == 0))
  {
    pthread_testcancel();
    selectTimeval.tv_usec = (signed long int)timeout;
    nfds = 0;
    if(!(pollCapture == 0))
    {
      (&readFds)->__fds_bits[(signed long int)(captureFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readFds)->__fds_bits[(signed long int)(captureFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << captureFd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      nfds = captureFd + 1;
    }

    if(!(pollPlayback == 0))
    {
      (&writeFds)->__fds_bits[(signed long int)(playbackFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&writeFds)->__fds_bits[(signed long int)(playbackFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << playbackFd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      nfds = nfds > playbackFd + 1 ? nfds : playbackFd + 1;
    }

    do
    {
      sysErr_=select(nfds, &readFds, &writeFds, (struct anonymous$2 *)(void *)0, &selectTimeval);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$3=pthread_self();
        if(return_value_pthread_self$3 == mainThread_$link1)
        {
          signed int *return_value___errno_location$1;
          return_value___errno_location$1=__errno_location();
          char *return_value_strerror$2;
          return_value_strerror$2=strerror(*return_value___errno_location$1);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$2);
        }

        PaUtil_DebugPrint("Expression 'select( nfds, &readFds, &writeFds, NULL, &selectTimeval )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1361\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    pthread_testcancel();
    if(!(pollCapture == 0))
    {
      if(!((readFds.__fds_bits[(signed long int)(captureFd / 8)] & (signed long int)(1UL << captureFd % 8)) == 0l))
      {
        (&readFds)->__fds_bits[(signed long int)(captureFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&readFds)->__fds_bits[(signed long int)(captureFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << captureFd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));
        pollCapture = 0;
      }

    }

    if(!(pollPlayback == 0))
    {
      if(!((writeFds.__fds_bits[(signed long int)(playbackFd / 8)] & (signed long int)(1UL << playbackFd % 8)) == 0l))
      {
        (&writeFds)->__fds_bits[(signed long int)(playbackFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&writeFds)->__fds_bits[(signed long int)(playbackFd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << playbackFd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));
        pollPlayback = 0;
      }

    }

  }
  unsigned long int return_value_pthread_self$6;
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
  {
    do
    {
      sysErr_=ioctl(captureFd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(13 << 0)) | sizeof(struct audio_buf_info) /*16ul*/  << 0 + 8 + 8, &bufInfo);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$6=pthread_self();
        if(return_value_pthread_self$6 == mainThread_$link1)
        {
          signed int *return_value___errno_location$4;
          return_value___errno_location$4=__errno_location();
          char *return_value_strerror$5;
          return_value_strerror$5=strerror(*return_value___errno_location$4);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$5);
        }

        PaUtil_DebugPrint("Expression 'ioctl( captureFd, SNDCTL_DSP_GETISPACE, &bufInfo )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1425\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    captureAvail = (signed int)((unsigned long int)bufInfo.fragments * stream->capture->hostFrames);
    captureAvail = captureAvail == 0 ? 0x7fffffff : captureAvail;
  }

  unsigned long int return_value_pthread_self$9;
  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
  {
    do
    {
      sysErr_=ioctl(playbackFd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(12 << 0)) | sizeof(struct audio_buf_info) /*16ul*/  << 0 + 8 + 8, &bufInfo);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$9=pthread_self();
        if(return_value_pthread_self$9 == mainThread_$link1)
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          char *return_value_strerror$8;
          return_value_strerror$8=strerror(*return_value___errno_location$7);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$8);
        }

        PaUtil_DebugPrint("Expression 'ioctl( playbackFd, SNDCTL_DSP_GETOSPACE, &bufInfo )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1434\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    playbackAvail = (signed int)((unsigned long int)bufInfo.fragments * stream->playback->hostFrames);
    playbackAvail = playbackAvail == 0 ? 0x7fffffff : playbackAvail;
  }

  commonAvail = captureAvail < playbackAvail ? captureAvail : playbackAvail;
  if(commonAvail == 0x7fffffff)
    commonAvail = 0;

  commonAvail = commonAvail - (signed int)((unsigned long int)commonAvail % stream->framesPerHostBuffer);
  /* assertion commonAvail != 0x7fffffff */
  assert(commonAvail != 0x7fffffff);
  /* assertion commonAvail >= 0 */
  assert(commonAvail >= 0);
  *frames = (unsigned long int)commonAvail;

error:
  ;
  return result;
}

// PaSkeleton_Initialize
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 126
signed int PaSkeleton_Initialize(struct PaUtilHostApiRepresentation **hostApi, signed int hostApiIndex)
{
  signed int result = 0;
  signed int i;
  signed int deviceCount;
  struct anonymous$15 *skeletonHostApi;
  struct PaDeviceInfo *deviceInfoArray;
  void *return_value_PaUtil_AllocateMemory$1;
  return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$15) /*272ul*/ );
  skeletonHostApi = (struct anonymous$15 *)return_value_PaUtil_AllocateMemory$1;
  if(skeletonHostApi == ((struct anonymous$15 *)NULL))
    result = -9992;

  else
  {
    skeletonHostApi->allocations=PaUtil_CreateAllocationGroup();
    if(skeletonHostApi->allocations == ((struct anonymous$14 *)NULL))
      result = -9992;

    else
    {
      *hostApi = &skeletonHostApi->inheritedHostApiRep;
      (*hostApi)->info.structVersion = 1;
      (*hostApi)->info.type = (enum PaHostApiTypeId)paInDevelopment;
      (*hostApi)->info.name = "skeleton implementation";
      (*hostApi)->info.defaultInputDevice = (signed int)-1;
      (*hostApi)->info.defaultOutputDevice = (signed int)-1;
      (*hostApi)->info.deviceCount = 0;
      deviceCount = 0;
      if(deviceCount >= 1)
      {
        void *return_value_PaUtil_GroupAllocateMemory$2;
        return_value_PaUtil_GroupAllocateMemory$2=PaUtil_GroupAllocateMemory(skeletonHostApi->allocations, (signed long int)(sizeof(struct PaDeviceInfo *) /*8ul*/  * (unsigned long int)deviceCount));
        (*hostApi)->deviceInfos = (struct PaDeviceInfo **)return_value_PaUtil_GroupAllocateMemory$2;
        if((*hostApi)->deviceInfos == ((struct PaDeviceInfo **)NULL))
        {
          result = -9992;
          goto error;
        }

        void *return_value_PaUtil_GroupAllocateMemory$3;
        return_value_PaUtil_GroupAllocateMemory$3=PaUtil_GroupAllocateMemory(skeletonHostApi->allocations, (signed long int)(sizeof(struct PaDeviceInfo) /*72ul*/  * (unsigned long int)deviceCount));
        deviceInfoArray = (struct PaDeviceInfo *)return_value_PaUtil_GroupAllocateMemory$3;
        if(deviceInfoArray == ((struct PaDeviceInfo *)NULL))
        {
          result = -9992;
          goto error;
        }

        i = 0;
        for( ; !(i >= deviceCount); i = i + 1)
        {
          struct PaDeviceInfo *deviceInfo = &deviceInfoArray[(signed long int)i];
          deviceInfo->structVersion = 2;
          deviceInfo->hostApi = hostApiIndex;
          deviceInfo->name = ((const char *)NULL);
          deviceInfo->maxInputChannels = 0;
          deviceInfo->maxOutputChannels = 0;
          deviceInfo->defaultLowInputLatency = 0.;
          deviceInfo->defaultLowOutputLatency = 0.;
          deviceInfo->defaultHighInputLatency = 0.;
          deviceInfo->defaultHighOutputLatency = 0.;
          deviceInfo->defaultSampleRate = 0.;
          (*hostApi)->deviceInfos[(signed long int)i] = deviceInfo;
          (*hostApi)->info.deviceCount = (*hostApi)->info.deviceCount + 1;
        }
      }

      (*hostApi)->Terminate = Terminate;
      (*hostApi)->OpenStream = OpenStream;
      (*hostApi)->IsFormatSupported = IsFormatSupported;
      PaUtil_InitializeStreamInterface(&skeletonHostApi->callbackStreamInterface, CloseStream, StartStream, StopStream, AbortStream, IsStreamStopped, IsStreamActive, GetStreamTime, GetStreamCpuLoad, PaUtil_DummyRead, PaUtil_DummyWrite, PaUtil_DummyGetReadAvailable, PaUtil_DummyGetWriteAvailable);
      PaUtil_InitializeStreamInterface(&skeletonHostApi->blockingStreamInterface, CloseStream, StartStream, StopStream, AbortStream, IsStreamStopped, IsStreamActive, GetStreamTime, PaUtil_DummyGetCpuLoad, ReadStream, WriteStream, GetStreamReadAvailable, GetStreamWriteAvailable);
      return result;
    }
  }

error:
  ;
  if(!(skeletonHostApi == ((struct anonymous$15 *)NULL)))
  {
    if(!(skeletonHostApi->allocations == ((struct anonymous$14 *)NULL)))
    {
      PaUtil_FreeAllAllocations(skeletonHostApi->allocations);
      PaUtil_DestroyAllocationGroup(skeletonHostApi->allocations);
    }

    PaUtil_FreeMemory((void *)skeletonHostApi);
  }

  return result;
}

// PaUnixMutex_Initialize
// file ./src/os/unix/pa_unix_util.h line 142
signed int PaUnixMutex_Initialize(struct anonymous$7 *self)
{
  signed int result = 0;
  paUtilErr_$link2=pthread_mutex_init(&self->mtx, (const union anonymous$23 *)(void *)0);
  /* assertion 0 == paUtilErr_ */
  assert(0 == paUtilErr_$link2);
  return result;
}

// PaUnixMutex_Lock
// file ./src/os/unix/pa_unix_util.h line 144
signed int PaUnixMutex_Lock(struct anonymous$7 *self)
{
  signed int result = 0;
  do
  {
    paUtilErr_$link2=pthread_mutex_lock(&self->mtx);
    if(!(paUtilErr_$link2 == 0))
    {
      unsigned long int return_value_pthread_self$2;
      return_value_pthread_self$2=pthread_self();
      signed int return_value_pthread_equal$3;
      return_value_pthread_equal$3=pthread_equal(return_value_pthread_self$2, paUnixMainThread);
      if(!(return_value_pthread_equal$3 == 0))
      {
        char *return_value_strerror$1;
        return_value_strerror$1=strerror(paUtilErr_$link2);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)paUtilErr_$link2, return_value_strerror$1);
      }

      PaUtil_DebugPrint("Expression 'pthread_mutex_lock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 527\n");
      result = -9999;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// PaUnixMutex_Terminate
// file ./src/os/unix/pa_unix_util.h line 143
signed int PaUnixMutex_Terminate(struct anonymous$7 *self)
{
  signed int result = 0;
  paUtilErr_$link2=pthread_mutex_destroy(&self->mtx);
  /* assertion 0 == paUtilErr_ */
  assert(0 == paUtilErr_$link2);
  return result;
}

// PaUnixMutex_Unlock
// file ./src/os/unix/pa_unix_util.h line 145
signed int PaUnixMutex_Unlock(struct anonymous$7 *self)
{
  signed int result = 0;
  do
  {
    paUtilErr_$link2=pthread_mutex_unlock(&self->mtx);
    if(!(paUtilErr_$link2 == 0))
    {
      unsigned long int return_value_pthread_self$2;
      return_value_pthread_self$2=pthread_self();
      signed int return_value_pthread_equal$3;
      return_value_pthread_equal$3=pthread_equal(return_value_pthread_self$2, paUnixMainThread);
      if(!(return_value_pthread_equal$3 == 0))
      {
        char *return_value_strerror$1;
        return_value_strerror$1=strerror(paUtilErr_$link2);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)paUtilErr_$link2, return_value_strerror$1);
      }

      PaUtil_DebugPrint("Expression 'pthread_mutex_unlock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 541\n");
      result = -9999;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// PaUnixThread_New
// file ./src/os/unix/pa_unix_util.h line 193
signed int PaUnixThread_New(struct anonymous$6 *self, void * (*threadFunc)(void *), void *threadArg, double waitForChild, signed int rtSched)
{
  signed int result = 0;
  union pthread_attr_t attr;
  signed int started = 0;
  memset((void *)self, 0, sizeof(struct anonymous$6) /*120ul*/ );
  PaUnixMutex_Initialize(&self->mtx);
  paUtilErr_$link2=pthread_cond_init(&self->cond, (const union anonymous$23 *)(void *)0);
  /* assertion 0 == paUtilErr_ */
  assert(0 == paUtilErr_$link2);
  self->parentWaiting = (signed int)IEEE_FLOAT_NOTEQUAL((double)0, waitForChild);
  do
  {
    signed int return_value_pthread_attr_init$1;
    return_value_pthread_attr_init$1=pthread_attr_init(&attr);
    if(!(return_value_pthread_attr_init$1 == 0))
    {
      PaUtil_DebugPrint("Expression '!pthread_attr_init( &attr )' failed in 'src/os/unix/pa_unix_util.c', line: 301\n");
      result = -9986;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    signed int return_value_pthread_attr_setscope$2;
    return_value_pthread_attr_setscope$2=pthread_attr_setscope(&attr, 0);
    if(!(return_value_pthread_attr_setscope$2 == 0))
    {
      PaUtil_DebugPrint("Expression '!pthread_attr_setscope( &attr, PTHREAD_SCOPE_SYSTEM )' failed in 'src/os/unix/pa_unix_util.c', line: 303\n");
      result = -9986;
      goto error;
    }

  }
  while((_Bool)0);
  do
  {
    signed int return_value_pthread_create$3;
    return_value_pthread_create$3=pthread_create(&self->thread, &attr, threadFunc, threadArg);
    if(!(return_value_pthread_create$3 == 0))
    {
      PaUtil_DebugPrint("Expression '!pthread_create( &self->thread, &attr, threadFunc, threadArg )' failed in 'src/os/unix/pa_unix_util.c', line: 305\n");
      result = -9986;
      goto error;
    }

  }
  while((_Bool)0);
  started = 1;
  if(!(rtSched == 0))
  {
    do
    {
      paUtilErr_$link2=BoostPriority(self);
      if(!(paUtilErr_$link2 >= 0))
      {
        PaUtil_DebugPrint("Expression 'BoostPriority( self )' failed in 'src/os/unix/pa_unix_util.c', line: 345\n");
        result = paUtilErr_$link2;
        goto error;
      }

    }
    while((_Bool)0);
    signed int policy;
    struct sched_param spm;
    pthread_getschedparam(self->thread, &policy, &spm);
  }

  if(!(self->parentWaiting == 0))
  {
    double till;
    struct timespec ts;
    signed int res = 0;
    double now;
    do
    {
      paUtilErr_$link2=PaUnixMutex_Lock(&self->mtx);
      if(!(paUtilErr_$link2 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixMutex_Lock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 361\n");
        result = paUtilErr_$link2;
        goto error;
      }

    }
    while((_Bool)0);
    now=PaUtil_GetTime();
    till = now + waitForChild;
    while(!(self->parentWaiting == 0))
    {
      if(!(res == 0))
        break;

      if(waitForChild > 0.000000)
      {
        double return_value_floor$4;
        return_value_floor$4=floor(till);
        ts.tv_sec = (signed long int)return_value_floor$4;
        double return_value_floor$5;
        return_value_floor$5=floor(till);
        ts.tv_nsec = (signed long int)((till - return_value_floor$5) * 1e9);
        res=pthread_cond_timedwait(&self->cond, &self->mtx.mtx, &ts);
      }

      else
        res=pthread_cond_wait(&self->cond, &self->mtx.mtx);
    }
    do
    {
      paUtilErr_$link2=PaUnixMutex_Unlock(&self->mtx);
      if(!(paUtilErr_$link2 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixMutex_Unlock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 381\n");
        result = paUtilErr_$link2;
        goto error;
      }

    }
    while((_Bool)0);
    do
      if(!(res == 0) && !(res == 110))
      {
        PaUtil_DebugPrint("Expression '!res || ETIMEDOUT == res' failed in 'src/os/unix/pa_unix_util.c', line: 383\n");
        result = -9986;
        goto error;
      }

    while((_Bool)0);
    if(res == 110)
      do
      {
        paUtilErr_$link2 = -9987;
        if(!(paUtilErr_$link2 >= 0))
        {
          PaUtil_DebugPrint("Expression 'paTimedOut' failed in 'src/os/unix/pa_unix_util.c', line: 387\n");
          result = paUtilErr_$link2;
          goto error;
        }

      }
      while((_Bool)0);

  }


end:
  ;
  return result;

error:
  ;
  if(!(started == 0))
    PaUnixThread_Terminate(self, 0, (signed int *)(void *)0);

  goto end;
}

// PaUnixThread_NotifyParent
// file ./src/os/unix/pa_unix_util.h line 215
signed int PaUnixThread_NotifyParent(struct anonymous$6 *self)
{
  signed int result = 0;
  do
    if(self->parentWaiting == 0)
    {
      PaUtil_DebugPrint("Expression 'self->parentWaiting' failed in 'src/os/unix/pa_unix_util.c', line: 479\n");
      result = -9986;
      goto error;
    }

  while((_Bool)0);
  if(self->locked == 0)
  {
    do
    {
      paUtilErr_$link2=PaUnixMutex_Lock(&self->mtx);
      if(!(paUtilErr_$link2 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixMutex_Lock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 483\n");
        result = paUtilErr_$link2;
        goto error;
      }

    }
    while((_Bool)0);
    self->locked = 1;
  }

  self->parentWaiting = 0;
  pthread_cond_signal(&self->cond);
  do
  {
    paUtilErr_$link2=PaUnixMutex_Unlock(&self->mtx);
    if(!(paUtilErr_$link2 >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUnixMutex_Unlock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 488\n");
      result = paUtilErr_$link2;
      goto error;
    }

  }
  while((_Bool)0);
  self->locked = 0;

error:
  ;
  return result;
}

// PaUnixThread_PrepareNotify
// file ./src/os/unix/pa_unix_util.h line 209
signed int PaUnixThread_PrepareNotify(struct anonymous$6 *self)
{
  signed int result = 0;
  do
    if(self->parentWaiting == 0)
    {
      PaUtil_DebugPrint("Expression 'self->parentWaiting' failed in 'src/os/unix/pa_unix_util.c', line: 467\n");
      result = -9986;
      goto error;
    }

  while((_Bool)0);
  do
  {
    paUtilErr_$link2=PaUnixMutex_Lock(&self->mtx);
    if(!(paUtilErr_$link2 >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaUnixMutex_Lock( &self->mtx )' failed in 'src/os/unix/pa_unix_util.c', line: 469\n");
      result = paUtilErr_$link2;
      goto error;
    }

  }
  while((_Bool)0);
  self->locked = 1;

error:
  ;
  return result;
}

// PaUnixThread_StopRequested
// file ./src/os/unix/pa_unix_util.h line 219
signed int PaUnixThread_StopRequested(struct anonymous$6 *self)
{
  return self->stopRequested;
}

// PaUnixThread_Terminate
// file ./src/os/unix/pa_unix_util.h line 201
signed int PaUnixThread_Terminate(struct anonymous$6 *self, signed int wait, signed int *exitResult)
{
  signed int result = 0;
  void *pret;
  if(!(exitResult == ((signed int *)NULL)))
    *exitResult = 0;

  self->stopRequested = wait;
  if(wait == 0)
    pthread_cancel(self->thread);

  do
  {
    paUtilErr_$link2=pthread_join(self->thread, &pret);
    if(!(paUtilErr_$link2 == 0))
    {
      unsigned long int return_value_pthread_self$2;
      return_value_pthread_self$2=pthread_self();
      signed int return_value_pthread_equal$3;
      return_value_pthread_equal$3=pthread_equal(return_value_pthread_self$2, paUnixMainThread);
      if(!(return_value_pthread_equal$3 == 0))
      {
        char *return_value_strerror$1;
        return_value_strerror$1=strerror(paUtilErr_$link2);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)paUtilErr_$link2, return_value_strerror$1);
      }

      PaUtil_DebugPrint("Expression 'pthread_join( self->thread, &pret )' failed in 'src/os/unix/pa_unix_util.c', line: 441\n");
      result = -9999;
      goto error;
    }

  }
  while((_Bool)0);
  if(!(pret == NULL) && !((void *)-1 == pret))
  {
    if(!(exitResult == ((signed int *)NULL)))
      *exitResult = *((signed int *)pret);

    free(pret);
  }


error:
  ;
  paUtilErr_$link2=PaUnixMutex_Terminate(&self->mtx);
  /* assertion paNoError == paUtilErr_ */
  assert(0 == paUtilErr_$link2);
  paUtilErr_$link2=pthread_cond_destroy(&self->cond);
  /* assertion 0 == paUtilErr_ */
  assert(0 == paUtilErr_$link2);
  return result;
}

// PaUnixThreading_Initialize
// file ./src/os/unix/pa_unix_util.h line 160
signed int PaUnixThreading_Initialize()
{
  paUnixMainThread=pthread_self();
  return 0;
}

// PaUtil_AdvanceRingBufferReadIndex
// file src/common/pa_ringbuffer.c line 187
signed long int PaUtil_AdvanceRingBufferReadIndex(struct PaUtilRingBuffer *rbuf, signed long int elementCount)
{
  __sync_synchronize();
  rbuf->readIndex = rbuf->readIndex + elementCount & rbuf->bigMask;
  return rbuf->readIndex;
}

// PaUtil_AdvanceRingBufferWriteIndex
// file ./src/common/pa_ringbuffer.h line 197
signed long int PaUtil_AdvanceRingBufferWriteIndex(struct PaUtilRingBuffer *rbuf, signed long int elementCount)
{
  __sync_synchronize();
  rbuf->writeIndex = rbuf->writeIndex + elementCount & rbuf->bigMask;
  return rbuf->writeIndex;
}

// PaUtil_AllocateMemory
// file src/common/pa_util.h line 121
void * PaUtil_AllocateMemory(signed long int size)
{
  void *result;
  result=malloc((unsigned long int)size);
  return result;
}

// PaUtil_BeginBufferProcessing
// file src/common/pa_process.c line 669
void PaUtil_BeginBufferProcessing(struct anonymous$13 *bp, struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int callbackStatusFlags)
{
  bp->timeInfo = timeInfo;
  bp->timeInfo->inputBufferAdcTime = bp->timeInfo->inputBufferAdcTime - (double)bp->framesInTempInputBuffer * bp->samplePeriod;
  bp->timeInfo->outputBufferDacTime = bp->timeInfo->outputBufferDacTime + (double)bp->framesInTempOutputBuffer * bp->samplePeriod;
  bp->callbackStatusFlags = callbackStatusFlags;
  bp->hostInputFrameCount[(signed long int)1] = (unsigned long int)0;
  bp->hostOutputFrameCount[(signed long int)1] = (unsigned long int)0;
}

// PaUtil_BeginCpuLoadMeasurement
// file src/common/pa_cpuload.c line 73
void PaUtil_BeginCpuLoadMeasurement(struct anonymous$10 *measurer)
{
  measurer->measurementStartTime=PaUtil_GetTime();
}

// PaUtil_CancelThreading
// file ./src/os/unix/pa_unix_util.h line 119
signed int PaUtil_CancelThreading(struct anonymous$0 *threading, signed int wait, signed int *exitResult)
{
  signed int result = 0;
  void *pret;
  if(!(exitResult == ((signed int *)NULL)))
    *exitResult = 0;

  if(wait == 0)
    pthread_cancel(threading->callbackThread);

  pthread_join(threading->callbackThread, &pret);
  if(!(pret == NULL) && !((void *)-1 == pret))
  {
    if(!(exitResult == ((signed int *)NULL)))
      *exitResult = *((signed int *)pret);

    free(pret);
  }

  return result;
}

// PaUtil_CopyInput
// file src/common/pa_process.c line 1660
unsigned long int PaUtil_CopyInput(struct anonymous$13 *bp, void **buffer, unsigned long int frameCount)
{
  struct PaUtilChannelDescriptor *hostInputChannels;
  unsigned int framesToCopy;
  unsigned char *destBytePtr;
  void **nonInterleavedDestPtrs;
  unsigned int destSampleStrideSamples;
  unsigned int destChannelStrideBytes;
  unsigned int i;
  hostInputChannels = bp->hostInputChannels[(signed long int)0];
  unsigned long int tmp_if_expr$1;
  if(!(bp->hostInputFrameCount[0l] >= frameCount))
    tmp_if_expr$1 = bp->hostInputFrameCount[(signed long int)0];

  else
    tmp_if_expr$1 = frameCount;
  framesToCopy = (unsigned int)tmp_if_expr$1;
  if(!(bp->userInputIsInterleaved == 0))
  {
    destBytePtr = (unsigned char *)*buffer;
    destSampleStrideSamples = bp->inputChannelCount;
    destChannelStrideBytes = bp->bytesPerUserInputSample;
    i = (unsigned int)0;
    if(!(i >= bp->inputChannelCount))
    {
      bp->inputConverter((void *)destBytePtr, (signed int)destSampleStrideSamples, (hostInputChannels + (signed long int)i)->data, (signed int)(hostInputChannels + (signed long int)i)->stride, framesToCopy, &bp->ditherGenerator);
      destBytePtr = destBytePtr + (signed long int)destChannelStrideBytes;
      (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(framesToCopy * (hostInputChannels + (signed long int)i)->stride * bp->bytesPerHostInputSample));
      i = i + 1u;
    }

    *buffer = (void *)((unsigned char *)*buffer + (signed long int)(framesToCopy * bp->inputChannelCount * bp->bytesPerUserInputSample));
  }

  else
  {
    nonInterleavedDestPtrs = (void **)*buffer;
    destSampleStrideSamples = (unsigned int)1;
    i = (unsigned int)0;
    if(!(i >= bp->inputChannelCount))
    {
      destBytePtr = (unsigned char *)nonInterleavedDestPtrs[(signed long int)i];
      bp->inputConverter((void *)destBytePtr, (signed int)destSampleStrideSamples, (hostInputChannels + (signed long int)i)->data, (signed int)(hostInputChannels + (signed long int)i)->stride, framesToCopy, &bp->ditherGenerator);
      destBytePtr = destBytePtr + (signed long int)(bp->bytesPerUserInputSample * framesToCopy);
      nonInterleavedDestPtrs[(signed long int)i] = (void *)destBytePtr;
      (hostInputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostInputChannels + (signed long int)i)->data + (signed long int)(framesToCopy * (hostInputChannels + (signed long int)i)->stride * bp->bytesPerHostInputSample));
      i = i + 1u;
    }

  }
  bp->hostInputFrameCount[(signed long int)0] = bp->hostInputFrameCount[(signed long int)0] - (unsigned long int)framesToCopy;
  return (unsigned long int)framesToCopy;
}

// PaUtil_CopyOutput
// file src/common/pa_process.c line 1731
unsigned long int PaUtil_CopyOutput(struct anonymous$13 *bp, const void **buffer, unsigned long int frameCount)
{
  struct PaUtilChannelDescriptor *hostOutputChannels;
  unsigned int framesToCopy;
  unsigned char *srcBytePtr;
  void **nonInterleavedSrcPtrs;
  unsigned int srcSampleStrideSamples;
  unsigned int srcChannelStrideBytes;
  unsigned int i;
  hostOutputChannels = bp->hostOutputChannels[(signed long int)0];
  unsigned long int tmp_if_expr$1;
  if(!(bp->hostOutputFrameCount[0l] >= frameCount))
    tmp_if_expr$1 = bp->hostOutputFrameCount[(signed long int)0];

  else
    tmp_if_expr$1 = frameCount;
  framesToCopy = (unsigned int)tmp_if_expr$1;
  if(!(bp->userOutputIsInterleaved == 0))
  {
    srcBytePtr = (unsigned char *)*buffer;
    srcSampleStrideSamples = bp->outputChannelCount;
    srcChannelStrideBytes = bp->bytesPerUserOutputSample;
    i = (unsigned int)0;
    if(!(i >= bp->outputChannelCount))
    {
      bp->outputConverter((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (void *)srcBytePtr, (signed int)srcSampleStrideSamples, framesToCopy, &bp->ditherGenerator);
      srcBytePtr = srcBytePtr + (signed long int)srcChannelStrideBytes;
      (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(framesToCopy * (hostOutputChannels + (signed long int)i)->stride * bp->bytesPerHostOutputSample));
      i = i + 1u;
    }

    *buffer = (const void *)((unsigned char *)*buffer + (signed long int)(framesToCopy * bp->outputChannelCount * bp->bytesPerUserOutputSample));
  }

  else
  {
    nonInterleavedSrcPtrs = (void **)*buffer;
    srcSampleStrideSamples = (unsigned int)1;
    i = (unsigned int)0;
    if(!(i >= bp->outputChannelCount))
    {
      srcBytePtr = (unsigned char *)nonInterleavedSrcPtrs[(signed long int)i];
      bp->outputConverter((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, (void *)srcBytePtr, (signed int)srcSampleStrideSamples, framesToCopy, &bp->ditherGenerator);
      srcBytePtr = srcBytePtr + (signed long int)(bp->bytesPerUserOutputSample * framesToCopy);
      nonInterleavedSrcPtrs[(signed long int)i] = (void *)srcBytePtr;
      (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(framesToCopy * (hostOutputChannels + (signed long int)i)->stride * bp->bytesPerHostOutputSample));
      i = i + 1u;
    }

  }
  bp->hostOutputFrameCount[(signed long int)0] = bp->hostOutputFrameCount[(signed long int)0] + (unsigned long int)framesToCopy;
  return (unsigned long int)framesToCopy;
}

// PaUtil_CountCurrentlyAllocatedBlocks
// file src/os/unix/pa_unix_util.c line 98
signed int PaUtil_CountCurrentlyAllocatedBlocks(void)
{
  return 0;
}

// PaUtil_CreateAllocationGroup
// file src/common/pa_allocation.c line 103
struct anonymous$14 * PaUtil_CreateAllocationGroup(void)
{
  struct anonymous$14 *result = ((struct anonymous$14 *)NULL);
  struct PaUtilAllocationGroupLink *links;
  links=AllocateLinks((signed long int)16, ((struct PaUtilAllocationGroupLink *)NULL), ((struct PaUtilAllocationGroupLink *)NULL));
  if(!(links == ((struct PaUtilAllocationGroupLink *)NULL)))
  {
    void *return_value_PaUtil_AllocateMemory$1;
    return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)sizeof(struct anonymous$14) /*32ul*/ );
    result = (struct anonymous$14 *)return_value_PaUtil_AllocateMemory$1;
    if(!(result == ((struct anonymous$14 *)NULL)))
    {
      result->linkCount = (signed long int)16;
      result->linkBlocks = &links[(signed long int)0];
      result->spareLinks = &links[(signed long int)1];
      result->allocations = ((struct PaUtilAllocationGroupLink *)NULL);
    }

    else
      PaUtil_FreeMemory((void *)links);
  }

  return result;
}

// PaUtil_DebugPrint
// file src/common/pa_debugprint.c line 88
void PaUtil_DebugPrint(const char *format, ...)
{
  if(!(userCB == ((void (*)(const char *))NULL)))
  {
    char strdump[2048l];
    void **ap = (void **)&format;
    vsnprintf(strdump, sizeof(char [2048l]) /*2048ul*/ , format, ap);
    strdump[(signed long int)(sizeof(char [2048l]) /*2048ul*/  - (unsigned long int)1)] = (char)0;
    userCB(strdump);
    ap = ((void **)NULL);
  }

  else
  {
    void **PaUtil_DebugPrint$$1$$2$$ap = (void **)&format;
    vfprintf(stderr, format, PaUtil_DebugPrint$$1$$2$$ap);
    PaUtil_DebugPrint$$1$$2$$ap = ((void **)NULL);
    fflush(stderr);
  }
}

// PaUtil_DestroyAllocationGroup
// file src/common/pa_allocation.c line 130
void PaUtil_DestroyAllocationGroup(struct anonymous$14 *group)
{
  struct PaUtilAllocationGroupLink *current = group->linkBlocks;
  struct PaUtilAllocationGroupLink *next;
  for( ; !(current == ((struct PaUtilAllocationGroupLink *)NULL)); current = next)
  {
    next = current->next;
    PaUtil_FreeMemory(current->buffer);
  }
  PaUtil_FreeMemory((void *)group);
}

// PaUtil_DeviceIndexToHostApiDeviceIndex
// file src/common/pa_front.c line 490
signed int PaUtil_DeviceIndexToHostApiDeviceIndex(signed int *hostApiDevice, signed int device, struct PaUtilHostApiRepresentation *hostApi)
{
  signed int result;
  signed int x = (signed int)((unsigned long int)device - hostApi->privatePaFrontInfo.baseDeviceIndex);
  _Bool tmp_if_expr$1;
  if(!(x >= 0))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = x >= hostApi->info.deviceCount ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    result = -9996;

  else
  {
    *hostApiDevice = x;
    result = 0;
  }
  return result;
}

// PaUtil_DummyGetCpuLoad
// file src/common/pa_stream.c line 147
double PaUtil_DummyGetCpuLoad(void *stream)
{
  (void)stream;
  return 0.0;
}

// PaUtil_DummyGetReadAvailable
// file src/common/pa_stream.c line 131
signed long int PaUtil_DummyGetReadAvailable(void *stream)
{
  (void)stream;
  return (signed long int)-9977;
}

// PaUtil_DummyGetWriteAvailable
// file src/common/pa_stream.c line 139
signed long int PaUtil_DummyGetWriteAvailable(void *stream)
{
  (void)stream;
  return (signed long int)-9976;
}

// PaUtil_DummyRead
// file src/common/pa_stream.c line 107
signed int PaUtil_DummyRead(void *stream, void *buffer, unsigned long int frames)
{
  (void)stream;
  (void)buffer;
  (void)frames;
  return -9977;
}

// PaUtil_DummyWrite
// file src/common/pa_stream.c line 119
signed int PaUtil_DummyWrite(void *stream, const void *buffer, unsigned long int frames)
{
  (void)stream;
  (void)buffer;
  (void)frames;
  return -9976;
}

// PaUtil_EndBufferProcessing
// file src/common/pa_process.c line 1482
unsigned long int PaUtil_EndBufferProcessing(struct anonymous$13 *bp, signed int *streamCallbackResult)
{
  unsigned long int framesToProcess;
  unsigned long int framesToGo;
  unsigned long int framesProcessed = (unsigned long int)0;
  if(!(bp->inputChannelCount == 0u))
  {
    if(!(bp->outputChannelCount == 0u))
    {
      if(!(bp->hostInputChannels[0l]->data == NULL))
      {
        if(!(bp->hostOutputChannels[0l]->data == NULL))
          /* assertion (bp->hostInputFrameCount[0] + bp->hostInputFrameCount[1]) == (bp->hostOutputFrameCount[0] + bp->hostOutputFrameCount[1]) */
          assert(bp->hostInputFrameCount[(signed long int)0] + bp->hostInputFrameCount[(signed long int)1] == bp->hostOutputFrameCount[(signed long int)0] + bp->hostOutputFrameCount[(signed long int)1]);

      }

    }

  }

  _Bool tmp_if_expr$1;
  if(*streamCallbackResult == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = *streamCallbackResult == 1 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = *streamCallbackResult == 2 ? (_Bool)1 : (_Bool)0;
  /* assertion *streamCallbackResult == paContinue || *streamCallbackResult == paComplete || *streamCallbackResult == paAbort */
  assert(tmp_if_expr$2);
  _Bool tmp_if_expr$7;
  unsigned long int tmp_if_expr$3;
  unsigned long int tmp_if_expr$4;
  unsigned long int tmp_if_expr$5;
  _Bool tmp_if_expr$10;
  if(!(bp->useNonAdaptingProcess == 0))
  {
    if(!(bp->inputChannelCount == 0u))
      tmp_if_expr$7 = bp->outputChannelCount != (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$7 = (_Bool)0;
    if(tmp_if_expr$7)
    {
      framesToGo = bp->hostOutputFrameCount[(signed long int)0] + bp->hostOutputFrameCount[(signed long int)1];
      do
      {
        unsigned long int noInputInputFrameCount;
        unsigned long int *hostInputFrameCount;
        struct PaUtilChannelDescriptor *hostInputChannels;
        unsigned long int noOutputOutputFrameCount;
        unsigned long int *hostOutputFrameCount;
        struct PaUtilChannelDescriptor *hostOutputChannels;
        unsigned long int framesProcessedThisIteration;
        if(bp->hostInputChannels[0l]->data == NULL)
        {
          noInputInputFrameCount = framesToGo;
          hostInputFrameCount = &noInputInputFrameCount;
          hostInputChannels = ((struct PaUtilChannelDescriptor *)NULL);
        }

        else
          if(!(bp->hostInputFrameCount[0l] == 0ul))
          {
            hostInputFrameCount = &bp->hostInputFrameCount[(signed long int)0];
            hostInputChannels = bp->hostInputChannels[(signed long int)0];
          }

          else
          {
            hostInputFrameCount = &bp->hostInputFrameCount[(signed long int)1];
            hostInputChannels = bp->hostInputChannels[(signed long int)1];
          }
        if(bp->hostOutputChannels[0l]->data == NULL)
        {
          noOutputOutputFrameCount = framesToGo;
          hostOutputFrameCount = &noOutputOutputFrameCount;
          hostOutputChannels = ((struct PaUtilChannelDescriptor *)NULL);
        }

        if(!(bp->hostOutputFrameCount[0l] == 0ul))
        {
          hostOutputFrameCount = &bp->hostOutputFrameCount[(signed long int)0];
          hostOutputChannels = bp->hostOutputChannels[(signed long int)0];
        }

        else
        {
          hostOutputFrameCount = &bp->hostOutputFrameCount[(signed long int)1];
          hostOutputChannels = bp->hostOutputChannels[(signed long int)1];
        }
        if(!(*hostInputFrameCount >= *hostOutputFrameCount))
          tmp_if_expr$3 = *hostInputFrameCount;

        else
          tmp_if_expr$3 = *hostOutputFrameCount;
        framesToProcess = tmp_if_expr$3;
        /* assertion framesToProcess != 0 */
        assert(framesToProcess != (unsigned long int)0);
        framesProcessedThisIteration=NonAdaptingProcess(bp, streamCallbackResult, hostInputChannels, hostOutputChannels, framesToProcess);
        *hostInputFrameCount = *hostInputFrameCount - framesProcessedThisIteration;
        *hostOutputFrameCount = *hostOutputFrameCount - framesProcessedThisIteration;
        framesProcessed = framesProcessed + framesProcessedThisIteration;
        framesToGo = framesToGo - framesProcessedThisIteration;
      }
      while(framesToGo >= 1ul);
    }

    else
    {
      if(!(bp->inputChannelCount == 0u))
        tmp_if_expr$4 = bp->hostInputFrameCount[(signed long int)0];

      else
        tmp_if_expr$4 = bp->hostOutputFrameCount[(signed long int)0];
      framesToProcess = tmp_if_expr$4;
      framesProcessed=NonAdaptingProcess(bp, streamCallbackResult, bp->hostInputChannels[(signed long int)0], bp->hostOutputChannels[(signed long int)0], framesToProcess);
      if(!(bp->inputChannelCount == 0u))
        tmp_if_expr$5 = bp->hostInputFrameCount[(signed long int)1];

      else
        tmp_if_expr$5 = bp->hostOutputFrameCount[(signed long int)1];
      framesToProcess = tmp_if_expr$5;
      if(framesToProcess >= 1ul)
      {
        unsigned long int return_value_NonAdaptingProcess$6;
        return_value_NonAdaptingProcess$6=NonAdaptingProcess(bp, streamCallbackResult, bp->hostInputChannels[(signed long int)1], bp->hostOutputChannels[(signed long int)1], framesToProcess);
        framesProcessed = framesProcessed + return_value_NonAdaptingProcess$6;
      }

    }
  }

  else
  {
    if(!(bp->inputChannelCount == 0u))
      tmp_if_expr$10 = bp->outputChannelCount != (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$10 = (_Bool)0;
    if(tmp_if_expr$10)
    {
      if((signed int)bp->hostBufferSizeMode == paUtilVariableHostBufferSizePartialUsageAllowed)
        framesProcessed=AdaptingProcess(bp, streamCallbackResult, 0);

      else
        framesProcessed=AdaptingProcess(bp, streamCallbackResult, 1);
    }

    else
      if(!(bp->inputChannelCount == 0u))
      {
        framesToProcess = bp->hostInputFrameCount[(signed long int)0];
        framesProcessed=AdaptingInputOnlyProcess(bp, streamCallbackResult, bp->hostInputChannels[(signed long int)0], framesToProcess);
        framesToProcess = bp->hostInputFrameCount[(signed long int)1];
        if(framesToProcess >= 1ul)
        {
          unsigned long int return_value_AdaptingInputOnlyProcess$8;
          return_value_AdaptingInputOnlyProcess$8=AdaptingInputOnlyProcess(bp, streamCallbackResult, bp->hostInputChannels[(signed long int)1], framesToProcess);
          framesProcessed = framesProcessed + return_value_AdaptingInputOnlyProcess$8;
        }

      }

      else
      {
        framesToProcess = bp->hostOutputFrameCount[(signed long int)0];
        framesProcessed=AdaptingOutputOnlyProcess(bp, streamCallbackResult, bp->hostOutputChannels[(signed long int)0], framesToProcess);
        framesToProcess = bp->hostOutputFrameCount[(signed long int)1];
        if(framesToProcess >= 1ul)
        {
          unsigned long int return_value_AdaptingOutputOnlyProcess$9;
          return_value_AdaptingOutputOnlyProcess$9=AdaptingOutputOnlyProcess(bp, streamCallbackResult, bp->hostOutputChannels[(signed long int)1], framesToProcess);
          framesProcessed = framesProcessed + return_value_AdaptingOutputOnlyProcess$9;
        }

      }
  }
  return framesProcessed;
}

// PaUtil_EndCpuLoadMeasurement
// file src/common/pa_cpuload.c line 79
void PaUtil_EndCpuLoadMeasurement(struct anonymous$10 *measurer, unsigned long int framesProcessed)
{
  double measurementEndTime;
  double secondsFor100Percent;
  double measuredLoad;
  if(framesProcessed >= 1ul)
  {
    measurementEndTime=PaUtil_GetTime();
    /* assertion framesProcessed > 0 */
    assert(framesProcessed > (unsigned long int)0);
    secondsFor100Percent = (double)framesProcessed * measurer->samplingPeriod;
    measuredLoad = (measurementEndTime - measurer->measurementStartTime) / secondsFor100Percent;
    measurer->averageLoad = 0.9 * measurer->averageLoad + (0.99999 - 0.9) * measuredLoad;
  }

}

// PaUtil_FlushRingBuffer
// file src/common/pa_ringbuffer.c line 93
void PaUtil_FlushRingBuffer(struct PaUtilRingBuffer *rbuf)
{
  rbuf->readIndex = (volatile signed long int)0;
  rbuf->writeIndex = rbuf->readIndex;
}

// PaUtil_FreeAllAllocations
// file src/common/pa_allocation.c line 220
void PaUtil_FreeAllAllocations(struct anonymous$14 *group)
{
  struct PaUtilAllocationGroupLink *current = group->allocations;
  struct PaUtilAllocationGroupLink *previous = ((struct PaUtilAllocationGroupLink *)NULL);
  for( ; !(current == ((struct PaUtilAllocationGroupLink *)NULL)); current = current->next)
  {
    PaUtil_FreeMemory(current->buffer);
    current->buffer = NULL;
    previous = current;
  }
  if(!(previous == ((struct PaUtilAllocationGroupLink *)NULL)))
  {
    previous->next = group->spareLinks;
    group->spareLinks = group->allocations;
    group->allocations = ((struct PaUtilAllocationGroupLink *)NULL);
  }

}

// PaUtil_FreeMemory
// file src/common/pa_util.h line 125
void PaUtil_FreeMemory(void *block)
{
  if(!(block == NULL))
    free(block);

}

// PaUtil_Generate16BitTriangularDither
// file src/common/pa_dither.h line 84
signed int PaUtil_Generate16BitTriangularDither(struct PaUtilTriangularDitherGenerator *state)
{
  signed int current;
  signed int highPass;
  state->randSeed1 = state->randSeed1 * (unsigned int)196314165 + (unsigned int)907633515;
  state->randSeed2 = state->randSeed2 * (unsigned int)196314165 + (unsigned int)907633515;
  current = ((signed int)state->randSeed1 >> (sizeof(signed int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)15) + (unsigned long int)1) + ((signed int)state->randSeed2 >> (sizeof(signed int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)15) + (unsigned long int)1);
  highPass = (signed int)((unsigned int)current - state->previous);
  state->previous = (unsigned int)current;
  return highPass;
}

// PaUtil_GenerateFloatTriangularDither
// file src/common/pa_dither.h line 99
float PaUtil_GenerateFloatTriangularDither(struct PaUtilTriangularDitherGenerator *state)
{
  signed int current;
  signed int highPass;
  state->randSeed1 = state->randSeed1 * (unsigned int)196314165 + (unsigned int)907633515;
  state->randSeed2 = state->randSeed2 * (unsigned int)196314165 + (unsigned int)907633515;
  current = ((signed int)state->randSeed1 >> (sizeof(signed int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)15) + (unsigned long int)1) + ((signed int)state->randSeed2 >> (sizeof(signed int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)15) + (unsigned long int)1);
  highPass = (signed int)((unsigned int)current - state->previous);
  state->previous = (unsigned int)current;
  return (float)highPass * const_float_dither_scale_;
}

// PaUtil_GetBufferProcessorInputLatencyFrames
// file src/common/pa_process.c line 431
unsigned long int PaUtil_GetBufferProcessorInputLatencyFrames(struct anonymous$13 *bp)
{
  return bp->initialFramesInTempInputBuffer;
}

// PaUtil_GetBufferProcessorOutputLatencyFrames
// file src/common/pa_process.c line 437
unsigned long int PaUtil_GetBufferProcessorOutputLatencyFrames(struct anonymous$13 *bp)
{
  return bp->initialFramesInTempOutputBuffer;
}

// PaUtil_GetCpuLoad
// file src/common/pa_cpuload.c line 102
double PaUtil_GetCpuLoad(struct anonymous$10 *measurer)
{
  return measurer->averageLoad;
}

// PaUtil_GetHostApiRepresentation
// file src/common/pa_front.c line 461
signed int PaUtil_GetHostApiRepresentation(struct PaUtilHostApiRepresentation **hostApi, enum PaHostApiTypeId type)
{
  signed int result;
  signed int i;
  if(initializationCount_ == 0)
    result = -10000;

  else
  {
    result = -9979;
    i = 0;
    for( ; !(i >= hostApisCount_); i = i + 1)
      if(hostApis_[(signed long int)i]->info.type == type)
      {
        *hostApi = hostApis_[(signed long int)i];
        result = 0;
        break;
      }

  }
  return result;
}

// PaUtil_GetRingBufferReadAvailable
// file ./src/common/pa_ringbuffer.h line 139
signed long int PaUtil_GetRingBufferReadAvailable(const struct PaUtilRingBuffer *rbuf)
{
  return rbuf->writeIndex - rbuf->readIndex & rbuf->bigMask;
}

// PaUtil_GetRingBufferReadRegions
// file src/common/pa_ringbuffer.c line 154
signed long int PaUtil_GetRingBufferReadRegions(struct PaUtilRingBuffer *rbuf, signed long int elementCount, void **dataPtr1, signed long int *sizePtr1, void **dataPtr2, signed long int *sizePtr2)
{
  signed long int index;
  signed long int available;
  available=PaUtil_GetRingBufferReadAvailable(rbuf);
  if(!(available >= elementCount))
    elementCount = available;

  index = rbuf->readIndex & rbuf->smallMask;
  if(!(rbuf->bufferSize >= index + elementCount))
  {
    signed long int firstHalf = rbuf->bufferSize - index;
    *dataPtr1 = (void *)&rbuf->buffer[index * rbuf->elementSizeBytes];
    *sizePtr1 = firstHalf;
    *dataPtr2 = (void *)&rbuf->buffer[(signed long int)0];
    *sizePtr2 = elementCount - firstHalf;
  }

  else
  {
    *dataPtr1 = (void *)&rbuf->buffer[index * rbuf->elementSizeBytes];
    *sizePtr1 = elementCount;
    *dataPtr2 = (void *)0;
    *sizePtr2 = (signed long int)0;
  }
  if(!(available == 0l))
    __sync_synchronize();

  return elementCount;
}

// PaUtil_GetRingBufferWriteAvailable
// file ./src/common/pa_ringbuffer.h line 131
signed long int PaUtil_GetRingBufferWriteAvailable(const struct PaUtilRingBuffer *rbuf)
{
  signed long int return_value_PaUtil_GetRingBufferReadAvailable$1;
  return_value_PaUtil_GetRingBufferReadAvailable$1=PaUtil_GetRingBufferReadAvailable(rbuf);
  return rbuf->bufferSize - return_value_PaUtil_GetRingBufferReadAvailable$1;
}

// PaUtil_GetRingBufferWriteRegions
// file src/common/pa_ringbuffer.c line 104
signed long int PaUtil_GetRingBufferWriteRegions(struct PaUtilRingBuffer *rbuf, signed long int elementCount, void **dataPtr1, signed long int *sizePtr1, void **dataPtr2, signed long int *sizePtr2)
{
  signed long int index;
  signed long int available;
  available=PaUtil_GetRingBufferWriteAvailable(rbuf);
  if(!(available >= elementCount))
    elementCount = available;

  index = rbuf->writeIndex & rbuf->smallMask;
  if(!(rbuf->bufferSize >= index + elementCount))
  {
    signed long int firstHalf = rbuf->bufferSize - index;
    *dataPtr1 = (void *)&rbuf->buffer[index * rbuf->elementSizeBytes];
    *sizePtr1 = firstHalf;
    *dataPtr2 = (void *)&rbuf->buffer[(signed long int)0];
    *sizePtr2 = elementCount - firstHalf;
  }

  else
  {
    *dataPtr1 = (void *)&rbuf->buffer[index * rbuf->elementSizeBytes];
    *sizePtr1 = elementCount;
    *dataPtr2 = (void *)0;
    *sizePtr2 = (signed long int)0;
  }
  if(!(available == 0l))
    __sync_synchronize();

  return elementCount;
}

// PaUtil_GetTime
// file src/common/pa_util.h line 149
double PaUtil_GetTime(void)
{
  struct timespec tp;
  clock_gettime(0, &tp);
  return (double)((double)tp.tv_sec + (double)tp.tv_nsec * 1e-9);
}

// PaUtil_GroupAllocateMemory
// file src/common/pa_allocation.c line 146
void * PaUtil_GroupAllocateMemory(struct anonymous$14 *group, signed long int size)
{
  struct PaUtilAllocationGroupLink *links;
  struct PaUtilAllocationGroupLink *link;
  void *result = NULL;
  if(group->spareLinks == ((struct PaUtilAllocationGroupLink *)NULL))
  {
    links=AllocateLinks(group->linkCount, group->linkBlocks, group->spareLinks);
    if(!(links == ((struct PaUtilAllocationGroupLink *)NULL)))
    {
      group->linkCount = group->linkCount + group->linkCount;
      group->linkBlocks = &links[(signed long int)0];
      group->spareLinks = &links[(signed long int)1];
    }

  }

  if(!(group->spareLinks == ((struct PaUtilAllocationGroupLink *)NULL)))
  {
    result=PaUtil_AllocateMemory(size);
    if(!(result == NULL))
    {
      link = group->spareLinks;
      group->spareLinks = link->next;
      link->buffer = result;
      link->next = group->allocations;
      group->allocations = link;
    }

  }

  return result;
}

// PaUtil_GroupFreeMemory
// file src/common/pa_allocation.c line 183
void PaUtil_GroupFreeMemory(struct anonymous$14 *group, void *buffer)
{
  struct PaUtilAllocationGroupLink *current = group->allocations;
  struct PaUtilAllocationGroupLink *previous = ((struct PaUtilAllocationGroupLink *)NULL);
  if(!(buffer == NULL))
  {
    for( ; !(current == ((struct PaUtilAllocationGroupLink *)NULL)); current = current->next)
    {
      if(current->buffer == buffer)
      {
        if(!(previous == ((struct PaUtilAllocationGroupLink *)NULL)))
          previous->next = current->next;

        else
          group->allocations = current->next;
        current->buffer = NULL;
        current->next = group->spareLinks;
        group->spareLinks = current;
        break;
      }

      previous = current;
    }
    PaUtil_FreeMemory(buffer);
  }

}

// PaUtil_InitializeBufferProcessor
// file src/common/pa_process.c line 90
signed int PaUtil_InitializeBufferProcessor(struct anonymous$13 *bp, signed int inputChannelCount, unsigned long int userInputSampleFormat, unsigned long int hostInputSampleFormat, signed int outputChannelCount, unsigned long int userOutputSampleFormat, unsigned long int hostOutputSampleFormat, double sampleRate, unsigned long int streamFlags, unsigned long int framesPerUserBuffer, unsigned long int framesPerHostBuffer, enum anonymous$12 hostBufferSizeMode, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData)
{
  signed int result = 0;
  signed int bytesPerSample;
  unsigned long int tempInputBufferSize;
  unsigned long int tempOutputBufferSize;
  unsigned long int tempInputStreamFlags;
  if(!((4ul & streamFlags) == 0ul))
  {
    if(!(streamCallback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL)) && framesPerUserBuffer == 0ul && inputChannelCount >= 1 && outputChannelCount >= 1)
      goto __CPROVER_DUMP_L1;

    return -9995;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    bp->tempInputBuffer = NULL;
    bp->tempInputBufferPtrs = ((void **)NULL);
    bp->tempOutputBuffer = NULL;
    bp->tempOutputBufferPtrs = ((void **)NULL);
    bp->framesPerUserBuffer = framesPerUserBuffer;
    bp->framesPerHostBuffer = framesPerHostBuffer;
    bp->inputChannelCount = (unsigned int)inputChannelCount;
    bp->outputChannelCount = (unsigned int)outputChannelCount;
    bp->hostBufferSizeMode = hostBufferSizeMode;
    bp->hostInputChannels[(signed long int)1] = ((struct PaUtilChannelDescriptor *)NULL);
    bp->hostInputChannels[(signed long int)0] = bp->hostInputChannels[(signed long int)1];
    bp->hostOutputChannels[(signed long int)1] = ((struct PaUtilChannelDescriptor *)NULL);
    bp->hostOutputChannels[(signed long int)0] = bp->hostOutputChannels[(signed long int)1];
    if(framesPerUserBuffer == 0ul)
    {
      bp->useNonAdaptingProcess = 1;
      bp->initialFramesInTempInputBuffer = (unsigned long int)0;
      bp->initialFramesInTempOutputBuffer = (unsigned long int)0;
      if((signed int)hostBufferSizeMode == paUtilFixedHostBufferSize || (signed int)hostBufferSizeMode == paUtilBoundedHostBufferSize)
        bp->framesPerTempBuffer = framesPerHostBuffer;

      else
        bp->framesPerTempBuffer = (unsigned long int)1024;
    }

    else
    {
      bp->framesPerTempBuffer = framesPerUserBuffer;
      if(framesPerHostBuffer % framesPerUserBuffer == 0ul && (signed int)hostBufferSizeMode == paUtilFixedHostBufferSize)
      {
        bp->useNonAdaptingProcess = 1;
        bp->initialFramesInTempInputBuffer = (unsigned long int)0;
        bp->initialFramesInTempOutputBuffer = (unsigned long int)0;
      }

      else
      {
        bp->useNonAdaptingProcess = 0;
        if(inputChannelCount >= 1 && outputChannelCount >= 1)
        {
          if((signed int)hostBufferSizeMode == paUtilFixedHostBufferSize)
          {
            unsigned long int frameShift;
            frameShift=CalculateFrameShift(framesPerHostBuffer, framesPerUserBuffer);
            if(!(framesPerHostBuffer >= framesPerUserBuffer))
            {
              bp->initialFramesInTempInputBuffer = frameShift;
              bp->initialFramesInTempOutputBuffer = (unsigned long int)0;
            }

            else
            {
              bp->initialFramesInTempInputBuffer = (unsigned long int)0;
              bp->initialFramesInTempOutputBuffer = frameShift;
            }
          }

          else
          {
            bp->initialFramesInTempInputBuffer = (unsigned long int)0;
            bp->initialFramesInTempOutputBuffer = framesPerUserBuffer;
          }
        }

        else
        {
          bp->initialFramesInTempInputBuffer = (unsigned long int)0;
          bp->initialFramesInTempOutputBuffer = (unsigned long int)0;
        }
      }
    }
    bp->framesInTempInputBuffer = bp->initialFramesInTempInputBuffer;
    bp->framesInTempOutputBuffer = bp->initialFramesInTempOutputBuffer;
    if(inputChannelCount >= 1)
    {
      bytesPerSample=Pa_GetSampleSize(hostInputSampleFormat);
      if(bytesPerSample >= 1)
        bp->bytesPerHostInputSample = (unsigned int)bytesPerSample;

      else
      {
        result = bytesPerSample;
        goto error;
      }
      bytesPerSample=Pa_GetSampleSize(userInputSampleFormat);
      if(bytesPerSample >= 1)
        bp->bytesPerUserInputSample = (unsigned int)bytesPerSample;

      else
      {
        result = bytesPerSample;
        goto error;
      }
      tempInputStreamFlags = streamFlags;
      if((2ul & tempInputStreamFlags) == 0ul && !((2ul & hostInputSampleFormat) == 0ul) && !((4ul & userInputSampleFormat) == 0ul))
        tempInputStreamFlags = tempInputStreamFlags | (unsigned long int)0x00000002;

      bp->inputConverter=PaUtil_SelectConverter(hostInputSampleFormat, userInputSampleFormat, tempInputStreamFlags);
      bp->inputZeroer=PaUtil_SelectZeroer(userInputSampleFormat);
      bp->userInputIsInterleaved = (userInputSampleFormat & (unsigned long int)0x80000000) != 0ul ? 0 : 1;
      bp->hostInputIsInterleaved = (hostInputSampleFormat & (unsigned long int)0x80000000) != 0ul ? 0 : 1;
      bp->userInputSampleFormatIsEqualToHost = (signed int)((userInputSampleFormat & ~((unsigned long int)0x80000000)) == (hostInputSampleFormat & ~((unsigned long int)0x80000000)));
      tempInputBufferSize = bp->framesPerTempBuffer * (unsigned long int)bp->bytesPerUserInputSample * (unsigned long int)inputChannelCount;
      bp->tempInputBuffer=PaUtil_AllocateMemory((signed long int)tempInputBufferSize);
      if(bp->tempInputBuffer == NULL)
      {
        result = -9992;
        goto error;
      }

      if(bp->framesInTempInputBuffer >= 1ul)
        memset(bp->tempInputBuffer, 0, tempInputBufferSize);

      if(!((2147483648ul & userInputSampleFormat) == 0ul))
      {
        void *return_value_PaUtil_AllocateMemory$1;
        return_value_PaUtil_AllocateMemory$1=PaUtil_AllocateMemory((signed long int)(sizeof(void *) /*8ul*/  * (unsigned long int)inputChannelCount));
        bp->tempInputBufferPtrs = (void **)return_value_PaUtil_AllocateMemory$1;
        if(bp->tempInputBufferPtrs == ((void **)NULL))
        {
          result = -9992;
          goto error;
        }

      }

      void *return_value_PaUtil_AllocateMemory$2;
      return_value_PaUtil_AllocateMemory$2=PaUtil_AllocateMemory((signed long int)(sizeof(struct PaUtilChannelDescriptor) /*16ul*/  * (unsigned long int)inputChannelCount * (unsigned long int)2));
      bp->hostInputChannels[(signed long int)0] = (struct PaUtilChannelDescriptor *)return_value_PaUtil_AllocateMemory$2;
      if(bp->hostInputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL))
      {
        result = -9992;
        goto error;
      }

      bp->hostInputChannels[(signed long int)1] = &bp->hostInputChannels[(signed long int)0][(signed long int)inputChannelCount];
    }

    if(outputChannelCount >= 1)
    {
      bytesPerSample=Pa_GetSampleSize(hostOutputSampleFormat);
      if(bytesPerSample >= 1)
        bp->bytesPerHostOutputSample = (unsigned int)bytesPerSample;

      else
      {
        result = bytesPerSample;
        goto error;
      }
      bytesPerSample=Pa_GetSampleSize(userOutputSampleFormat);
      if(bytesPerSample >= 1)
        bp->bytesPerUserOutputSample = (unsigned int)bytesPerSample;

      else
      {
        result = bytesPerSample;
        goto error;
      }
      bp->outputConverter=PaUtil_SelectConverter(userOutputSampleFormat, hostOutputSampleFormat, streamFlags);
      bp->outputZeroer=PaUtil_SelectZeroer(hostOutputSampleFormat);
      bp->userOutputIsInterleaved = (userOutputSampleFormat & (unsigned long int)0x80000000) != 0ul ? 0 : 1;
      bp->hostOutputIsInterleaved = (hostOutputSampleFormat & (unsigned long int)0x80000000) != 0ul ? 0 : 1;
      bp->userOutputSampleFormatIsEqualToHost = (signed int)((userOutputSampleFormat & ~((unsigned long int)0x80000000)) == (hostOutputSampleFormat & ~((unsigned long int)0x80000000)));
      tempOutputBufferSize = bp->framesPerTempBuffer * (unsigned long int)bp->bytesPerUserOutputSample * (unsigned long int)outputChannelCount;
      bp->tempOutputBuffer=PaUtil_AllocateMemory((signed long int)tempOutputBufferSize);
      if(bp->tempOutputBuffer == NULL)
      {
        result = -9992;
        goto error;
      }

      if(bp->framesInTempOutputBuffer >= 1ul)
        memset(bp->tempOutputBuffer, 0, tempOutputBufferSize);

      if(!((2147483648ul & userOutputSampleFormat) == 0ul))
      {
        void *return_value_PaUtil_AllocateMemory$3;
        return_value_PaUtil_AllocateMemory$3=PaUtil_AllocateMemory((signed long int)(sizeof(void *) /*8ul*/  * (unsigned long int)outputChannelCount));
        bp->tempOutputBufferPtrs = (void **)return_value_PaUtil_AllocateMemory$3;
        if(bp->tempOutputBufferPtrs == ((void **)NULL))
        {
          result = -9992;
          goto error;
        }

      }

      void *return_value_PaUtil_AllocateMemory$4;
      return_value_PaUtil_AllocateMemory$4=PaUtil_AllocateMemory((signed long int)(sizeof(struct PaUtilChannelDescriptor) /*16ul*/  * (unsigned long int)outputChannelCount * (unsigned long int)2));
      bp->hostOutputChannels[(signed long int)0] = (struct PaUtilChannelDescriptor *)return_value_PaUtil_AllocateMemory$4;
      if(bp->hostOutputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL))
      {
        result = -9992;
        goto error;
      }

      bp->hostOutputChannels[(signed long int)1] = &bp->hostOutputChannels[(signed long int)0][(signed long int)outputChannelCount];
    }

    PaUtil_InitializeTriangularDitherState(&bp->ditherGenerator);
    bp->samplePeriod = 1. / sampleRate;
    bp->streamCallback = streamCallback;
    bp->userData = userData;
    return result;

  error:
    ;
    if(!(bp->tempInputBuffer == NULL))
      PaUtil_FreeMemory(bp->tempInputBuffer);

    if(!(bp->tempInputBufferPtrs == ((void **)NULL)))
      PaUtil_FreeMemory((void *)bp->tempInputBufferPtrs);

    if(!(bp->hostInputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL)))
      PaUtil_FreeMemory((void *)bp->hostInputChannels[(signed long int)0]);

    if(!(bp->tempOutputBuffer == NULL))
      PaUtil_FreeMemory(bp->tempOutputBuffer);

    if(!(bp->tempOutputBufferPtrs == ((void **)NULL)))
      PaUtil_FreeMemory((void *)bp->tempOutputBufferPtrs);

    if(!(bp->hostOutputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL)))
      PaUtil_FreeMemory((void *)bp->hostOutputChannels[(signed long int)0]);

    return result;
  }
}

// PaUtil_InitializeClock
// file src/common/pa_util.h line 142
void PaUtil_InitializeClock(void)
{
  ;
}

// PaUtil_InitializeCpuLoadMeasurer
// file src/common/pa_cpuload.c line 60
void PaUtil_InitializeCpuLoadMeasurer(struct anonymous$10 *measurer, double sampleRate)
{
  /* assertion sampleRate > 0 */
  assert(sampleRate > (double)0);
  measurer->samplingPeriod = 1. / sampleRate;
  measurer->averageLoad = 0.;
}

// PaUtil_InitializeDeviceInfo
// file src/hostapi/oss/pa_unix_oss.c line 292
signed int PaUtil_InitializeDeviceInfo(struct PaDeviceInfo *deviceInfo, const char *name, signed int hostApiIndex, signed int maxInputChannels, signed int maxOutputChannels, double defaultLowInputLatency, double defaultLowOutputLatency, double defaultHighInputLatency, double defaultHighOutputLatency, double defaultSampleRate, struct anonymous$14 *allocations)
{
  signed int result = 0;
  deviceInfo->structVersion = 2;
  if(!(allocations == ((struct anonymous$14 *)NULL)))
  {
    unsigned long int len;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(name);
    len = return_value_strlen$1 + (unsigned long int)1;
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$2;
      return_value_PaUtil_GroupAllocateMemory$2=PaUtil_GroupAllocateMemory(allocations, (signed long int)len);
      deviceInfo->name = (const char *)return_value_PaUtil_GroupAllocateMemory$2;
      if(deviceInfo->name == ((const char *)NULL))
      {
        PaUtil_DebugPrint("Expression 'deviceInfo->name = PaUtil_GroupAllocateMemory( allocations, len )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 302\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    strncpy((char *)deviceInfo->name, name, len);
  }

  else
    deviceInfo->name = name;
  deviceInfo->hostApi = hostApiIndex;
  deviceInfo->maxInputChannels = maxInputChannels;
  deviceInfo->maxOutputChannels = maxOutputChannels;
  deviceInfo->defaultLowInputLatency = defaultLowInputLatency;
  deviceInfo->defaultLowOutputLatency = defaultLowOutputLatency;
  deviceInfo->defaultHighInputLatency = defaultHighInputLatency;
  deviceInfo->defaultHighOutputLatency = defaultHighOutputLatency;
  deviceInfo->defaultSampleRate = defaultSampleRate;

error:
  ;
  return result;
}

// PaUtil_InitializeRingBuffer
// file ./src/common/pa_ringbuffer.h line 117
signed long int PaUtil_InitializeRingBuffer(struct PaUtilRingBuffer *rbuf, signed long int elementSizeBytes, signed long int elementCount, void *dataPtr)
{
  if(!((elementCount + -1l & elementCount) == 0l))
    return (signed long int)-1;

  else
  {
    rbuf->bufferSize = elementCount;
    rbuf->buffer = (char *)dataPtr;
    PaUtil_FlushRingBuffer(rbuf);
    rbuf->bigMask = elementCount * (signed long int)2 - (signed long int)1;
    rbuf->smallMask = elementCount - (signed long int)1;
    rbuf->elementSizeBytes = elementSizeBytes;
    return (signed long int)0;
  }
}

// PaUtil_InitializeStreamInterface
// file src/common/pa_stream.c line 51
void PaUtil_InitializeStreamInterface(struct anonymous$11 *streamInterface, signed int (*Close)(void *), signed int (*Start)(void *), signed int (*Stop)(void *), signed int (*Abort)(void *), signed int (*IsStopped)(void *), signed int (*IsActive)(void *), double (*GetTime)(void *), double (*GetCpuLoad)(void *), signed int (*Read)(void *, void *, unsigned long int), signed int (*Write)(void *, const void *, unsigned long int), signed long int (*GetReadAvailable)(void *), signed long int (*GetWriteAvailable)(void *))
{
  streamInterface->Close = Close;
  streamInterface->Start = Start;
  streamInterface->Stop = Stop;
  streamInterface->Abort = Abort;
  streamInterface->IsStopped = IsStopped;
  streamInterface->IsActive = IsActive;
  streamInterface->GetTime = GetTime;
  streamInterface->GetCpuLoad = GetCpuLoad;
  streamInterface->Read = Read;
  streamInterface->Write = Write;
  streamInterface->GetReadAvailable = GetReadAvailable;
  streamInterface->GetWriteAvailable = GetWriteAvailable;
}

// PaUtil_InitializeStreamRepresentation
// file src/common/pa_stream.c line 80
void PaUtil_InitializeStreamRepresentation(struct PaUtilStreamRepresentation *streamRepresentation, struct anonymous$11 *streamInterface, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData)
{
  streamRepresentation->magic = (unsigned long int)0x18273645;
  streamRepresentation->nextOpenStream = ((struct PaUtilStreamRepresentation *)NULL);
  streamRepresentation->streamInterface = streamInterface;
  streamRepresentation->streamCallback = streamCallback;
  streamRepresentation->streamFinishedCallback = ((void (*)(void *))NULL);
  streamRepresentation->userData = userData;
  streamRepresentation->streamInfo.inputLatency = 0.;
  streamRepresentation->streamInfo.outputLatency = 0.;
  streamRepresentation->streamInfo.sampleRate = 0.;
  streamRepresentation->hostApiType = (enum PaHostApiTypeId)0;
}

// PaUtil_InitializeThreading
// file ./src/os/unix/pa_unix_util.h line 116
signed int PaUtil_InitializeThreading(struct anonymous$0 *threading)
{
  (void)paUtilErr_$link2;
  return 0;
}

// PaUtil_InitializeTriangularDitherState
// file src/common/pa_dither.c line 57
void PaUtil_InitializeTriangularDitherState(struct PaUtilTriangularDitherGenerator *state)
{
  state->previous = (unsigned int)0;
  state->randSeed1 = (unsigned int)22222;
  state->randSeed2 = (unsigned int)5555555;
}

// PaUtil_IsBufferProcessorOutputEmpty
// file src/common/pa_process.c line 1654
signed int PaUtil_IsBufferProcessorOutputEmpty(struct anonymous$13 *bp)
{
  return bp->framesInTempOutputBuffer != 0ul ? 0 : 1;
}

// PaUtil_ReadRingBuffer
// file ./src/common/pa_ringbuffer.h line 163
signed long int PaUtil_ReadRingBuffer(struct PaUtilRingBuffer *rbuf, void *data, signed long int elementCount)
{
  signed long int size1;
  signed long int size2;
  signed long int numRead;
  void *data1;
  void *data2;
  numRead=PaUtil_GetRingBufferReadRegions(rbuf, elementCount, &data1, &size1, &data2, &size2);
  if(size2 >= 1l)
  {
    memcpy(data, data1, (unsigned long int)(size1 * rbuf->elementSizeBytes));
    data = (void *)((char *)data + size1 * rbuf->elementSizeBytes);
    memcpy(data, data2, (unsigned long int)(size2 * rbuf->elementSizeBytes));
  }

  else
    memcpy(data, data1, (unsigned long int)(size1 * rbuf->elementSizeBytes));
  PaUtil_AdvanceRingBufferReadIndex(rbuf, numRead);
  return numRead;
}

// PaUtil_ResetBufferProcessor
// file src/common/pa_process.c line 408
void PaUtil_ResetBufferProcessor(struct anonymous$13 *bp)
{
  unsigned long int tempInputBufferSize;
  unsigned long int tempOutputBufferSize;
  bp->framesInTempInputBuffer = bp->initialFramesInTempInputBuffer;
  bp->framesInTempOutputBuffer = bp->initialFramesInTempOutputBuffer;
  if(bp->framesInTempInputBuffer >= 1ul)
  {
    tempInputBufferSize = bp->framesPerTempBuffer * (unsigned long int)bp->bytesPerUserInputSample * (unsigned long int)bp->inputChannelCount;
    memset(bp->tempInputBuffer, 0, tempInputBufferSize);
  }

  if(bp->framesInTempOutputBuffer >= 1ul)
  {
    tempOutputBufferSize = bp->framesPerTempBuffer * (unsigned long int)bp->bytesPerUserOutputSample * (unsigned long int)bp->outputChannelCount;
    memset(bp->tempOutputBuffer, 0, tempOutputBufferSize);
  }

}

// PaUtil_ResetCpuLoadMeasurer
// file src/common/pa_cpuload.c line 68
void PaUtil_ResetCpuLoadMeasurer(struct anonymous$10 *measurer)
{
  measurer->averageLoad = 0.;
}

// PaUtil_SelectClosestAvailableFormat
// file src/common/pa_converters.c line 70
unsigned long int PaUtil_SelectClosestAvailableFormat(unsigned long int availableFormats, unsigned long int format)
{
  unsigned long int result;
  format = format & ~((unsigned long int)0x80000000);
  availableFormats = availableFormats & ~((unsigned long int)0x80000000);
  if((availableFormats & format) == 0ul)
  {
    if(!(format == 1ul))
    {
      result = format;
      do
        result = result >> 1;
      while((result & availableFormats) == 0ul && !(result == 0ul));
    }

    else
      result = (unsigned long int)0;
    if(result == 0ul)
    {
      result = format;
      do
        result = result << 1;
      while((result & availableFormats) == 0ul && !(result == 65536ul));
      if((result & availableFormats) == 0ul)
        result = (unsigned long int)-9994;

    }

  }

  else
    result = format;
  return result;
}

// PaUtil_SelectConverter
// file src/common/pa_converters.c line 178
void (*PaUtil_SelectConverter(unsigned long int sourceFormat, unsigned long int destinationFormat, unsigned long int flags))(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *)
{
  switch(sourceFormat & ~((unsigned long int)0x80000000))
  {
    case (unsigned long int)0x00000001:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.Copy_32_To_32;
        case (unsigned long int)0x00000002:
          if(!((1ul & flags) == 0ul))
          {
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int32;

            else
              return paConverters.Float32_To_Int32_Dither;
          }

          else
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int32_Clip;

            else
              return paConverters.Float32_To_Int32_DitherClip;
        case (unsigned long int)0x00000004:
          if(!((1ul & flags) == 0ul))
          {
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int24;

            else
              return paConverters.Float32_To_Int24_Dither;
          }

          else
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int24_Clip;

            else
              return paConverters.Float32_To_Int24_DitherClip;
        case (unsigned long int)0x00000008:
          if(!((1ul & flags) == 0ul))
          {
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int16;

            else
              return paConverters.Float32_To_Int16_Dither;
          }

          else
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int16_Clip;

            else
              return paConverters.Float32_To_Int16_DitherClip;
        case (unsigned long int)0x00000010:
          if(!((1ul & flags) == 0ul))
          {
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int8;

            else
              return paConverters.Float32_To_Int8_Dither;
          }

          else
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_Int8_Clip;

            else
              return paConverters.Float32_To_Int8_DitherClip;
        case (unsigned long int)0x00000020:
          if(!((1ul & flags) == 0ul))
          {
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_UInt8;

            else
              return paConverters.Float32_To_UInt8_Dither;
          }

          else
            if(!((2ul & flags) == 0ul))
              return paConverters.Float32_To_UInt8_Clip;

            else
              return paConverters.Float32_To_UInt8_DitherClip;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    case (unsigned long int)0x00000002:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.Int32_To_Float32;
        case (unsigned long int)0x00000002:
          return paConverters.Copy_32_To_32;
        case (unsigned long int)0x00000004:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int32_To_Int24;

          else
            return paConverters.Int32_To_Int24_Dither;
        case (unsigned long int)0x00000008:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int32_To_Int16;

          else
            return paConverters.Int32_To_Int16_Dither;
        case (unsigned long int)0x00000010:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int32_To_Int8;

          else
            return paConverters.Int32_To_Int8_Dither;
        case (unsigned long int)0x00000020:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int32_To_UInt8;

          else
            return paConverters.Int32_To_UInt8_Dither;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    case (unsigned long int)0x00000004:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.Int24_To_Float32;
        case (unsigned long int)0x00000002:
          return paConverters.Int24_To_Int32;
        case (unsigned long int)0x00000004:
          return paConverters.Copy_24_To_24;
        case (unsigned long int)0x00000008:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int24_To_Int16;

          else
            return paConverters.Int24_To_Int16_Dither;
        case (unsigned long int)0x00000010:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int24_To_Int8;

          else
            return paConverters.Int24_To_Int8_Dither;
        case (unsigned long int)0x00000020:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int24_To_UInt8;

          else
            return paConverters.Int24_To_UInt8_Dither;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    case (unsigned long int)0x00000008:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.Int16_To_Float32;
        case (unsigned long int)0x00000002:
          return paConverters.Int16_To_Int32;
        case (unsigned long int)0x00000004:
          return paConverters.Int16_To_Int24;
        case (unsigned long int)0x00000008:
          return paConverters.Copy_16_To_16;
        case (unsigned long int)0x00000010:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int16_To_Int8;

          else
            return paConverters.Int16_To_Int8_Dither;
        case (unsigned long int)0x00000020:
          if(!((2ul & flags) == 0ul))
            return paConverters.Int16_To_UInt8;

          else
            return paConverters.Int16_To_UInt8_Dither;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    case (unsigned long int)0x00000010:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.Int8_To_Float32;
        case (unsigned long int)0x00000002:
          return paConverters.Int8_To_Int32;
        case (unsigned long int)0x00000004:
          return paConverters.Int8_To_Int24;
        case (unsigned long int)0x00000008:
          return paConverters.Int8_To_Int16;
        case (unsigned long int)0x00000010:
          return paConverters.Copy_8_To_8;
        case (unsigned long int)0x00000020:
          return paConverters.Int8_To_UInt8;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    case (unsigned long int)0x00000020:
      switch(destinationFormat & ~((unsigned long int)0x80000000))
      {
        case (unsigned long int)0x00000001:
          return paConverters.UInt8_To_Float32;
        case (unsigned long int)0x00000002:
          return paConverters.UInt8_To_Int32;
        case (unsigned long int)0x00000004:
          return paConverters.UInt8_To_Int24;
        case (unsigned long int)0x00000008:
          return paConverters.UInt8_To_Int16;
        case (unsigned long int)0x00000010:
          return paConverters.UInt8_To_Int8;
        case (unsigned long int)0x00000020:
          return paConverters.Copy_8_To_8;
        default:
          return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
      }
    default:
      return ((void (*)(void *, signed int, void *, signed int, unsigned int, struct PaUtilTriangularDitherGenerator *))NULL);
  }
}

// PaUtil_SelectZeroer
// file src/common/pa_converters.c line 1857
void (*PaUtil_SelectZeroer(unsigned long int destinationFormat))(void *, signed int, unsigned int)
{
  switch(destinationFormat & ~((unsigned long int)0x80000000))
  {
    case (unsigned long int)0x00000001:
      return paZeroers.Zero32;
    case (unsigned long int)0x00000002:
      return paZeroers.Zero32;
    case (unsigned long int)0x00000004:
      return paZeroers.Zero24;
    case (unsigned long int)0x00000008:
      return paZeroers.Zero16;
    case (unsigned long int)0x00000010:
      return paZeroers.Zero8;
    case (unsigned long int)0x00000020:
      return paZeroers.ZeroU8;
    default:
      return ((void (*)(void *, signed int, unsigned int))NULL);
  }
}

// PaUtil_Set2ndInputChannel
// file src/common/pa_process.c line 512
void PaUtil_Set2ndInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride)
{
  /* assertion channel < bp->inputChannelCount */
  assert(channel < bp->inputChannelCount);
  (bp->hostInputChannels[(signed long int)1] + (signed long int)channel)->data = data;
  (bp->hostInputChannels[(signed long int)1] + (signed long int)channel)->stride = stride;
}

// PaUtil_Set2ndInputFrameCount
// file src/common/pa_process.c line 505
void PaUtil_Set2ndInputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount)
{
  bp->hostInputFrameCount[(signed long int)1] = frameCount;
}

// PaUtil_Set2ndInterleavedInputChannels
// file src/common/pa_process.c line 522
void PaUtil_Set2ndInterleavedInputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount)
{
  unsigned int i;
  unsigned int channel = firstChannel;
  unsigned char *p = (unsigned char *)data;
  if(channelCount == 0u)
    channelCount = bp->inputChannelCount;

  /* assertion firstChannel < bp->inputChannelCount */
  assert(firstChannel < bp->inputChannelCount);
  /* assertion firstChannel + channelCount <= bp->inputChannelCount */
  assert(firstChannel + channelCount <= bp->inputChannelCount);
  /* assertion bp->hostInputIsInterleaved */
  assert(bp->hostInputIsInterleaved != 0);
  i = (unsigned int)0;
  for( ; !(i >= channelCount); i = i + 1u)
  {
    (bp->hostInputChannels[(signed long int)1] + (signed long int)(channel + i))->data = (void *)p;
    p = p + (signed long int)bp->bytesPerHostInputSample;
    (bp->hostInputChannels[(signed long int)1] + (signed long int)(channel + i))->stride = channelCount;
  }
}

// PaUtil_Set2ndInterleavedOutputChannels
// file src/common/pa_process.c line 637
void PaUtil_Set2ndInterleavedOutputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount)
{
  unsigned int i;
  unsigned int channel = firstChannel;
  unsigned char *p = (unsigned char *)data;
  if(channelCount == 0u)
    channelCount = bp->outputChannelCount;

  /* assertion firstChannel < bp->outputChannelCount */
  assert(firstChannel < bp->outputChannelCount);
  /* assertion firstChannel + channelCount <= bp->outputChannelCount */
  assert(firstChannel + channelCount <= bp->outputChannelCount);
  /* assertion bp->hostOutputIsInterleaved */
  assert(bp->hostOutputIsInterleaved != 0);
  i = (unsigned int)0;
  for( ; !(i >= channelCount); i = i + 1u)
  {
    PaUtil_Set2ndOutputChannel(bp, channel + i, (void *)p, channelCount);
    p = p + (signed long int)bp->bytesPerHostOutputSample;
  }
}

// PaUtil_Set2ndNonInterleavedInputChannel
// file src/common/pa_process.c line 545
void PaUtil_Set2ndNonInterleavedInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data)
{
  /* assertion channel < bp->inputChannelCount */
  assert(channel < bp->inputChannelCount);
  /* assertion !bp->hostInputIsInterleaved */
  assert(!(bp->hostInputIsInterleaved != 0));
  (bp->hostInputChannels[(signed long int)1] + (signed long int)channel)->data = data;
  (bp->hostInputChannels[(signed long int)1] + (signed long int)channel)->stride = (unsigned int)1;
}

// PaUtil_Set2ndNonInterleavedOutputChannel
// file src/common/pa_process.c line 659
void PaUtil_Set2ndNonInterleavedOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data)
{
  /* assertion channel < bp->outputChannelCount */
  assert(channel < bp->outputChannelCount);
  /* assertion !bp->hostOutputIsInterleaved */
  assert(!(bp->hostOutputIsInterleaved != 0));
  PaUtil_Set2ndOutputChannel(bp, channel, data, (unsigned int)1);
}

// PaUtil_Set2ndOutputChannel
// file src/common/pa_process.c line 626
void PaUtil_Set2ndOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride)
{
  /* assertion channel < bp->outputChannelCount */
  assert(channel < bp->outputChannelCount);
  /* assertion data != ((void *)0) */
  assert(data != (void *)0);
  (bp->hostOutputChannels[(signed long int)1] + (signed long int)channel)->data = data;
  (bp->hostOutputChannels[(signed long int)1] + (signed long int)channel)->stride = stride;
}

// PaUtil_Set2ndOutputFrameCount
// file src/common/pa_process.c line 619
void PaUtil_Set2ndOutputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount)
{
  bp->hostOutputFrameCount[(signed long int)1] = frameCount;
}

// PaUtil_SetDebugPrintFunction
// file src/common/pa_debugprint.c line 68
void PaUtil_SetDebugPrintFunction(void (*cb)(const char *))
{
  userCB = cb;
}

// PaUtil_SetInputChannel
// file src/common/pa_process.c line 461
void PaUtil_SetInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride)
{
  /* assertion channel < bp->inputChannelCount */
  assert(channel < bp->inputChannelCount);
  (bp->hostInputChannels[(signed long int)0] + (signed long int)channel)->data = data;
  (bp->hostInputChannels[(signed long int)0] + (signed long int)channel)->stride = stride;
}

// PaUtil_SetInputFrameCount
// file src/common/pa_process.c line 443
void PaUtil_SetInputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount)
{
  if(frameCount == 0ul)
    bp->hostInputFrameCount[(signed long int)0] = bp->framesPerHostBuffer;

  else
    bp->hostInputFrameCount[(signed long int)0] = frameCount;
}

// PaUtil_SetInterleavedInputChannels
// file src/common/pa_process.c line 471
void PaUtil_SetInterleavedInputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount)
{
  unsigned int i;
  unsigned int channel = firstChannel;
  unsigned char *p = (unsigned char *)data;
  if(channelCount == 0u)
    channelCount = bp->inputChannelCount;

  /* assertion firstChannel < bp->inputChannelCount */
  assert(firstChannel < bp->inputChannelCount);
  /* assertion firstChannel + channelCount <= bp->inputChannelCount */
  assert(firstChannel + channelCount <= bp->inputChannelCount);
  /* assertion bp->hostInputIsInterleaved */
  assert(bp->hostInputIsInterleaved != 0);
  i = (unsigned int)0;
  for( ; !(i >= channelCount); i = i + 1u)
  {
    (bp->hostInputChannels[(signed long int)0] + (signed long int)(channel + i))->data = (void *)p;
    p = p + (signed long int)bp->bytesPerHostInputSample;
    (bp->hostInputChannels[(signed long int)0] + (signed long int)(channel + i))->stride = channelCount;
  }
}

// PaUtil_SetInterleavedOutputChannels
// file src/common/pa_process.c line 587
void PaUtil_SetInterleavedOutputChannels(struct anonymous$13 *bp, unsigned int firstChannel, void *data, unsigned int channelCount)
{
  unsigned int i;
  unsigned int channel = firstChannel;
  unsigned char *p = (unsigned char *)data;
  if(channelCount == 0u)
    channelCount = bp->outputChannelCount;

  /* assertion firstChannel < bp->outputChannelCount */
  assert(firstChannel < bp->outputChannelCount);
  /* assertion firstChannel + channelCount <= bp->outputChannelCount */
  assert(firstChannel + channelCount <= bp->outputChannelCount);
  /* assertion bp->hostOutputIsInterleaved */
  assert(bp->hostOutputIsInterleaved != 0);
  i = (unsigned int)0;
  for( ; !(i >= channelCount); i = i + 1u)
  {
    PaUtil_SetOutputChannel(bp, channel + i, (void *)p, channelCount);
    p = p + (signed long int)bp->bytesPerHostOutputSample;
  }
}

// PaUtil_SetLastHostErrorInfo
// file src/common/pa_front.c line 106
void PaUtil_SetLastHostErrorInfo(enum PaHostApiTypeId hostApiType, signed long int errorCode, const char *errorText)
{
  lastHostErrorInfo_.hostApiType = hostApiType;
  lastHostErrorInfo_.errorCode = errorCode;
  strncpy(lastHostErrorText_, errorText, (unsigned long int)1024);
}

// PaUtil_SetNoInput
// file src/common/pa_process.c line 453
void PaUtil_SetNoInput(struct anonymous$13 *bp)
{
  /* assertion bp->inputChannelCount > 0 */
  assert(bp->inputChannelCount > (unsigned int)0);
  (bp->hostInputChannels[(signed long int)0] + (signed long int)0)->data = NULL;
}

// PaUtil_SetNoOutput
// file src/common/pa_process.c line 566
void PaUtil_SetNoOutput(struct anonymous$13 *bp)
{
  /* assertion bp->outputChannelCount > 0 */
  assert(bp->outputChannelCount > (unsigned int)0);
  (bp->hostOutputChannels[(signed long int)0] + (signed long int)0)->data = NULL;
}

// PaUtil_SetNonInterleavedInputChannel
// file src/common/pa_process.c line 494
void PaUtil_SetNonInterleavedInputChannel(struct anonymous$13 *bp, unsigned int channel, void *data)
{
  /* assertion channel < bp->inputChannelCount */
  assert(channel < bp->inputChannelCount);
  /* assertion !bp->hostInputIsInterleaved */
  assert(!(bp->hostInputIsInterleaved != 0));
  (bp->hostInputChannels[(signed long int)0] + (signed long int)channel)->data = data;
  (bp->hostInputChannels[(signed long int)0] + (signed long int)channel)->stride = (unsigned int)1;
}

// PaUtil_SetNonInterleavedOutputChannel
// file src/common/pa_process.c line 609
void PaUtil_SetNonInterleavedOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data)
{
  /* assertion channel < bp->outputChannelCount */
  assert(channel < bp->outputChannelCount);
  /* assertion !bp->hostOutputIsInterleaved */
  assert(!(bp->hostOutputIsInterleaved != 0));
  PaUtil_SetOutputChannel(bp, channel, data, (unsigned int)1);
}

// PaUtil_SetOutputChannel
// file src/common/pa_process.c line 576
void PaUtil_SetOutputChannel(struct anonymous$13 *bp, unsigned int channel, void *data, unsigned int stride)
{
  /* assertion channel < bp->outputChannelCount */
  assert(channel < bp->outputChannelCount);
  /* assertion data != ((void *)0) */
  assert(data != (void *)0);
  (bp->hostOutputChannels[(signed long int)0] + (signed long int)channel)->data = data;
  (bp->hostOutputChannels[(signed long int)0] + (signed long int)channel)->stride = stride;
}

// PaUtil_SetOutputFrameCount
// file src/common/pa_process.c line 556
void PaUtil_SetOutputFrameCount(struct anonymous$13 *bp, unsigned long int frameCount)
{
  if(frameCount == 0ul)
    bp->hostOutputFrameCount[(signed long int)0] = bp->framesPerHostBuffer;

  else
    bp->hostOutputFrameCount[(signed long int)0] = frameCount;
}

// PaUtil_StartThreading
// file ./src/os/unix/pa_unix_util.h line 118
signed int PaUtil_StartThreading(struct anonymous$0 *threading, void * (*threadRoutine)(void *), void *data)
{
  pthread_create(&threading->callbackThread, (const union pthread_attr_t *)(void *)0, threadRoutine, data);
  return 0;
}

// PaUtil_TerminateBufferProcessor
// file src/common/pa_process.c line 386
void PaUtil_TerminateBufferProcessor(struct anonymous$13 *bp)
{
  if(!(bp->tempInputBuffer == NULL))
    PaUtil_FreeMemory(bp->tempInputBuffer);

  if(!(bp->tempInputBufferPtrs == ((void **)NULL)))
    PaUtil_FreeMemory((void *)bp->tempInputBufferPtrs);

  if(!(bp->hostInputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL)))
    PaUtil_FreeMemory((void *)bp->hostInputChannels[(signed long int)0]);

  if(!(bp->tempOutputBuffer == NULL))
    PaUtil_FreeMemory(bp->tempOutputBuffer);

  if(!(bp->tempOutputBufferPtrs == ((void **)NULL)))
    PaUtil_FreeMemory((void *)bp->tempOutputBufferPtrs);

  if(!(bp->hostOutputChannels[0l] == ((struct PaUtilChannelDescriptor *)NULL)))
    PaUtil_FreeMemory((void *)bp->hostOutputChannels[(signed long int)0]);

}

// PaUtil_TerminateStreamRepresentation
// file src/common/pa_stream.c line 101
void PaUtil_TerminateStreamRepresentation(struct PaUtilStreamRepresentation *streamRepresentation)
{
  streamRepresentation->magic = (unsigned long int)0;
}

// PaUtil_TerminateThreading
// file ./src/os/unix/pa_unix_util.h line 117
void PaUtil_TerminateThreading(struct anonymous$0 *threading)
{
  ;
}

// PaUtil_TraceStubToSatisfyLinker
// file src/common/pa_trace.c line 234
signed int PaUtil_TraceStubToSatisfyLinker(void)
{
  return 0;
}

// PaUtil_ValidateStreamPointer
// file src/common/pa_front.c line 1316
signed int PaUtil_ValidateStreamPointer(void *stream)
{
  if(initializationCount_ == 0)
    return -10000;

  else
    if(stream == NULL)
      return -9988;

    else
      if(!(((struct PaUtilStreamRepresentation *)stream)->magic == 405222981ul))
        return -9988;

      else
        return 0;
}

// PaUtil_WriteRingBuffer
// file ./src/common/pa_ringbuffer.h line 151
signed long int PaUtil_WriteRingBuffer(struct PaUtilRingBuffer *rbuf, const void *data, signed long int elementCount)
{
  signed long int size1;
  signed long int size2;
  signed long int numWritten;
  void *data1;
  void *data2;
  numWritten=PaUtil_GetRingBufferWriteRegions(rbuf, elementCount, &data1, &size1, &data2, &size2);
  if(size2 >= 1l)
  {
    memcpy(data1, data, (unsigned long int)(size1 * rbuf->elementSizeBytes));
    data = (const void *)((char *)data + size1 * rbuf->elementSizeBytes);
    memcpy(data2, data, (unsigned long int)(size2 * rbuf->elementSizeBytes));
  }

  else
    memcpy(data1, data, (unsigned long int)(size1 * rbuf->elementSizeBytes));
  PaUtil_AdvanceRingBufferWriteIndex(rbuf, numWritten);
  return numWritten;
}

// PaUtil_ZeroOutput
// file src/common/pa_process.c line 1805
unsigned long int PaUtil_ZeroOutput(struct anonymous$13 *bp, unsigned long int frameCount)
{
  struct PaUtilChannelDescriptor *hostOutputChannels;
  unsigned int framesToZero;
  unsigned int i;
  hostOutputChannels = bp->hostOutputChannels[(signed long int)0];
  unsigned long int tmp_if_expr$1;
  if(!(bp->hostOutputFrameCount[0l] >= frameCount))
    tmp_if_expr$1 = bp->hostOutputFrameCount[(signed long int)0];

  else
    tmp_if_expr$1 = frameCount;
  framesToZero = (unsigned int)tmp_if_expr$1;
  i = (unsigned int)0;
  if(!(i >= bp->outputChannelCount))
  {
    bp->outputZeroer((hostOutputChannels + (signed long int)i)->data, (signed int)(hostOutputChannels + (signed long int)i)->stride, framesToZero);
    (hostOutputChannels + (signed long int)i)->data = (void *)((unsigned char *)(hostOutputChannels + (signed long int)i)->data + (signed long int)(framesToZero * (hostOutputChannels + (signed long int)i)->stride * bp->bytesPerHostOutputSample));
    i = i + 1u;
  }

  bp->hostOutputFrameCount[(signed long int)0] = bp->hostOutputFrameCount[(signed long int)0] + (unsigned long int)framesToZero;
  return (unsigned long int)framesToZero;
}

// Pa_AbortStream
// file src/common/pa_front.c line 1444
signed int Pa_AbortStream(void *stream)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
    if(result == 0)
      result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->Abort(stream);

    else
      if(result == 1)
        result = -9983;

  }

  return result;
}

// Pa_CloseStream
// file ./include/portaudio.h line 894
signed int Pa_CloseStream(void *stream)
{
  struct anonymous$11 *interface;
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  RemoveOpenStream(stream);
  if(result == 0)
  {
    interface = ((struct PaUtilStreamRepresentation *)stream)->streamInterface;
    result=interface->IsStopped(stream);
    if(result == 1)
      result = 0;

    else
      if(result == 0)
        result=interface->Abort(stream);

    if(result == 0)
      result=interface->Close(stream);

  }

  return result;
}

// Pa_GetDefaultHostApi
// file src/common/pa_front.c line 533
signed int Pa_GetDefaultHostApi(void)
{
  signed int result;
  if(initializationCount_ == 0)
    result = -10000;

  else
  {
    result = defaultHostApiIndex_;
    if(result >= hostApisCount_ || !(result >= 0))
      result = -9986;

  }
  return result;
}

// Pa_GetDefaultInputDevice
// file src/common/pa_front.c line 662
signed int Pa_GetDefaultInputDevice(void)
{
  signed int hostApi;
  signed int result;
  hostApi=Pa_GetDefaultHostApi();
  if(!(hostApi >= 0))
    result = (signed int)-1;

  else
    result = hostApis_[(signed long int)hostApi]->info.defaultInputDevice;
  return result;
}

// Pa_GetDefaultOutputDevice
// file src/common/pa_front.c line 685
signed int Pa_GetDefaultOutputDevice(void)
{
  signed int hostApi;
  signed int result;
  hostApi=Pa_GetDefaultHostApi();
  if(!(hostApi >= 0))
    result = (signed int)-1;

  else
    result = hostApis_[(signed long int)hostApi]->info.defaultOutputDevice;
  return result;
}

// Pa_GetDeviceCount
// file src/common/pa_front.c line 641
signed int Pa_GetDeviceCount(void)
{
  signed int result;
  if(initializationCount_ == 0)
    result = -10000;

  else
    result = deviceCount_;
  return result;
}

// Pa_GetDeviceInfo
// file src/common/pa_front.c line 708
const struct PaDeviceInfo * Pa_GetDeviceInfo(signed int device)
{
  signed int hostSpecificDeviceIndex;
  signed int hostApiIndex;
  hostApiIndex=FindHostApi(device, &hostSpecificDeviceIndex);
  struct PaDeviceInfo *result;
  if(!(hostApiIndex >= 0))
    result = (struct PaDeviceInfo *)(void *)0;

  else
    result = hostApis_[(signed long int)hostApiIndex]->deviceInfos[(signed long int)hostSpecificDeviceIndex];
  return result;
}

// Pa_GetErrorText
// file src/common/pa_front.c line 381
const char * Pa_GetErrorText(signed int errorCode)
{
  const char *result;
  switch(errorCode)
  {
    case 0:
    {
      result = "Success";
      break;
    }
    case -10000:
    {
      result = "PortAudio not initialized";
      break;
    }
    case -9999:
    {
      result = "Unanticipated host error";
      break;
    }
    case -9998:
    {
      result = "Invalid number of channels";
      break;
    }
    case -9997:
    {
      result = "Invalid sample rate";
      break;
    }
    case -9996:
    {
      result = "Invalid device";
      break;
    }
    case -9995:
    {
      result = "Invalid flag";
      break;
    }
    case -9994:
    {
      result = "Sample format not supported";
      break;
    }
    case -9993:
    {
      result = "Illegal combination of I/O devices";
      break;
    }
    case -9992:
    {
      result = "Insufficient memory";
      break;
    }
    case -9991:
    {
      result = "Buffer too big";
      break;
    }
    case -9990:
    {
      result = "Buffer too small";
      break;
    }
    case -9989:
    {
      result = "No callback routine specified";
      break;
    }
    case -9988:
    {
      result = "Invalid stream pointer";
      break;
    }
    case -9987:
    {
      result = "Wait timed out";
      break;
    }
    case -9986:
    {
      result = "Internal PortAudio error";
      break;
    }
    case -9985:
    {
      result = "Device unavailable";
      break;
    }
    case -9984:
    {
      result = "Incompatible host API specific stream info";
      break;
    }
    case -9983:
    {
      result = "Stream is stopped";
      break;
    }
    case -9982:
    {
      result = "Stream is not stopped";
      break;
    }
    case -9981:
    {
      result = "Input overflowed";
      break;
    }
    case -9980:
    {
      result = "Output underflowed";
      break;
    }
    case -9979:
    {
      result = "Host API not found";
      break;
    }
    case -9978:
    {
      result = "Invalid host API";
      break;
    }
    case -9977:
    {
      result = "Can't read from a callback stream";
      break;
    }
    case -9976:
    {
      result = "Can't write to a callback stream";
      break;
    }
    case -9975:
    {
      result = "Can't read from an output only stream";
      break;
    }
    case -9974:
    {
      result = "Can't write to an input only stream";
      break;
    }
    case -9973:
    {
      result = "Incompatible stream host API";
      break;
    }
    case -9972:
    {
      result = "Bad buffer pointer";
      break;
    }
    default:
      if(errorCode >= 1)
        result = "Invalid error code (value greater than zero)";

      else
        result = "Invalid error code";
  }
  return result;
}

// Pa_GetHostApiCount
// file src/common/pa_front.c line 512
signed int Pa_GetHostApiCount(void)
{
  signed int result;
  if(initializationCount_ == 0)
    result = -10000;

  else
    result = hostApisCount_;
  return result;
}

// Pa_GetHostApiInfo
// file src/common/pa_front.c line 562
const struct PaHostApiInfo * Pa_GetHostApiInfo(signed int hostApi)
{
  struct PaHostApiInfo *info;
  if(initializationCount_ == 0)
    info = (struct PaHostApiInfo *)(void *)0;

  else
    if(hostApi >= hostApisCount_ || !(hostApi >= 0))
      info = (struct PaHostApiInfo *)(void *)0;

    else
      info = &hostApis_[(signed long int)hostApi]->info;
  return info;
}

// Pa_GetLastHostErrorInfo
// file src/common/pa_front.c line 375
const struct PaHostErrorInfo * Pa_GetLastHostErrorInfo(void)
{
  return &lastHostErrorInfo_;
}

// Pa_GetSampleSize
// file src/common/pa_front.c line 1761
signed int Pa_GetSampleSize(unsigned long int format)
{
  signed int result;
  switch(format & ~((unsigned long int)0x80000000))
  {
    case (unsigned long int)0x00000020:

    case (unsigned long int)0x00000010:
    {
      result = 1;
      break;
    }
    case (unsigned long int)0x00000008:
    {
      result = 2;
      break;
    }
    case (unsigned long int)0x00000004:
    {
      result = 3;
      break;
    }
    case (unsigned long int)0x00000001:

    case (unsigned long int)0x00000002:
    {
      result = 4;
      break;
    }
    default:
      result = -9994;
  }
  return (signed int)result;
}

// Pa_GetStreamCpuLoad
// file src/common/pa_front.c line 1568
double Pa_GetStreamCpuLoad(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  double result;
  if(!(error == 0))
    result = 0.0;

  else
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->GetCpuLoad(stream);
  return result;
}

// Pa_GetStreamHostApiType
// file src/common/pa_front.c line 1734
enum PaHostApiTypeId Pa_GetStreamHostApiType(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  enum PaHostApiTypeId result;
  if(error == 0)
    result = ((struct PaUtilStreamRepresentation *)stream)->hostApiType;

  else
    result = (enum PaHostApiTypeId)error;
  return result;
}

// Pa_GetStreamInfo
// file src/common/pa_front.c line 1503
const struct PaStreamInfo * Pa_GetStreamInfo(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  const struct PaStreamInfo *result;
  if(!(error == 0))
    result = ((const struct PaStreamInfo *)NULL);

  else
    result = &((struct PaUtilStreamRepresentation *)stream)->streamInfo;
  return result;
}

// Pa_GetStreamReadAvailable
// file src/common/pa_front.c line 1677
signed long int Pa_GetStreamReadAvailable(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  signed long int result;
  if(!(error == 0))
    result = (signed long int)0;

  else
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->GetReadAvailable(stream);
  return result;
}

// Pa_GetStreamTime
// file src/common/pa_front.c line 1539
double Pa_GetStreamTime(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  double result;
  if(!(error == 0))
    result = (double)0;

  else
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->GetTime(stream);
  return result;
}

// Pa_GetStreamWriteAvailable
// file src/common/pa_front.c line 1706
signed long int Pa_GetStreamWriteAvailable(void *stream)
{
  signed int error;
  error=PaUtil_ValidateStreamPointer(stream);
  signed long int result;
  if(!(error == 0))
    result = (signed long int)0;

  else
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->GetWriteAvailable(stream);
  return result;
}

// Pa_GetVersion
// file src/common/pa_front.c line 86
signed int Pa_GetVersion(void)
{
  return 1899;
}

// Pa_GetVersionText
// file src/common/pa_front.c line 92
const char * Pa_GetVersionText(void)
{
  return "PortAudio V19-devel (built Jan 26 2016 02:58:42)";
}

// Pa_HostApiDeviceIndexToDeviceIndex
// file src/common/pa_front.c line 603
signed int Pa_HostApiDeviceIndexToDeviceIndex(signed int hostApi, signed int hostApiDeviceIndex)
{
  signed int result;
  _Bool tmp_if_expr$1;
  if(initializationCount_ == 0)
    result = -10000;

  else
    if(hostApi >= hostApisCount_ || !(hostApi >= 0))
      result = -9978;

    else
    {
      if(!(hostApiDeviceIndex >= 0))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = hostApiDeviceIndex >= hostApis_[(signed long int)hostApi]->info.deviceCount ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        result = -9996;

      else
        result = (signed int)(hostApis_[(signed long int)hostApi]->privatePaFrontInfo.baseDeviceIndex + (unsigned long int)hostApiDeviceIndex);
    }
  return result;
}

// Pa_HostApiTypeIdToHostApiIndex
// file src/common/pa_front.c line 429
signed int Pa_HostApiTypeIdToHostApiIndex(enum PaHostApiTypeId type)
{
  signed int result;
  signed int i;
  if(initializationCount_ == 0)
    result = -10000;

  else
  {
    result = -9979;
    i = 0;
    for( ; !(i >= hostApisCount_); i = i + 1)
      if(hostApis_[(signed long int)i]->info.type == type)
      {
        result = i;
        break;
      }

  }
  return result;
}

// Pa_Initialize
// file ./include/portaudio.h line 132
signed int Pa_Initialize(void)
{
  signed int result;
  if(!(initializationCount_ == 0))
  {
    initializationCount_ = initializationCount_ + 1;
    result = 0;
  }

  else
  {
    /* assertion "PortAudio: type sizes are not correct in pa_types.h" && sizeof( PaUint16 ) == 2 */
    assert((_Bool)"PortAudio: type sizes are not correct in pa_types.h" && sizeof(unsigned short int) /*2ul*/  == (unsigned long int)2);
    /* assertion "PortAudio: type sizes are not correct in pa_types.h" && sizeof( PaInt16 ) == 2 */
    assert((_Bool)"PortAudio: type sizes are not correct in pa_types.h" && sizeof(signed short int) /*2ul*/  == (unsigned long int)2);
    /* assertion "PortAudio: type sizes are not correct in pa_types.h" && sizeof( PaUint32 ) == 4 */
    assert((_Bool)"PortAudio: type sizes are not correct in pa_types.h" && sizeof(unsigned int) /*4ul*/  == (unsigned long int)4);
    /* assertion "PortAudio: type sizes are not correct in pa_types.h" && sizeof( PaInt32 ) == 4 */
    assert((_Bool)"PortAudio: type sizes are not correct in pa_types.h" && sizeof(signed int) /*4ul*/  == (unsigned long int)4);
    const signed long int nativeOne = (const signed long int)1;
    /* assertion "PortAudio: compile time and runtime endianness don't match" && (((char *)&nativeOne)[0]) == 1 */
    assert((signed int)((char *)&nativeOne)[(signed long int)0] == 1 ? (_Bool)1 : (_Bool)0);
    PaUtil_InitializeClock();
    result=InitializeHostApis();
    if(result == 0)
      initializationCount_ = initializationCount_ + 1;

  }
  return result;
}

// Pa_IsFormatSupported
// file src/common/pa_front.c line 993
signed int Pa_IsFormatSupported(const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate)
{
  signed int result;
  struct PaUtilHostApiRepresentation *hostApi = ((struct PaUtilHostApiRepresentation *)NULL);
  signed int hostApiInputDevice = (signed int)-1;
  signed int hostApiOutputDevice = (signed int)-1;
  struct PaStreamParameters hostApiInputParameters;
  struct PaStreamParameters hostApiOutputParameters;
  struct PaStreamParameters *hostApiInputParametersPtr;
  struct PaStreamParameters *hostApiOutputParametersPtr;
  if(initializationCount_ == 0)
  {
    result = -10000;
    return result;
  }

  else
  {
    result=ValidateOpenStreamParameters(inputParameters, outputParameters, sampleRate, (unsigned long int)0, (unsigned long int)0, ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL), &hostApi, &hostApiInputDevice, &hostApiOutputDevice);
    if(!(result == 0))
      return result;

    else
    {
      if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
      {
        hostApiInputParameters.device = hostApiInputDevice;
        hostApiInputParameters.channelCount = inputParameters->channelCount;
        hostApiInputParameters.sampleFormat = inputParameters->sampleFormat;
        hostApiInputParameters.suggestedLatency = inputParameters->suggestedLatency;
        hostApiInputParameters.hostApiSpecificStreamInfo = inputParameters->hostApiSpecificStreamInfo;
        hostApiInputParametersPtr = &hostApiInputParameters;
      }

      else
        hostApiInputParametersPtr = (struct PaStreamParameters *)(void *)0;
      if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
      {
        hostApiOutputParameters.device = hostApiOutputDevice;
        hostApiOutputParameters.channelCount = outputParameters->channelCount;
        hostApiOutputParameters.sampleFormat = outputParameters->sampleFormat;
        hostApiOutputParameters.suggestedLatency = outputParameters->suggestedLatency;
        hostApiOutputParameters.hostApiSpecificStreamInfo = outputParameters->hostApiSpecificStreamInfo;
        hostApiOutputParametersPtr = &hostApiOutputParameters;
      }

      else
        hostApiOutputParametersPtr = (struct PaStreamParameters *)(void *)0;
      result=hostApi->IsFormatSupported(hostApi, hostApiInputParametersPtr, hostApiOutputParametersPtr, sampleRate);
      return result;
    }
  }
}

// Pa_IsStreamActive
// file src/common/pa_front.c line 1486
signed int Pa_IsStreamActive(void *stream)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsActive(stream);

  return result;
}

// Pa_IsStreamStopped
// file src/common/pa_front.c line 1470
signed int Pa_IsStreamStopped(void *stream)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);

  return result;
}

// Pa_OpenDefaultStream
// file ./include/portaudio.h line 881
signed int Pa_OpenDefaultStream(void **stream, signed int inputChannelCount, signed int outputChannelCount, unsigned long int sampleFormat, double sampleRate, unsigned long int framesPerBuffer, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData)
{
  signed int result;
  struct PaStreamParameters hostApiInputParameters;
  struct PaStreamParameters hostApiOutputParameters;
  struct PaStreamParameters *hostApiInputParametersPtr;
  struct PaStreamParameters *hostApiOutputParametersPtr;
  if(inputChannelCount >= 1)
  {
    hostApiInputParameters.device=Pa_GetDefaultInputDevice();
    if(hostApiInputParameters.device == -1)
      return -9985;

    hostApiInputParameters.channelCount = inputChannelCount;
    hostApiInputParameters.sampleFormat = sampleFormat;
    const struct PaDeviceInfo *return_value_Pa_GetDeviceInfo$1;
    return_value_Pa_GetDeviceInfo$1=Pa_GetDeviceInfo(hostApiInputParameters.device);
    hostApiInputParameters.suggestedLatency = return_value_Pa_GetDeviceInfo$1->defaultHighInputLatency;
    hostApiInputParameters.hostApiSpecificStreamInfo = (void *)0;
    hostApiInputParametersPtr = &hostApiInputParameters;
  }

  else
    hostApiInputParametersPtr = (struct PaStreamParameters *)(void *)0;
  if(outputChannelCount >= 1)
  {
    hostApiOutputParameters.device=Pa_GetDefaultOutputDevice();
    if(hostApiOutputParameters.device == -1)
      return -9985;

    hostApiOutputParameters.channelCount = outputChannelCount;
    hostApiOutputParameters.sampleFormat = sampleFormat;
    const struct PaDeviceInfo *return_value_Pa_GetDeviceInfo$2;
    return_value_Pa_GetDeviceInfo$2=Pa_GetDeviceInfo(hostApiOutputParameters.device);
    hostApiOutputParameters.suggestedLatency = return_value_Pa_GetDeviceInfo$2->defaultHighOutputLatency;
    hostApiOutputParameters.hostApiSpecificStreamInfo = (void *)0;
    hostApiOutputParametersPtr = &hostApiOutputParameters;
  }

  else
    hostApiOutputParametersPtr = (struct PaStreamParameters *)(void *)0;
  result=Pa_OpenStream(stream, hostApiInputParametersPtr, hostApiOutputParametersPtr, sampleRate, framesPerBuffer, (unsigned long int)0, streamCallback, userData);
  return result;
}

// Pa_OpenStream
// file src/common/pa_front.c line 1097
signed int Pa_OpenStream(void **stream, const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), void *userData)
{
  signed int result;
  struct PaUtilHostApiRepresentation *hostApi = ((struct PaUtilHostApiRepresentation *)NULL);
  signed int hostApiInputDevice = (signed int)-1;
  signed int hostApiOutputDevice = (signed int)-1;
  struct PaStreamParameters hostApiInputParameters;
  struct PaStreamParameters hostApiOutputParameters;
  struct PaStreamParameters *hostApiInputParametersPtr;
  struct PaStreamParameters *hostApiOutputParametersPtr;
  if(initializationCount_ == 0)
  {
    result = -10000;
    return result;
  }

  else
    if(stream == ((void **)NULL))
    {
      result = -9988;
      return result;
    }

    else
    {
      result=ValidateOpenStreamParameters(inputParameters, outputParameters, sampleRate, framesPerBuffer, streamFlags, streamCallback, &hostApi, &hostApiInputDevice, &hostApiOutputDevice);
      if(!(result == 0))
        return result;

      else
      {
        if(!(inputParameters == ((const struct PaStreamParameters *)NULL)))
        {
          hostApiInputParameters.device = hostApiInputDevice;
          hostApiInputParameters.channelCount = inputParameters->channelCount;
          hostApiInputParameters.sampleFormat = inputParameters->sampleFormat;
          hostApiInputParameters.suggestedLatency = inputParameters->suggestedLatency;
          hostApiInputParameters.hostApiSpecificStreamInfo = inputParameters->hostApiSpecificStreamInfo;
          hostApiInputParametersPtr = &hostApiInputParameters;
        }

        else
          hostApiInputParametersPtr = (struct PaStreamParameters *)(void *)0;
        if(!(outputParameters == ((const struct PaStreamParameters *)NULL)))
        {
          hostApiOutputParameters.device = hostApiOutputDevice;
          hostApiOutputParameters.channelCount = outputParameters->channelCount;
          hostApiOutputParameters.sampleFormat = outputParameters->sampleFormat;
          hostApiOutputParameters.suggestedLatency = outputParameters->suggestedLatency;
          hostApiOutputParameters.hostApiSpecificStreamInfo = outputParameters->hostApiSpecificStreamInfo;
          hostApiOutputParametersPtr = &hostApiOutputParameters;
        }

        else
          hostApiOutputParametersPtr = (struct PaStreamParameters *)(void *)0;
        result=hostApi->OpenStream(hostApi, stream, hostApiInputParametersPtr, hostApiOutputParametersPtr, sampleRate, framesPerBuffer, streamFlags, streamCallback, userData);
        if(result == 0)
        {
          AddOpenStream(*stream);
          ((struct PaUtilStreamRepresentation *)*stream)->hostApiType = hostApi->info.type;
        }

        return result;
      }
    }
}

// Pa_ReadStream
// file src/common/pa_front.c line 1598
signed int Pa_ReadStream(void *stream, void *buffer, unsigned long int frames)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    if(frames == 0ul)
      result = 0;

    else
      if(buffer == NULL)
        result = -9972;

      else
      {
        result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
        if(result == 0)
          result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->Read(stream, buffer, frames);

        else
          if(result == 1)
            result = -9983;

      }
  }

  return result;
}

// Pa_SetStreamFinishedCallback
// file src/common/pa_front.c line 1363
signed int Pa_SetStreamFinishedCallback(void *stream, void (*streamFinishedCallback)(void *))
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
    if(result == 0)
      result = -9982;

    if(result == 1)
    {
      ((struct PaUtilStreamRepresentation *)stream)->streamFinishedCallback = streamFinishedCallback;
      result = 0;
    }

  }

  return result;
}

// Pa_Sleep
// file ./include/portaudio.h line 1176
void Pa_Sleep(signed long int msec)
{
  struct timespec req = { .tv_sec=(signed long int)0, .tv_nsec=0l };
  struct timespec rem = { .tv_sec=(signed long int)0, .tv_nsec=0l };
  double time = (double)msec / 1.e3;
  req.tv_sec = (signed long int)time;
  /* assertion time - req.tv_sec < 1.0 */
  assert(time - (double)req.tv_sec < 1.0);
  req.tv_nsec = (signed long int)((time - (double)req.tv_sec) * 1.e9);
  nanosleep(&req, &rem);
}

// Pa_StartStream
// file ./include/portaudio.h line 937
signed int Pa_StartStream(void *stream)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
    if(result == 0)
      result = -9982;

    else
      if(result == 1)
        result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->Start(stream);

  }

  return result;
}

// Pa_StopStream
// file ./include/portaudio.h line 943
signed int Pa_StopStream(void *stream)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
    if(result == 0)
      result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->Stop(stream);

    else
      if(result == 1)
        result = -9983;

  }

  return result;
}

// Pa_Terminate
// file ./include/portaudio.h line 151
signed int Pa_Terminate(void)
{
  signed int result;
  if(!(initializationCount_ == 0))
  {
    initializationCount_ = initializationCount_ - 1;
    if(initializationCount_ == 0)
    {
      CloseOpenStreams();
      TerminateHostApis();
    }

    result = 0;
  }

  else
    result = -10000;
  return result;
}

// Pa_WriteStream
// file src/common/pa_front.c line 1638
signed int Pa_WriteStream(void *stream, const void *buffer, unsigned long int frames)
{
  signed int result;
  result=PaUtil_ValidateStreamPointer(stream);
  if(result == 0)
  {
    if(frames == 0ul)
      result = 0;

    else
      if(buffer == NULL)
        result = -9972;

      else
      {
        result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->IsStopped(stream);
        if(result == 0)
          result=((struct PaUtilStreamRepresentation *)stream)->streamInterface->Write(stream, buffer, frames);

        else
          if(result == 1)
            result = -9983;

      }
  }

  return result;
}

// QueryDevice
// file src/hostapi/oss/pa_unix_oss.c line 457
static signed int QueryDevice(char *deviceName, struct anonymous$1 *ossApi, struct PaDeviceInfo **deviceInfo)
{
  signed int result = 0;
  double sampleRate = -1.;
  signed int maxInputChannels;
  signed int maxOutputChannels;
  double defaultLowInputLatency;
  double defaultLowOutputLatency;
  double defaultHighInputLatency;
  double defaultHighOutputLatency;
  signed int tmpRes = 0;
  signed int busy = 0;
  *deviceInfo = (struct PaDeviceInfo *)(void *)0;
  tmpRes=QueryDirection(deviceName, (enum anonymous$4)StreamMode_In, &sampleRate, &maxInputChannels, &defaultLowInputLatency, &defaultHighInputLatency);
  if(!(tmpRes == 0))
    busy = busy + 1;

  tmpRes=QueryDirection(deviceName, (enum anonymous$4)StreamMode_Out, &sampleRate, &maxOutputChannels, &defaultLowOutputLatency, &defaultHighOutputLatency);
  if(!(tmpRes == 0))
    busy = busy + 1;

  /* assertion 0 <= busy && busy <= 2 */
  assert(0 <= busy && busy <= 2);
  if(busy == 2)
    result = -9985;

  else
  {
    do
    {
      void *return_value_PaUtil_GroupAllocateMemory$1;
      return_value_PaUtil_GroupAllocateMemory$1=PaUtil_GroupAllocateMemory(ossApi->allocations, (signed long int)sizeof(struct PaDeviceInfo) /*72ul*/ );
      *deviceInfo = (struct PaDeviceInfo *)return_value_PaUtil_GroupAllocateMemory$1;
      if(*deviceInfo == ((struct PaDeviceInfo *)NULL))
      {
        PaUtil_DebugPrint("Expression '*deviceInfo = PaUtil_GroupAllocateMemory( ossApi->allocations, sizeof (PaDeviceInfo) )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 505\n");
        result = -9992;
        goto error;
      }

    }
    while((_Bool)0);
    do
    {
      paUtilErr_$link1=PaUtil_InitializeDeviceInfo(*deviceInfo, deviceName, ossApi->hostApiIndex, maxInputChannels, maxOutputChannels, defaultLowInputLatency, defaultLowOutputLatency, defaultHighInputLatency, defaultHighOutputLatency, sampleRate, ossApi->allocations);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUtil_InitializeDeviceInfo( *deviceInfo, deviceName, ossApi->hostApiIndex, maxInputChannels, maxOutputChannels, defaultLowInputLatency, defaultLowOutputLatency, defaultHighInputLatency, defaultHighOutputLatency, sampleRate, ossApi->allocations )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 508\n");
        result = paUtilErr_$link1;
        break;
      }

    }
    while((_Bool)0);
  }

error:
  ;
  return result;
}

// QueryDirection
// file src/hostapi/oss/pa_unix_oss.c line 328
static signed int QueryDirection(const char *deviceName, enum anonymous$4 mode, double *defaultSampleRate, signed int *maxChannelCount, double *defaultLowLatency, double *defaultHighLatency)
{
  signed int result = 0;
  signed int numChannels;
  signed int maxNumChannels;
  signed int busy = 0;
  signed int devHandle = -1;
  signed int sr;
  *maxChannelCount = 0;
  signed int temp;
  signed int frgmt;
  unsigned long int fragFrames;
  devHandle=open(deviceName, ((signed int)mode == StreamMode_In ? 00 : 01) | 04000);
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  if(!(devHandle >= 0))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    if(*return_value___errno_location$2 == 16)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      return_value___errno_location$3=__errno_location();
      tmp_if_expr$4 = *return_value___errno_location$3 == 11 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr$4)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
    }

    return -9985;
  }

  maxNumChannels = 0;
  numChannels = 1;
  _Bool tmp_if_expr$7;
  signed int *return_value___errno_location$6;
  for( ; !(numChannels >= 17); numChannels = numChannels + 1)
  {
    temp = numChannels;
    signed int return_value_ioctl$8;
    return_value_ioctl$8=ioctl(devHandle, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(6 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &temp);
    if(!(return_value_ioctl$8 >= 0))
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      if(*return_value___errno_location$5 == 11)
        tmp_if_expr$7 = (_Bool)1;

      else
      {
        return_value___errno_location$6=__errno_location();
        tmp_if_expr$7 = 16 == *return_value___errno_location$6 ? (_Bool)1 : (_Bool)0;
      }
      busy = (signed int)tmp_if_expr$7;
      if(maxNumChannels >= 2)
        break;

    }

    else
    {
      if(numChannels >= 3 && !(temp == numChannels))
        break;

      if(!(maxNumChannels >= temp))
        maxNumChannels = temp;

    }
  }
  unsigned long int return_value_pthread_self$12;
  unsigned long int return_value_pthread_self$15;
  signed int return_value_CalcHigherLogTwo$16;
  unsigned long int return_value_pthread_self$19;
  double return_value_pow$20;
  if(maxNumChannels == 0 && !(busy == 0))
    result = -9985;

  else
  {
    if(!(maxNumChannels >= 1))
    {
      signed int stereo = 1;
      signed int return_value_ioctl$9;
      return_value_ioctl$9=ioctl(devHandle, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(3 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &stereo);
      if(!(return_value_ioctl$9 >= 0))
        maxNumChannels = 1;

      else
        maxNumChannels = stereo != 0 ? 2 : 1;
    }

    numChannels = maxNumChannels < 2 ? maxNumChannels : 2;
    do
    {
      sysErr_=ioctl(devHandle, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(6 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &numChannels);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$12=pthread_self();
        if(return_value_pthread_self$12 == mainThread_$link1)
        {
          signed int *return_value___errno_location$10;
          return_value___errno_location$10=__errno_location();
          char *return_value_strerror$11;
          return_value_strerror$11=strerror(*return_value___errno_location$10);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$11);
        }

        PaUtil_DebugPrint("Expression 'ioctl( devHandle, SNDCTL_DSP_CHANNELS, &numChannels )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 414\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    if(*defaultSampleRate < 0.000000)
    {
      sr = 44100;
      do
      {
        sysErr_=ioctl(devHandle, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(2 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &sr);
        if(!(sysErr_ >= 0))
        {
          return_value_pthread_self$15=pthread_self();
          if(return_value_pthread_self$15 == mainThread_$link1)
          {
            signed int *return_value___errno_location$13;
            return_value___errno_location$13=__errno_location();
            char *return_value_strerror$14;
            return_value_strerror$14=strerror(*return_value___errno_location$13);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$14);
          }

          PaUtil_DebugPrint("Expression 'ioctl( devHandle, SNDCTL_DSP_SPEED, &sr )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 421\n");
          result = -9999;
          goto error;
        }

      }
      while((_Bool)0);
      *defaultSampleRate = (double)sr;
    }

    *maxChannelCount = maxNumChannels;
    fragFrames = (unsigned long int)128;
    return_value_CalcHigherLogTwo$16=CalcHigherLogTwo((signed int)(fragFrames * (unsigned long int)numChannels * (unsigned long int)2));
    frgmt = (4 << 16) + (return_value_CalcHigherLogTwo$16 & 0xffff);
    do
    {
      sysErr_=ioctl(devHandle, (unsigned long int)((2U | 1U) << 0 + 8 + 8 + 14 | (unsigned int)(80 << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &frgmt);
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$19=pthread_self();
        if(return_value_pthread_self$19 == mainThread_$link1)
        {
          signed int *return_value___errno_location$17;
          return_value___errno_location$17=__errno_location();
          char *return_value_strerror$18;
          return_value_strerror$18=strerror(*return_value___errno_location$17);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$18);
        }

        PaUtil_DebugPrint("Expression 'ioctl( devHandle, SNDCTL_DSP_SETFRAGMENT, &frgmt )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 432\n");
        result = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    return_value_pow$20=pow((double)2, (double)(frgmt & 0xffff));
    fragFrames = (unsigned long int)(return_value_pow$20 / (double)(numChannels * 2));
    *defaultLowLatency = (double)((unsigned long int)((frgmt >> 16) - 1) * fragFrames) / *defaultSampleRate;
    temp = fragFrames < (unsigned long int)256 ? 4 : (fragFrames < (unsigned long int)512 ? 2 : 1);
    *defaultHighLatency = (double)temp * *defaultLowLatency;
  }

error:
  ;
  if(devHandle >= 0)
    close(devHandle);

  return result;
}

// ReadStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 757
static signed int ReadStream(void *s, void *buffer, unsigned long int frames)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)buffer;
  (void)frames;
  (void)stream;
  return 0;
}

// ReadStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4365
static signed int ReadStream$link1(void *s$link1, void *buffer$link1, unsigned long int frames$link1)
{
  signed int result = 0;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  unsigned long int framesGot;
  unsigned long int framesAvail;
  void *userBuffer;
  struct _snd_pcm *save = stream$link1->playback.pcm;
  /* assertion stream */
  assert(stream$link1 != ((struct PaAlsaStream *)NULL));
  do
    if(stream$link1->capture.pcm == ((struct _snd_pcm *)NULL))
    {
      PaUtil_DebugPrint("Expression 'stream->capture.pcm' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4375\n");
      result = -9975;
      goto error;
    }

  while((_Bool)0);
  stream$link1->playback.pcm = (struct _snd_pcm *)(void *)0;
  if(stream$link1->overrun > 0.)
  {
    result = -9981;
    stream$link1->overrun = 0.0;
  }

  if(!(stream$link1->capture.userInterleaved == 0))
    userBuffer = buffer$link1;

  else
  {
    userBuffer = (void *)stream$link1->capture.userBuffers;
    memcpy(userBuffer, buffer$link1, sizeof(void *) /*8ul*/  * (unsigned long int)stream$link1->capture.numUserChannels);
  }
  enum _snd_pcm_state return_value_1;
  return_value_1=alsa_snd_pcm_state(stream$link1->capture.pcm);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if((signed int)return_value_1 == SND_PCM_STATE_PREPARED)
  {
    signed int __pa_unsure_error_id;
    __pa_unsure_error_id=alsa_snd_pcm_start(stream$link1->capture.pcm);
    if(!(__pa_unsure_error_id >= 0))
    {
      return_value_pthread_self$1=pthread_self();
      return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
      if(!(return_value_pthread_equal$2 == 0))
      {
        const char *return_value;
        return_value=alsa_snd_strerror(__pa_unsure_error_id);
        PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
      }

      PaUtil_DebugPrint("Expression 'alsa_snd_pcm_start( stream->capture.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4400\n");
      result = -9999;
    }

  }

  if(frames$link1 >= 1ul)
  {
    signed int xrun = 0;
    paUtilErr_=PaAlsaStream_WaitForFrames(stream$link1, &framesAvail, &xrun);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStream_WaitForFrames( stream, &framesAvail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4406\n");
      result = paUtilErr_;
    }

    framesGot = framesAvail < frames$link1 ? framesAvail : frames$link1;
    paUtilErr_=PaAlsaStream_SetUpBuffers(stream$link1, &framesGot, &xrun);
    if(!(paUtilErr_ >= 0))
    {
      PaUtil_DebugPrint("Expression 'PaAlsaStream_SetUpBuffers( stream, &framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4409\n");
      result = paUtilErr_;
    }

    if(framesGot >= 1ul)
    {
      framesGot=PaUtil_CopyInput(&stream$link1->bufferProcessor, &userBuffer, framesGot);
      paUtilErr_=PaAlsaStream_EndProcessing(stream$link1, framesGot, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_EndProcessing( stream, framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4413\n");
        result = paUtilErr_;
      }

      frames$link1 = frames$link1 - framesGot;
    }

  }


end:
  ;
  stream$link1->playback.pcm = save;
  return result;

error:
  ;
  goto end;
}

// ReadStream$link2
// file src/hostapi/oss/pa_unix_oss.c line 1927
static signed int ReadStream$link2(void *s$link2, void *buffer$link2, unsigned long int frames$link2)
{
  signed int result$link1 = 0;
  struct PaOssStream *stream$link2 = (struct PaOssStream *)s$link2;
  signed int bytesRequested;
  signed int bytesRead;
  unsigned long int framesRequested;
  void *userBuffer$link1;
  if(!(stream$link2->bufferProcessor.userInputIsInterleaved == 0))
    userBuffer$link1 = buffer$link2;

  else
  {
    userBuffer$link1 = (void *)stream$link2->capture->userBuffers;
    memcpy((void *)userBuffer$link1, buffer$link2, sizeof(void *) /*8ul*/  * (unsigned long int)stream$link2->capture->userChannelCount);
  }
  unsigned long int tmp_if_expr$1;
  unsigned long int return_value_pthread_self$5;
  while(!(frames$link2 == 0ul))
  {
    if(!(frames$link2 >= stream$link2->capture->hostFrames))
      tmp_if_expr$1 = frames$link2;

    else
      tmp_if_expr$1 = stream$link2->capture->hostFrames;
    framesRequested = tmp_if_expr$1;
    unsigned int return_value_PaOssStreamComponent_FrameSize$2;
    return_value_PaOssStreamComponent_FrameSize$2=PaOssStreamComponent_FrameSize(stream$link2->capture);
    bytesRequested = (signed int)(framesRequested * (unsigned long int)return_value_PaOssStreamComponent_FrameSize$2);
    do
    {
      signed long int return_value_read$6;
      return_value_read$6=read(stream$link2->capture->fd, stream$link2->capture->buffer, (unsigned long int)bytesRequested);
      bytesRead = (signed int)return_value_read$6;
      sysErr_ = bytesRead;
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$5=pthread_self();
        if(return_value_pthread_self$5 == mainThread_$link1)
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          char *return_value_strerror$4;
          return_value_strerror$4=strerror(*return_value___errno_location$3);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$4);
        }

        PaUtil_DebugPrint("Expression '(bytesRead = read( stream->capture->fd, stream->capture->buffer, bytesRequested ))' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1953\n");
        result$link1 = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    if(!(bytesRequested == bytesRead))
      return -9999;

    PaUtil_SetInputFrameCount(&stream$link2->bufferProcessor, stream$link2->capture->hostFrames);
    PaUtil_SetInterleavedInputChannels(&stream$link2->bufferProcessor, (unsigned int)0, stream$link2->capture->buffer, (unsigned int)stream$link2->capture->hostChannelCount);
    PaUtil_CopyInput(&stream$link2->bufferProcessor, &userBuffer$link1, framesRequested);
    frames$link2 = frames$link2 - framesRequested;
  }

error:
  ;
  return result$link1;
}

// RealProcess
// file src/hostapi/jack/pa_jack.c line 1343
static signed int RealProcess(struct PaJackStream *stream, unsigned int frames)
{
  signed int result = 0;
  struct PaStreamCallbackTimeInfo timeInfo = { .inputBufferAdcTime=(double)0, .currentTime=(double)0, .outputBufferDacTime=(double)0 };
  signed int chn;
  signed int framesProcessed;
  double sr;
  unsigned int return_value_jack_get_sample_rate$1;
  return_value_jack_get_sample_rate$1=jack_get_sample_rate(stream->jack_client);
  sr = (const double)return_value_jack_get_sample_rate$1;
  unsigned long int cbFlags = (unsigned long int)0;
  signed int return_value_PaUtil_IsBufferProcessorOutputEmpty$2;
  unsigned int return_value_jack_frame_time$3;
  unsigned int return_value_jack_port_get_latency$4;
  unsigned int return_value_jack_port_get_latency$5;
  unsigned long int return_value_PaUtil_EndBufferProcessing$8;
  if(!(stream->callbackResult == 0))
  {
    return_value_PaUtil_IsBufferProcessorOutputEmpty$2=PaUtil_IsBufferProcessorOutputEmpty(&stream->bufferProcessor);
    if(return_value_PaUtil_IsBufferProcessorOutputEmpty$2 == 0)
      goto __CPROVER_DUMP_L2;

    stream->is_active = 0;
    if(!(stream->streamRepresentation.streamFinishedCallback == ((void (*)(void *))NULL)))
      stream->streamRepresentation.streamFinishedCallback(stream->streamRepresentation.userData);

  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    return_value_jack_frame_time$3=jack_frame_time(stream->jack_client);
    timeInfo.currentTime = (double)(return_value_jack_frame_time$3 - stream->t0) / sr;
    if(stream->num_incoming_connections >= 1)
    {
      return_value_jack_port_get_latency$4=jack_port_get_latency(stream->remote_output_ports[(signed long int)0]);
      timeInfo.inputBufferAdcTime = timeInfo.currentTime - (double)return_value_jack_port_get_latency$4 / sr;
    }

    if(stream->num_outgoing_connections >= 1)
    {
      return_value_jack_port_get_latency$5=jack_port_get_latency(stream->remote_input_ports[(signed long int)0]);
      timeInfo.outputBufferDacTime = timeInfo.currentTime + (double)return_value_jack_port_get_latency$5 / sr;
    }

    PaUtil_BeginCpuLoadMeasurement(&stream->cpuLoadMeasurer);
    if(!(stream->xrun == 0))
    {
      cbFlags = (unsigned long int)0x00000004 | (unsigned long int)0x00000002;
      stream->xrun = 0;
    }

    PaUtil_BeginBufferProcessing(&stream->bufferProcessor, &timeInfo, cbFlags);
    if(stream->num_incoming_connections >= 1)
      PaUtil_SetInputFrameCount(&stream->bufferProcessor, (unsigned long int)frames);

    if(stream->num_outgoing_connections >= 1)
      PaUtil_SetOutputFrameCount(&stream->bufferProcessor, (unsigned long int)frames);

    chn = 0;
    for( ; !(chn >= stream->num_incoming_connections); chn = chn + 1)
    {
      float *RealProcess$$1$$3$$1$$channel_buf;
      void *return_value_jack_port_get_buffer$6;
      return_value_jack_port_get_buffer$6=jack_port_get_buffer(stream->local_input_ports[(signed long int)chn], frames);
      RealProcess$$1$$3$$1$$channel_buf = (float *)return_value_jack_port_get_buffer$6;
      PaUtil_SetNonInterleavedInputChannel(&stream->bufferProcessor, (unsigned int)chn, (void *)RealProcess$$1$$3$$1$$channel_buf);
    }
    chn = 0;
    for( ; !(chn >= stream->num_outgoing_connections); chn = chn + 1)
    {
      float *channel_buf;
      void *return_value_jack_port_get_buffer$7;
      return_value_jack_port_get_buffer$7=jack_port_get_buffer(stream->local_output_ports[(signed long int)chn], frames);
      channel_buf = (float *)return_value_jack_port_get_buffer$7;
      PaUtil_SetNonInterleavedOutputChannel(&stream->bufferProcessor, (unsigned int)chn, (void *)channel_buf);
    }
    return_value_PaUtil_EndBufferProcessing$8=PaUtil_EndBufferProcessing(&stream->bufferProcessor, &stream->callbackResult);
    framesProcessed = (signed int)return_value_PaUtil_EndBufferProcessing$8;
    /* assertion framesProcessed == frames */
    assert((unsigned int)framesProcessed == frames);
    PaUtil_EndCpuLoadMeasurement(&stream->cpuLoadMeasurer, (unsigned long int)framesProcessed);
  }

end:
  ;
  return result;
}

// RealStop
// file src/hostapi/alsa/pa_linux_alsa.c line 3086
static signed int RealStop(struct PaAlsaStream *stream, signed int abort)
{
  signed int result = 0;
  if(!(stream->callbackMode == 0))
  {
    signed int threadRes;
    stream->callbackAbort = abort;
    do
    {
      paUtilErr_=PaUnixThread_Terminate(&stream->thread, (signed int)!(abort != 0), &threadRes);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixThread_Terminate( &stream->thread, !abort, &threadRes )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3102\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    stream->callback_finished = 0;
  }

  else
    do
    {
      paUtilErr_=AlsaStop(stream, abort);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'AlsaStop( stream, abort )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3116\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
  stream->isActive = 0;

end:
  ;
  return result;

error:
  ;
  goto end;
}

// RealStop$link1
// file src/hostapi/jack/pa_jack.c line 1656
static signed int RealStop$link1(struct PaJackStream *stream$link1, signed int abort$link1)
{
  signed int result$link1 = 0;
  signed int i;
  if(!(stream$link1->isBlockingStream == 0))
    BlockingWaitEmpty((void *)stream$link1);

  do
  {
    signed int RealStop$$1$$1$$err;
    RealStop$$1$$1$$err=pthread_mutex_lock(&stream$link1->hostApi->mtx);
    /* assertion err == 0 */
    assert(RealStop$$1$$1$$err == 0);
  }
  while((_Bool)0);
  if(!(abort$link1 == 0))
    stream$link1->doAbort = 1;

  else
    stream$link1->doStop = 1;
  result$link1=WaitCondition(stream$link1->hostApi);
  do
  {
    signed int RealStop$$1$$2$$err;
    RealStop$$1$$2$$err=pthread_mutex_unlock(&stream$link1->hostApi->mtx);
    /* assertion err == 0 */
    assert(RealStop$$1$$2$$err == 0);
  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int paErr = result$link1;
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *err = jackErr_;
          if(err == ((const char *)NULL))
            err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
        }

      }

      PaUtil_DebugPrint("Expression 'result' failed in 'src/hostapi/jack/pa_jack.c', line: 1673\n");
      result$link1 = paErr;
      goto error;
    }

  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$2;
  do
    if(!(stream$link1->is_active == 0))
    {
      PaUtil_DebugPrint("Expression '!stream->is_active' failed in 'src/hostapi/jack/pa_jack.c', line: 1675\n");
      result$link1 = -9986;
      goto error;
    }

  while((_Bool)0);
  unsigned long int return_value_pthread_self$3;
  signed int return_value_jack_port_connected$8;
  signed int return_value_jack_port_disconnect$7;
  unsigned long int return_value_pthread_self$6;
  do
  {

  error:
    ;
    stream$link1->is_running = 0;
    if(!(stream$link1->hostApi->jackIsDown == 0))
      goto __CPROVER_DUMP_L27;

    i = 0;
    for( ; !(i >= stream$link1->num_incoming_connections); i = i + 1)
    {
      signed int return_value_jack_port_connected$5;
      return_value_jack_port_connected$5=jack_port_connected(stream$link1->local_input_ports[(signed long int)i]);
      if(!(return_value_jack_port_connected$5 == 0))
        do
        {
          signed int return_value_jack_port_disconnect$4;
          return_value_jack_port_disconnect$4=jack_port_disconnect(stream$link1->jack_client, stream$link1->local_input_ports[(signed long int)i]);
          if(!(return_value_jack_port_disconnect$4 == 0))
          {
            return_value_pthread_self$3=pthread_self();
            if(return_value_pthread_self$3 == mainThread_)
            {
              const char *RealStop$$1$$5$$1$$1$$1$$1$$1$$1$$err = jackErr_;
              if(RealStop$$1$$5$$1$$1$$1$$1$$1$$1$$err == ((const char *)NULL))
                RealStop$$1$$5$$1$$1$$1$$1$$1$$1$$err = "unknown error";

              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, RealStop$$1$$5$$1$$1$$1$$1$$1$$1$$err);
            }

            PaUtil_DebugPrint("Expression '!jack_port_disconnect( stream->jack_client, stream->local_input_ports[i] )' failed in 'src/hostapi/jack/pa_jack.c', line: 1691\n");
            result$link1 = -9999;
            goto error;
          }

        }
        while((_Bool)0);

    }
    i = 0;

  __CPROVER_DUMP_L21:
    ;
    if(i >= stream$link1->num_outgoing_connections)
      goto __CPROVER_DUMP_L27;

    return_value_jack_port_connected$8=jack_port_connected(stream$link1->local_output_ports[(signed long int)i]);
    if(return_value_jack_port_connected$8 == 0)
      goto __CPROVER_DUMP_L26;


  __CPROVER_DUMP_L22:
    ;
    return_value_jack_port_disconnect$7=jack_port_disconnect(stream$link1->jack_client, stream$link1->local_output_ports[(signed long int)i]);
    if(return_value_jack_port_disconnect$7 == 0)
      break;

    return_value_pthread_self$6=pthread_self();
    if(return_value_pthread_self$6 == mainThread_)
    {
      const char *RealStop$$1$$5$$2$$1$$1$$1$$1$$1$$err = jackErr_;
      if(RealStop$$1$$5$$2$$1$$1$$1$$1$$1$$err == ((const char *)NULL))
        RealStop$$1$$5$$2$$1$$1$$1$$1$$1$$err = "unknown error";

      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, RealStop$$1$$5$$2$$1$$1$$1$$1$$1$$err);
    }

    PaUtil_DebugPrint("Expression '!jack_port_disconnect( stream->jack_client, stream->local_output_ports[i] )' failed in 'src/hostapi/jack/pa_jack.c', line: 1699\n");
    result$link1 = -9999;
  }
  while((_Bool)1);

__CPROVER_DUMP_L26:
  ;
  i = i + 1;
  goto __CPROVER_DUMP_L21;

__CPROVER_DUMP_L27:
  ;
  return result$link1;
}

// RealStop$link2
// file src/hostapi/oss/pa_unix_oss.c line 1822
static signed int RealStop$link2(struct PaOssStream *stream$link2, signed int abort$link2)
{
  signed int result$link2 = 0;
  if(!(stream$link2->callbackMode == 0))
  {
    if(!(abort$link2 == 0))
      stream$link2->callbackAbort = 1;

    else
      stream$link2->callbackStop = 1;
    do
    {
      paUtilErr_$link1=PaUtil_CancelThreading(&stream$link2->threading, (signed int)!(abort$link2 != 0), (signed int *)(void *)0);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUtil_CancelThreading( &stream->threading, !abort, NULL )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1833\n");
        result$link2 = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    stream$link2->callbackAbort = 0;
    stream$link2->callbackStop = stream$link2->callbackAbort;
  }

  else
    do
    {
      paUtilErr_$link1=PaOssStream_Stop(stream$link2, abort$link2);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStream_Stop( stream, abort )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1838\n");
        result$link2 = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
  stream$link2->isStopped = 1;

error:
  ;
  return result$link2;
}

// RemoveOpenStream
// file src/common/pa_front.c line 278
static void RemoveOpenStream(void *stream)
{
  struct PaUtilStreamRepresentation *previous = (struct PaUtilStreamRepresentation *)(void *)0;
  struct PaUtilStreamRepresentation *current = firstOpenStream_;
  while(!(current == ((struct PaUtilStreamRepresentation *)NULL)))
    if((void *)current == stream)
    {
      if(previous == ((struct PaUtilStreamRepresentation *)NULL))
        firstOpenStream_ = current->nextOpenStream;

      else
        previous->nextOpenStream = current->nextOpenStream;
      goto __CPROVER_DUMP_L7;
    }

    else
    {
      previous = current;
      current = current->nextOpenStream;
    }

__CPROVER_DUMP_L7:
  ;
}

// RemoveStream
// file src/hostapi/jack/pa_jack.c line 1046
static signed int RemoveStream(struct PaJackStream *stream)
{
  signed int result = 0;
  struct anonymous$21 *hostApi = stream->hostApi;
  do
  {
    signed int err;
    err=pthread_mutex_lock(&hostApi->mtx);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  if(hostApi->jackIsDown == 0)
  {
    hostApi->toRemove = stream;
    result=WaitCondition(stream->hostApi);
  }

  do
  {
    signed int RemoveStream$$1$$3$$err;
    RemoveStream$$1$$3$$err=pthread_mutex_unlock(&hostApi->mtx);
    /* assertion err == 0 */
    assert(RemoveStream$$1$$3$$err == 0);
  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$1;
  do
  {
    signed int paErr = result;
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$1=pthread_self();
        if(return_value_pthread_self$1 == mainThread_)
        {
          const char *RemoveStream$$1$$4$$1$$1$$err = jackErr_;
          if(RemoveStream$$1$$4$$1$$1$$err == ((const char *)NULL))
            RemoveStream$$1$$4$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, RemoveStream$$1$$4$$1$$1$$err);
        }

      }

      PaUtil_DebugPrint("Expression 'result' failed in 'src/hostapi/jack/pa_jack.c', line: 1060\n");
      result = paErr;
      break;
    }

  }
  while((_Bool)0);

error:
  ;
  return result;
}

// SampleFormatIsValid
// file src/common/pa_front.c line 751
static signed int SampleFormatIsValid(unsigned long int format)
{
  switch(format & ~((unsigned long int)0x80000000))
  {
    case (unsigned long int)0x00000001:
      return 1;
    case (unsigned long int)0x00000008:
      return 1;
    case (unsigned long int)0x00000002:
      return 1;
    case (unsigned long int)0x00000004:
      return 1;
    case (unsigned long int)0x00000010:
      return 1;
    case (unsigned long int)0x00000020:
      return 1;
    case (unsigned long int)0x00010000:
      return 1;
    default:
      return 0;
  }
}

// SetApproximateSampleRate
// file src/hostapi/alsa/pa_linux_alsa.c line 3191
static signed int SetApproximateSampleRate(struct _snd_pcm *pcm, struct _snd_pcm_hw_params *hwParams, double sampleRate)
{
  signed int result = 0;
  unsigned int reqRate;
  unsigned int setRate;
  unsigned int deviation;
  /* assertion pcm && hwParams */
  assert(pcm != ((struct _snd_pcm *)NULL) && hwParams != ((struct _snd_pcm_hw_params *)NULL));
  setRate = (unsigned int)sampleRate;
  reqRate = setRate;
  signed int __pa_unsure_error_id;
  __pa_unsure_error_id=alsa_snd_pcm_hw_params_set_rate_near(pcm, hwParams, &setRate, (signed int *)(void *)0);
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(!(__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$1=pthread_self();
    return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
    if(!(return_value_pthread_equal$2 == 0))
    {
      const char *return_value;
      return_value=alsa_snd_strerror(__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_rate_near( pcm, hwParams, &setRate, NULL )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3201\n");
    result = -9999;
  }

  signed int return_value_abs$3;
  return_value_abs$3=abs((signed int)(setRate - reqRate));
  deviation = (unsigned int)return_value_abs$3;
  if(deviation >= 1u && !(reqRate >= 100u * deviation))
    result = -9997;


end:
  ;
  return result;

error:
  ;
  unsigned int _min = (unsigned int)0;
  unsigned int _max = (unsigned int)0;
  signed int _dir = 0;
  signed int SetApproximateSampleRate$$1$$2$$1$$__pa_unsure_error_id;
  SetApproximateSampleRate$$1$$2$$1$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_rate_min(hwParams, &_min, &_dir);
  unsigned long int return_value_pthread_self$4;
  signed int return_value_pthread_equal$5;
  if(!(SetApproximateSampleRate$$1$$2$$1$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$4=pthread_self();
    return_value_pthread_equal$5=pthread_equal(return_value_pthread_self$4, paUnixMainThread);
    if(!(return_value_pthread_equal$5 == 0))
    {
      const char *return_value_1;
      return_value_1=alsa_snd_strerror(SetApproximateSampleRate$$1$$2$$1$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)SetApproximateSampleRate$$1$$2$$1$$__pa_unsure_error_id, return_value_1);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_rate_min( hwParams, &_min, &_dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3216\n");
    result = -9999;
  }

  signed int SetApproximateSampleRate$$1$$2$$2$$__pa_unsure_error_id;
  SetApproximateSampleRate$$1$$2$$2$$__pa_unsure_error_id=alsa_snd_pcm_hw_params_get_rate_max(hwParams, &_max, &_dir);
  unsigned long int return_value_pthread_self$6;
  signed int return_value_pthread_equal$7;
  if(!(SetApproximateSampleRate$$1$$2$$2$$__pa_unsure_error_id >= 0))
  {
    return_value_pthread_self$6=pthread_self();
    return_value_pthread_equal$7=pthread_equal(return_value_pthread_self$6, paUnixMainThread);
    if(!(return_value_pthread_equal$7 == 0))
    {
      const char *return_value_2;
      return_value_2=alsa_snd_strerror(SetApproximateSampleRate$$1$$2$$2$$__pa_unsure_error_id);
      PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)SetApproximateSampleRate$$1$$2$$2$$__pa_unsure_error_id, return_value_2);
    }

    PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_get_rate_max( hwParams, &_max, &_dir )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3217\n");
    result = -9999;
  }

}

// SetUpBuffers
// file src/hostapi/oss/pa_unix_oss.c line 1574
static signed int SetUpBuffers(struct PaOssStream *stream, unsigned long int framesAvail)
{
  signed int result = 0;
  if(!(stream->capture == ((struct anonymous$3 *)NULL)))
  {
    PaUtil_SetInterleavedInputChannels(&stream->bufferProcessor, (unsigned int)0, stream->capture->buffer, (unsigned int)stream->capture->hostChannelCount);
    PaUtil_SetInputFrameCount(&stream->bufferProcessor, framesAvail);
  }

  if(!(stream->playback == ((struct anonymous$3 *)NULL)))
  {
    PaUtil_SetInterleavedOutputChannels(&stream->bufferProcessor, (unsigned int)0, stream->playback->buffer, (unsigned int)stream->playback->hostChannelCount);
    PaUtil_SetOutputFrameCount(&stream->bufferProcessor, framesAvail);
  }

  return result;
}

// SilenceBuffer
// file src/hostapi/alsa/pa_linux_alsa.c line 2890
static void SilenceBuffer(struct PaAlsaStream *stream)
{
  const struct _snd_pcm_channel_area *areas;
  unsigned long int frames;
  signed long int return_value;
  return_value=alsa_snd_pcm_avail_update(stream->playback.pcm);
  frames = (unsigned long int)return_value;
  unsigned long int offset;
  alsa_snd_pcm_mmap_begin(stream->playback.pcm, &areas, &offset, &frames);
  alsa_snd_pcm_areas_silence(areas, offset, (unsigned int)stream->playback.numHostChannels, frames, stream->playback.nativeFormat);
  alsa_snd_pcm_mmap_commit(stream->playback.pcm, offset, frames);
}

// SkipCardDetailsInName
// file src/hostapi/alsa/pa_linux_alsa.c line 1083
static char * SkipCardDetailsInName(char *infoSkipName, char *cardRefName)
{
  char *lastSpacePosn = infoSkipName;
  _Bool tmp_if_expr$1;
  char *tmp_post$2;
  while(!(*cardRefName == 0))
  {
    while(!(*infoSkipName == 0))
    {
      if(*cardRefName == 0)
        break;

      if(!(*infoSkipName == *cardRefName))
        break;

      infoSkipName = infoSkipName + 1l;
      cardRefName = cardRefName + 1l;
      if((signed int)*infoSkipName == 32)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)*infoSkipName == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        lastSpacePosn = infoSkipName;

    }
    infoSkipName = lastSpacePosn;
    while(!(*cardRefName == 0))
    {
      tmp_post$2 = cardRefName;
      cardRefName = cardRefName + 1l;
      if((signed int)*tmp_post$2 == 32)
        break;

    }
  }
  _Bool tmp_if_expr$3;
  if((signed int)*infoSkipName == 0)
    return "-";

  else
  {
    for( ; !(*lastSpacePosn == 0); lastSpacePosn = lastSpacePosn + 1l)
      if(!((signed int)*lastSpacePosn == 32))
        break;

    if((signed int)*lastSpacePosn == 45)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (signed int)*lastSpacePosn == 58 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      if((signed int)lastSpacePosn[1l] == 32)
        lastSpacePosn = lastSpacePosn + (signed long int)2;

    }

    return lastSpacePosn;
  }
}

// StartStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 657
static signed int StartStream(void *s)
{
  signed int result = 0;
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  PaUtil_ResetBufferProcessor(&stream->bufferProcessor);
  (void)ExampleHostProcessingLoop;
  return result;
}

// StartStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 2984
static signed int StartStream$link1(void *s$link1)
{
  signed int result$link1 = 0;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  signed int streamStarted = 0;
  PaUtil_ResetBufferProcessor(&stream$link1->bufferProcessor);
  stream$link1->isActive = 1;
  if(!(stream$link1->callbackMode == 0))
    do
    {
      paUtilErr_=PaUnixThread_New(&stream$link1->thread, CallbackThreadFunc, (void *)stream$link1, 1., stream$link1->rtSched);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUnixThread_New( &stream->thread, &CallbackThreadFunc, stream, 1., stream->rtSched )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 2998\n");
        result$link1 = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);

  else
  {
    do
    {
      paUtilErr_=AlsaStart(stream$link1, 0);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'AlsaStart( stream, 0 )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 3002\n");
        result$link1 = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    streamStarted = 1;
  }

end:
  ;
  return result$link1;

error:
  ;
  if(!(streamStarted == 0))
    AbortStream$link1((void *)stream$link1);

  stream$link1->isActive = 0;
  goto end;
}

// StartStream$link2
// file src/hostapi/jack/pa_jack.c line 1593
static signed int StartStream$link2(void *s$link2)
{
  signed int result$link2 = 0;
  struct PaJackStream *stream$link2 = (struct PaJackStream *)s$link2;
  signed int i;
  PaUtil_ResetBufferProcessor(&stream$link2->bufferProcessor);
  unsigned long int return_value_pthread_self$3;
  if(stream$link2->num_incoming_connections >= 1)
  {
    i = 0;
    for( ; !(i >= stream$link2->num_incoming_connections); i = i + 1)
    {
      signed int r;
      const char *return_value_jack_port_name$1;
      return_value_jack_port_name$1=jack_port_name(stream$link2->remote_output_ports[(signed long int)i]);
      const char *return_value_jack_port_name$2;
      return_value_jack_port_name$2=jack_port_name(stream$link2->local_input_ports[(signed long int)i]);
      r=jack_connect(stream$link2->jack_client, return_value_jack_port_name$1, return_value_jack_port_name$2);
      do
        if(!(r == 0) && !(r == 17))
        {
          return_value_pthread_self$3=pthread_self();
          if(return_value_pthread_self$3 == mainThread_)
          {
            const char *err = jackErr_;
            if(err == ((const char *)NULL))
              err = "unknown error";

            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, err);
          }

          PaUtil_DebugPrint("Expression '0 == r || EEXIST == r' failed in 'src/hostapi/jack/pa_jack.c', line: 1611\n");
          result$link2 = -9999;
          goto error;
        }

      while((_Bool)0);
    }
  }

  unsigned long int return_value_pthread_self$6;
  if(stream$link2->num_outgoing_connections >= 1)
  {
    i = 0;
    for( ; !(i >= stream$link2->num_outgoing_connections); i = i + 1)
    {
      signed int StartStream$$1$$2$$1$$1$$r;
      const char *return_value_jack_port_name$4;
      return_value_jack_port_name$4=jack_port_name(stream$link2->local_output_ports[(signed long int)i]);
      const char *return_value_jack_port_name$5;
      return_value_jack_port_name$5=jack_port_name(stream$link2->remote_input_ports[(signed long int)i]);
      StartStream$$1$$2$$1$$1$$r=jack_connect(stream$link2->jack_client, return_value_jack_port_name$4, return_value_jack_port_name$5);
      do
        if(!(StartStream$$1$$2$$1$$1$$r == 0) && !(StartStream$$1$$2$$1$$1$$r == 17))
        {
          return_value_pthread_self$6=pthread_self();
          if(return_value_pthread_self$6 == mainThread_)
          {
            const char *StartStream$$1$$2$$1$$1$$1$$1$$1$$err = jackErr_;
            if(StartStream$$1$$2$$1$$1$$1$$1$$1$$err == ((const char *)NULL))
              StartStream$$1$$2$$1$$1$$1$$1$$1$$err = "unknown error";

            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, StartStream$$1$$2$$1$$1$$1$$1$$1$$err);
          }

          PaUtil_DebugPrint("Expression '0 == r || EEXIST == r' failed in 'src/hostapi/jack/pa_jack.c', line: 1621\n");
          result$link2 = -9999;
          goto error;
        }

      while((_Bool)0);
    }
  }

  stream$link2->xrun = 0;
  do
  {
    signed int StartStream$$1$$3$$err;
    StartStream$$1$$3$$err=pthread_mutex_lock(&stream$link2->hostApi->mtx);
    /* assertion err == 0 */
    assert(StartStream$$1$$3$$err == 0);
  }
  while((_Bool)0);
  stream$link2->doStart = 1;
  result$link2=WaitCondition(stream$link2->hostApi);
  if(!(result$link2 == 0))
  {
    stream$link2->doStart = 0;
    stream$link2->is_active = 0;
  }

  do
  {
    signed int StartStream$$1$$5$$err;
    StartStream$$1$$5$$err=pthread_mutex_unlock(&stream$link2->hostApi->mtx);
    /* assertion err == 0 */
    assert(StartStream$$1$$5$$err == 0);
  }
  while((_Bool)0);
  unsigned long int return_value_pthread_self$7;
  do
  {
    signed int paErr = result$link2;
    if(!(paErr >= 0))
    {
      if(paErr == -9999)
      {
        return_value_pthread_self$7=pthread_self();
        if(return_value_pthread_self$7 == mainThread_)
        {
          const char *StartStream$$1$$6$$1$$1$$err = jackErr_;
          if(StartStream$$1$$6$$1$$1$$err == ((const char *)NULL))
            StartStream$$1$$6$$1$$1$$err = "unknown error";

          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paJACK, (signed long int)-1, StartStream$$1$$6$$1$$1$$err);
        }

      }

      PaUtil_DebugPrint("Expression 'result' failed in 'src/hostapi/jack/pa_jack.c', line: 1647\n");
      result$link2 = paErr;
      goto error;
    }

  }
  while((_Bool)0);
  stream$link2->is_running = 1;

error:
  ;
  return result$link2;
}

// StartStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1798
static signed int StartStream$link3(void *s$link3)
{
  signed int result$link3 = 0;
  struct PaOssStream *stream$link3 = (struct PaOssStream *)s$link3;
  stream$link3->isActive = 1;
  stream$link3->isStopped = 0;
  stream$link3->lastPosPtr = 0;
  stream$link3->lastStreamBytes = (double)0;
  stream$link3->framesProcessed = 0;
  if(!(stream$link3->bufferProcessor.streamCallback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL)))
  {
    do
    {
      paUtilErr_$link1=PaUtil_StartThreading(&stream$link3->threading, PaOSS_AudioThreadProc, (void *)stream$link3);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaUtil_StartThreading( &stream->threading, &PaOSS_AudioThreadProc, stream )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1812\n");
        result$link3 = paUtilErr_$link1;
        goto error;
      }

    }
    while((_Bool)0);
    sem_wait(&stream$link3->semaphore);
  }

  else
    do
    {
      paUtilErr_$link1=PaOssStream_Prepare(stream$link3);
      if(!(paUtilErr_$link1 >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaOssStream_Prepare( stream )' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 1816\n");
        result$link3 = paUtilErr_$link1;
        break;
      }

    }
    while((_Bool)0);

error:
  ;
  return result$link3;
}

// StopStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 676
static signed int StopStream(void *s)
{
  signed int result = 0;
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)stream;
  return result;
}

// StopStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 3128
static signed int StopStream$link1(void *s$link1)
{
  signed int return_value_RealStop$1;
  return_value_RealStop$1=RealStop((struct PaAlsaStream *)s$link1, 0);
  return return_value_RealStop$1;
}

// StopStream$link2
// file src/hostapi/jack/pa_jack.c line 1707
static signed int StopStream$link2(void *s$link2)
{
  /* assertion s */
  assert(s$link2 != NULL);
  signed int return_value_RealStop$1$link1;
  return_value_RealStop$1$link1=RealStop$link1((struct PaJackStream *)s$link2, 0);
  return return_value_RealStop$1$link1;
}

// StopStream$link3
// file src/hostapi/oss/pa_unix_oss.c line 1851
static signed int StopStream$link3(void *s$link3)
{
  signed int return_value_RealStop$1$link2;
  return_value_RealStop$1$link2=RealStop$link2((struct PaOssStream *)s$link3, 0);
  return return_value_RealStop$1$link2;
}

// Terminate
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 241
static void Terminate(struct PaUtilHostApiRepresentation *hostApi)
{
  struct anonymous$15 *skeletonHostApi = (struct anonymous$15 *)hostApi;
  if(!(skeletonHostApi->allocations == ((struct anonymous$14 *)NULL)))
  {
    PaUtil_FreeAllAllocations(skeletonHostApi->allocations);
    PaUtil_DestroyAllocationGroup(skeletonHostApi->allocations);
  }

  PaUtil_FreeMemory((void *)skeletonHostApi);
}

// Terminate$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 806
static void Terminate$link1(struct PaUtilHostApiRepresentation *hostApi$link1)
{
  struct PaAlsaHostApiRepresentation *alsaHostApi = (struct PaAlsaHostApiRepresentation *)hostApi$link1;
  /* assertion hostApi */
  assert(hostApi$link1 != ((struct PaUtilHostApiRepresentation *)NULL));
  if(!(alsaHostApi->allocations == ((struct anonymous$14 *)NULL)))
  {
    PaUtil_FreeAllAllocations(alsaHostApi->allocations);
    PaUtil_DestroyAllocationGroup(alsaHostApi->allocations);
  }

  PaUtil_FreeMemory((void *)alsaHostApi);
  alsa_snd_config_update_free_global();
  PaAlsa_CloseLibrary();
}

// Terminate$link2
// file src/hostapi/jack/pa_jack.c line 814
static void Terminate$link2(struct PaUtilHostApiRepresentation *hostApi$link2)
{
  struct anonymous$21 *jackHostApi = (struct anonymous$21 *)hostApi$link2;
  do
  {
    signed int Terminate$$1$$1$$err;
    Terminate$$1$$1$$err=jack_deactivate(jackHostApi->jack_client);
    /* assertion err == 0 */
    assert(Terminate$$1$$1$$err == 0);
  }
  while((_Bool)0);
  do
  {
    signed int err;
    err=pthread_mutex_destroy(&jackHostApi->mtx);
    /* assertion err == 0 */
    assert(err == 0);
  }
  while((_Bool)0);
  do
  {
    signed int Terminate$$1$$3$$err;
    Terminate$$1$$3$$err=pthread_cond_destroy(&jackHostApi->cond);
    /* assertion err == 0 */
    assert(Terminate$$1$$3$$err == 0);
  }
  while((_Bool)0);
  do
  {
    signed int Terminate$$1$$4$$err;
    Terminate$$1$$4$$err=jack_client_close(jackHostApi->jack_client);
    /* assertion err == 0 */
    assert(Terminate$$1$$4$$err == 0);
  }
  while((_Bool)0);
  if(!(jackHostApi->deviceInfoMemory == ((struct anonymous$14 *)NULL)))
  {
    PaUtil_FreeAllAllocations(jackHostApi->deviceInfoMemory);
    PaUtil_DestroyAllocationGroup(jackHostApi->deviceInfoMemory);
  }

  PaUtil_FreeMemory((void *)jackHostApi);
  free((void *)jackErr_);
  jackErr_ = (char *)(void *)0;
}

// Terminate$link3
// file src/hostapi/oss/pa_unix_oss.c line 592
static void Terminate$link3(struct PaUtilHostApiRepresentation *hostApi$link3)
{
  struct anonymous$1 *ossHostApi = (struct anonymous$1 *)hostApi$link3;
  if(!(ossHostApi->allocations == ((struct anonymous$14 *)NULL)))
  {
    PaUtil_FreeAllAllocations(ossHostApi->allocations);
    PaUtil_DestroyAllocationGroup(ossHostApi->allocations);
  }

  PaUtil_FreeMemory((void *)ossHostApi);
}

// TerminateHostApis
// file src/common/pa_front.c line 139
static void TerminateHostApis(void)
{
  if(hostApisCount_ >= 1)
  {
    hostApisCount_ = hostApisCount_ - 1;
    hostApis_[(signed long int)hostApisCount_]->Terminate(hostApis_[(signed long int)hostApisCount_]);
  }

  hostApisCount_ = 0;
  defaultHostApiIndex_ = 0;
  deviceCount_ = 0;
  if(!(hostApis_ == ((struct PaUtilHostApiRepresentation **)NULL)))
    PaUtil_FreeMemory((void *)hostApis_);

  hostApis_ = ((struct PaUtilHostApiRepresentation **)NULL);
}

// TestParameters
// file src/hostapi/alsa/pa_linux_alsa.c line 1747
static signed int TestParameters(const struct PaUtilHostApiRepresentation *hostApi, const struct PaStreamParameters *parameters, double sampleRate, enum anonymous$5 streamDir)
{
  signed int result = 0;
  struct _snd_pcm *pcm = (struct _snd_pcm *)(void *)0;
  unsigned long int availableFormats;
  unsigned int numHostChannels;
  unsigned long int hostFormat;
  struct _snd_pcm_hw_params *hwParams;
  unsigned long int __alsa_alloca_size;
  __alsa_alloca_size=alsa_snd_pcm_hw_params_sizeof();
  void *return_value___builtin_alloca$1;
  return_value___builtin_alloca$1=__builtin_alloca(__alsa_alloca_size);
  *(&hwParams) = (struct _snd_pcm_hw_params *)return_value___builtin_alloca$1;
  memset((void *)*(&hwParams), 0, __alsa_alloca_size);
  signed int tmp_if_expr$2;
  signed int tmp_if_expr$4;
  signed int tmp_if_expr$3;
  if(parameters->hostApiSpecificStreamInfo == NULL)
  {
    const struct PaAlsaDeviceInfo *devInfo;
    devInfo=GetDeviceInfo(hostApi, parameters->device);
    if((signed int)streamDir == StreamDirection_In)
      tmp_if_expr$2 = devInfo->minInputChannels;

    else
      tmp_if_expr$2 = devInfo->minOutputChannels;
    if(!(tmp_if_expr$2 >= parameters->channelCount))
      tmp_if_expr$4 = parameters->channelCount;

    else
    {
      if((signed int)streamDir == StreamDirection_In)
        tmp_if_expr$3 = devInfo->minInputChannels;

      else
        tmp_if_expr$3 = devInfo->minOutputChannels;
      tmp_if_expr$4 = tmp_if_expr$3;
    }
    numHostChannels = (unsigned int)tmp_if_expr$4;
  }

  else
    numHostChannels = (unsigned int)parameters->channelCount;
  paUtilErr_=AlsaOpen(hostApi, parameters, streamDir, &pcm);
  signed int return_value_SetApproximateSampleRate$5;
  signed int return_value;
  unsigned long int return_value_pthread_self$6;
  signed int return_value_pthread_equal$7;
  unsigned long int return_value_pthread_self$9;
  signed int return_value_pthread_equal$10;
  if(!(paUtilErr_ >= 0))
  {
    PaUtil_DebugPrint("Expression 'AlsaOpen( hostApi, parameters, streamDir, &pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1768\n");
    result = paUtilErr_;
  }

  else
  {
    alsa_snd_pcm_hw_params_any(pcm, hwParams);
    return_value_SetApproximateSampleRate$5=SetApproximateSampleRate(pcm, hwParams, sampleRate);
    if(!(return_value_SetApproximateSampleRate$5 >= 0))
      result = -9997;

    else
    {
      return_value=alsa_snd_pcm_hw_params_set_channels(pcm, hwParams, numHostChannels);
      if(!(return_value >= 0))
        result = -9998;

      else
      {
        availableFormats=GetAvailableFormats(pcm);
        hostFormat=PaUtil_SelectClosestAvailableFormat(availableFormats, parameters->sampleFormat);
        paUtilErr_ = (signed int)hostFormat;
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'hostFormat = PaUtil_SelectClosestAvailableFormat( availableFormats, parameters->sampleFormat )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1786\n");
          result = paUtilErr_;
        }

        else
        {
          signed int __pa_unsure_error_id;
          enum _snd_pcm_format return_value_Pa2AlsaFormat$8;
          return_value_Pa2AlsaFormat$8=Pa2AlsaFormat(hostFormat);
          __pa_unsure_error_id=alsa_snd_pcm_hw_params_set_format(pcm, hwParams, return_value_Pa2AlsaFormat$8);
          if(!(__pa_unsure_error_id >= 0))
          {
            return_value_pthread_self$6=pthread_self();
            return_value_pthread_equal$7=pthread_equal(return_value_pthread_self$6, paUnixMainThread);
            if(!(return_value_pthread_equal$7 == 0))
            {
              const char *return_value_1;
              return_value_1=alsa_snd_strerror(__pa_unsure_error_id);
              PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value_1);
            }

            PaUtil_DebugPrint("Expression 'alsa_snd_pcm_hw_params_set_format( pcm, hwParams, Pa2AlsaFormat( hostFormat ) )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1789\n");
            result = -9999;
          }

          signed int ret = 0;
          ret=alsa_snd_pcm_hw_params(pcm, hwParams);
          if(!(ret >= 0))
          {
            if(ret == -22)
              result = -9993;

            else
              if(ret == -16)
                result = -9985;

              else
                result = -9999;
            signed int TestParameters$$1$$8$$1$$4$$__pa_unsure_error_id = ret;
            if(!(TestParameters$$1$$8$$1$$4$$__pa_unsure_error_id >= 0))
            {
              if(result == -9999)
              {
                return_value_pthread_self$9=pthread_self();
                return_value_pthread_equal$10=pthread_equal(return_value_pthread_self$9, paUnixMainThread);
                if(!(return_value_pthread_equal$10 == 0))
                {
                  const char *return_value_2;
                  return_value_2=alsa_snd_strerror(TestParameters$$1$$8$$1$$4$$__pa_unsure_error_id);
                  PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)TestParameters$$1$$8$$1$$4$$__pa_unsure_error_id, return_value_2);
                }

              }

              PaUtil_DebugPrint("Expression 'ret' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1812\n");
              result = result;
            }

          }


        end:
          ;
          if(!(pcm == ((struct _snd_pcm *)NULL)))
            alsa_snd_pcm_close(pcm);

          return result;
        }
      }
    }
  }

error:
  ;
}

// UInt8_To_Float32
// file src/common/pa_converters.c line 1584
static void UInt8_To_Float32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  float *dest = (float *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    float samp = (float)((signed int)*src - 128) * const_1_div_128_;
    *dest = samp;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// UInt8_To_Int16
// file src/common/pa_converters.c line 1654
static void UInt8_To_Int16(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed short int *dest = (signed short int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed short int)((signed int)*src - 128 << 8);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// UInt8_To_Int24
// file src/common/pa_converters.c line 1625
static void UInt8_To_Int24(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  unsigned char *dest = (unsigned char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dest[(signed long int)0] = (unsigned char)0;
    dest[(signed long int)1] = (unsigned char)0;
    dest[(signed long int)2] = (unsigned char)((signed int)*src - 128);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// UInt8_To_Int32
// file src/common/pa_converters.c line 1605
static void UInt8_To_Int32(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed int *dest = (signed int *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed int)*src - 128 << 24;
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// UInt8_To_Int8
// file src/common/pa_converters.c line 1674
static void UInt8_To_Int8(void *destinationBuffer, signed int destinationStride, void *sourceBuffer, signed int sourceStride, unsigned int count, struct PaUtilTriangularDitherGenerator *ditherGenerator)
{
  unsigned char *src = (unsigned char *)sourceBuffer;
  signed char *dest = (signed char *)destinationBuffer;
  (void)ditherGenerator;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (signed char)((signed int)*src - 128);
    src = src + (signed long int)sourceStride;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// UpdateQueue
// file src/hostapi/jack/pa_jack.c line 1423
static signed int UpdateQueue(struct anonymous$21 *hostApi)
{
  signed int result = 0;
  signed int queueModified = 0;
  double jackSr;
  unsigned int return_value_jack_get_sample_rate$1;
  return_value_jack_get_sample_rate$1=jack_get_sample_rate(hostApi->jack_client);
  jackSr = (const double)return_value_jack_get_sample_rate$1;
  signed int UpdateQueue$$1$$err;
  UpdateQueue$$1$$err=pthread_mutex_trylock(&hostApi->mtx);
  unsigned long int return_value_pthread_self$2;
  if(!(UpdateQueue$$1$$err == 0))
  {
    /* assertion err == 16 */
    assert(UpdateQueue$$1$$err == 16);
    return 0;
  }

  else
  {
    if(!(hostApi->toAdd == ((struct PaJackStream *)NULL)))
    {
      if(!(hostApi->processQueue == ((struct PaJackStream *)NULL)))
      {
        struct PaJackStream *node = hostApi->processQueue;
        for( ; !(node->next == ((struct PaJackStream *)NULL)); node = node->next)
          ;
        node->next = hostApi->toAdd;
      }

      else
        hostApi->processQueue = (struct PaJackStream *)hostApi->toAdd;
      if(IEEE_FLOAT_NOTEQUAL(hostApi->toAdd->streamRepresentation.streamInfo.sampleRate, jackSr))
        UpdateSampleRate(hostApi->toAdd, jackSr);

      hostApi->toAdd = (struct PaJackStream *)(void *)0;
      queueModified = 1;
    }

    if(!(hostApi->toRemove == ((struct PaJackStream *)NULL)))
    {
      signed int removed = 0;
      struct PaJackStream *UpdateQueue$$1$$3$$node = hostApi->processQueue;
      struct PaJackStream *prev = (struct PaJackStream *)(void *)0;
      /* assertion hostApi->processQueue */
      assert(hostApi->processQueue != ((struct PaJackStream *)NULL));
      for( ; !(UpdateQueue$$1$$3$$node == ((struct PaJackStream *)NULL)); UpdateQueue$$1$$3$$node = UpdateQueue$$1$$3$$node->next)
      {
        if(UpdateQueue$$1$$3$$node == hostApi->toRemove)
        {
          if(!(prev == ((struct PaJackStream *)NULL)))
            prev->next = UpdateQueue$$1$$3$$node->next;

          else
            hostApi->processQueue = (struct PaJackStream *)UpdateQueue$$1$$3$$node->next;
          removed = 1;
          break;
        }

        prev = UpdateQueue$$1$$3$$node;
      }
      do
        if(removed == 0)
        {
          PaUtil_DebugPrint("Expression 'removed' failed in 'src/hostapi/jack/pa_jack.c', line: 1482\n");
          result = -9986;
          goto error;
        }

      while((_Bool)0);
      hostApi->toRemove = (struct PaJackStream *)(void *)0;
      queueModified = 1;
    }

    if(!(queueModified == 0))
      do
      {
        signed int err;
        err=pthread_cond_signal(&hostApi->cond);
        /* assertion err == 0 */
        assert(err == 0);
      }
      while((_Bool)0);

    do
    {

    error:
      ;
      signed int UpdateQueue$$1$$5$$err;
      UpdateQueue$$1$$5$$err=pthread_mutex_unlock(&hostApi->mtx);
      /* assertion err == 0 */
      assert(UpdateQueue$$1$$5$$err == 0);
    }
    while((_Bool)0);
    return result;
  }
}

// UpdateSampleRate
// file src/hostapi/jack/pa_jack.c line 645
static void UpdateSampleRate(struct PaJackStream *stream, double sampleRate)
{
  stream->bufferProcessor.samplePeriod = 1. / sampleRate;
  stream->cpuLoadMeasurer.samplingPeriod = stream->bufferProcessor.samplePeriod;
  stream->streamRepresentation.streamInfo.sampleRate = sampleRate;
}

// ValidateOpenStreamParameters
// file src/common/pa_front.c line 835
static signed int ValidateOpenStreamParameters(const struct PaStreamParameters *inputParameters, const struct PaStreamParameters *outputParameters, double sampleRate, unsigned long int framesPerBuffer, unsigned long int streamFlags, signed int (*streamCallback)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *), struct PaUtilHostApiRepresentation **hostApi, signed int *hostApiInputDevice, signed int *hostApiOutputDevice)
{
  signed int inputHostApiIndex = -1;
  signed int outputHostApiIndex = -1;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$3;
  if(inputParameters == ((const struct PaStreamParameters *)NULL) && outputParameters == ((const struct PaStreamParameters *)NULL))
    return -9996;

  else
  {
    if(inputParameters == ((const struct PaStreamParameters *)NULL))
      *hostApiInputDevice = (signed int)-1;

    else
      if(inputParameters->device == -2)
      {
        if(!(inputParameters->hostApiSpecificStreamInfo == NULL))
        {
          inputHostApiIndex=Pa_HostApiTypeIdToHostApiIndex(((struct PaUtilHostApiSpecificStreamInfoHeader *)inputParameters->hostApiSpecificStreamInfo)->hostApiType);
          if(!(inputHostApiIndex == -1))
          {
            *hostApiInputDevice = (signed int)-2;
            *hostApi = hostApis_[(signed long int)inputHostApiIndex];
          }

          else
            return -9996;
        }

        else
          return -9996;
      }

      else
      {
        if(!(inputParameters->device >= 0))
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = inputParameters->device >= deviceCount_ ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
          return -9996;

        inputHostApiIndex=FindHostApi(inputParameters->device, hostApiInputDevice);
        if(!(inputHostApiIndex >= 0))
          return -9986;

        *hostApi = hostApis_[(signed long int)inputHostApiIndex];
        if(!(inputParameters->channelCount >= 1))
          return -9998;

        signed int return_value_SampleFormatIsValid$2;
        return_value_SampleFormatIsValid$2=SampleFormatIsValid(inputParameters->sampleFormat);
        if(return_value_SampleFormatIsValid$2 == 0)
          return -9994;

        if(!(inputParameters->hostApiSpecificStreamInfo == NULL))
        {
          if(!(((struct PaUtilHostApiSpecificStreamInfoHeader *)inputParameters->hostApiSpecificStreamInfo)->hostApiType == (*hostApi)->info.type))
            return -9984;

        }

      }
    if(outputParameters == ((const struct PaStreamParameters *)NULL))
      *hostApiOutputDevice = (signed int)-1;

    else
      if(outputParameters->device == -2)
      {
        if(!(outputParameters->hostApiSpecificStreamInfo == NULL))
        {
          outputHostApiIndex=Pa_HostApiTypeIdToHostApiIndex(((struct PaUtilHostApiSpecificStreamInfoHeader *)outputParameters->hostApiSpecificStreamInfo)->hostApiType);
          if(!(outputHostApiIndex == -1))
          {
            *hostApiOutputDevice = (signed int)-2;
            *hostApi = hostApis_[(signed long int)outputHostApiIndex];
          }

          else
            return -9996;
        }

        else
          return -9996;
      }

      else
      {
        if(!(outputParameters->device >= 0))
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = outputParameters->device >= deviceCount_ ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          return -9996;

        outputHostApiIndex=FindHostApi(outputParameters->device, hostApiOutputDevice);
        if(!(outputHostApiIndex >= 0))
          return -9986;

        *hostApi = hostApis_[(signed long int)outputHostApiIndex];
        if(!(outputParameters->channelCount >= 1))
          return -9998;

        signed int return_value_SampleFormatIsValid$4;
        return_value_SampleFormatIsValid$4=SampleFormatIsValid(outputParameters->sampleFormat);
        if(return_value_SampleFormatIsValid$4 == 0)
          return -9994;

        if(!(outputParameters->hostApiSpecificStreamInfo == NULL))
        {
          if(!(((struct PaUtilHostApiSpecificStreamInfoHeader *)outputParameters->hostApiSpecificStreamInfo)->hostApiType == (*hostApi)->info.type))
            return -9984;

        }

      }
    if(!(inputParameters == ((const struct PaStreamParameters *)NULL)) && !(outputParameters == ((const struct PaStreamParameters *)NULL)))
    {
      if(!(inputHostApiIndex == outputHostApiIndex))
        return -9993;

    }

  }
  if(sampleRate < 1000.0 || sampleRate > 384000.0)
    return -9997;

  else
    if(!((18446744069414649840ul & streamFlags) == 0ul))
      return -9995;

    else
      if(!((4ul & streamFlags) == 0ul))
      {
        if(streamCallback == ((signed int (*)(const void *, void *, unsigned long int, const struct PaStreamCallbackTimeInfo *, unsigned long int, void *))NULL))
          return -9995;

        if(inputParameters == ((const struct PaStreamParameters *)NULL) || outputParameters == ((const struct PaStreamParameters *)NULL))
          return -9995;

        if(framesPerBuffer == 0ul)
          goto __CPROVER_DUMP_L35;

        return -9995;
      }

      else
      {

      __CPROVER_DUMP_L35:
        ;
        return 0;
      }
}

// ValidateParameters
// file src/hostapi/alsa/pa_linux_alsa.c line 1484
static signed int ValidateParameters(const struct PaStreamParameters *parameters, struct PaUtilHostApiRepresentation *hostApi, enum anonymous$5 mode)
{
  signed int result = 0;
  signed int maxChans;
  const struct PaAlsaDeviceInfo *deviceInfo = (const struct PaAlsaDeviceInfo *)(void *)0;
  /* assertion parameters */
  assert(parameters != ((const struct PaStreamParameters *)NULL));
  _Bool tmp_if_expr$1;
  if(!(parameters->device == -2))
  {
    /* assertion parameters->device < hostApi->info.deviceCount */
    assert(parameters->device < hostApi->info.deviceCount);
    do
      if(!(parameters->hostApiSpecificStreamInfo == NULL))
      {
        PaUtil_DebugPrint("Expression 'parameters->hostApiSpecificStreamInfo == NULL' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1494\n");
        result = -9993;
        goto error;
      }

    while((_Bool)0);
    deviceInfo=GetDeviceInfo(hostApi, parameters->device);
  }

  else
  {
    const struct PaAlsaStreamInfo *streamInfo = (const struct PaAlsaStreamInfo *)parameters->hostApiSpecificStreamInfo;
    do
      if(!(parameters->device == -2))
      {
        PaUtil_DebugPrint("Expression 'parameters->device == paUseHostApiSpecificDeviceSpecification' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1501\n");
        result = -9996;
        goto error;
      }

    while((_Bool)0);
    do
    {
      if(streamInfo->size == sizeof(struct PaAlsaStreamInfo) /*32ul*/ )
        tmp_if_expr$1 = streamInfo->version == (unsigned long int)1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
      {
        PaUtil_DebugPrint("Expression 'streamInfo->size == sizeof (PaAlsaStreamInfo) && streamInfo->version == 1' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1503\n");
        result = -9984;
        goto error;
      }

    }
    while((_Bool)0);
    do
      if(streamInfo->deviceString == ((const char *)NULL))
      {
        PaUtil_DebugPrint("Expression 'streamInfo->deviceString != NULL' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1504\n");
        result = -9996;
        goto error;
      }

    while((_Bool)0);
    return 0;
  }
  /* assertion deviceInfo */
  assert(deviceInfo != ((const struct PaAlsaDeviceInfo *)NULL));
  /* assertion parameters->hostApiSpecificStreamInfo == ((void *)0) */
  assert(parameters->hostApiSpecificStreamInfo == (void *)0);
  signed int tmp_if_expr$2;
  if((signed int)mode == StreamDirection_In)
    tmp_if_expr$2 = deviceInfo->baseDeviceInfo.maxInputChannels;

  else
    tmp_if_expr$2 = deviceInfo->baseDeviceInfo.maxOutputChannels;
  maxChans = tmp_if_expr$2;
  do
    if(!(maxChans >= parameters->channelCount))
    {
      PaUtil_DebugPrint("Expression 'parameters->channelCount <= maxChans' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 1514\n");
      result = -9998;
      goto error;
    }

  while((_Bool)0);

error:
  ;
  return result;
}

// ValidateParameters$link1
// file src/hostapi/oss/pa_unix_oss.c line 726
static signed int ValidateParameters$link1(const struct PaStreamParameters *parameters$link1, const struct PaDeviceInfo *deviceInfo, enum anonymous$4 mode$link1)
{
  signed int maxChans$link1;
  /* assertion parameters */
  assert(parameters$link1 != ((const struct PaStreamParameters *)NULL));
  signed int tmp_if_expr$1$link1;
  if(parameters$link1->device == -2)
    return -9996;

  else
  {
    if((signed int)mode$link1 == StreamMode_In)
      tmp_if_expr$1$link1 = deviceInfo->maxInputChannels;

    else
      tmp_if_expr$1$link1 = deviceInfo->maxOutputChannels;
    maxChans$link1 = tmp_if_expr$1$link1;
    if(!(maxChans$link1 >= parameters$link1->channelCount))
      return -9998;

    else
      return 0;
  }
}

// WaitCondition
// file src/hostapi/jack/pa_jack.c line 1004
static signed int WaitCondition(struct anonymous$21 *hostApi)
{
  signed int result = 0;
  signed int err = 0;
  double pt;
  pt=PaUtil_GetTime();
  struct timespec ts;
  double return_value_floor$1;
  return_value_floor$1=floor(pt + (double)(10 * 60));
  ts.tv_sec = (signed long int)return_value_floor$1;
  double return_value_floor$2;
  return_value_floor$2=floor(pt);
  ts.tv_nsec = (signed long int)((pt - return_value_floor$2) * (double)1000000000);
  err=pthread_cond_timedwait(&hostApi->cond, &hostApi->mtx, &ts);
  unsigned long int return_value_pthread_self$3;
  do
    if(err == 110)
    {
      PaUtil_DebugPrint("Expression 'err != ETIMEDOUT' failed in 'src/hostapi/jack/pa_jack.c', line: 1017\n");
      result = -9987;
      goto error;
    }

  while((_Bool)0);
  unsigned long int return_value_pthread_self$4;
  do
    if(!(err == 0))
    {
      PaUtil_DebugPrint("Expression '!err' failed in 'src/hostapi/jack/pa_jack.c', line: 1018\n");
      result = -9986;
      goto error;
    }

  while((_Bool)0);

error:
  ;
  return result;
}

// WriteStream
// file src/hostapi/skeleton/pa_hostapi_skeleton.c line 774
static signed int WriteStream(void *s, const void *buffer, unsigned long int frames)
{
  struct PaSkeletonStream *stream = (struct PaSkeletonStream *)s;
  (void)buffer;
  (void)frames;
  (void)stream;
  return 0;
}

// WriteStream$link1
// file src/hostapi/alsa/pa_linux_alsa.c line 4425
static signed int WriteStream$link1(void *s$link1, const void *buffer$link1, unsigned long int frames$link1)
{
  signed int result = 0;
  signed long int err;
  struct PaAlsaStream *stream$link1 = (struct PaAlsaStream *)s$link1;
  unsigned long int framesGot;
  unsigned long int framesAvail;
  const void *userBuffer;
  struct _snd_pcm *save = stream$link1->capture.pcm;
  /* assertion stream */
  assert(stream$link1 != ((struct PaAlsaStream *)NULL));
  do
    if(stream$link1->playback.pcm == ((struct _snd_pcm *)NULL))
    {
      PaUtil_DebugPrint("Expression 'stream->playback.pcm' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4436\n");
      result = -9974;
      goto error;
    }

  while((_Bool)0);
  stream$link1->capture.pcm = (struct _snd_pcm *)(void *)0;
  if(stream$link1->underrun > 0.)
  {
    result = -9980;
    stream$link1->underrun = 0.0;
  }

  if(!(stream$link1->playback.userInterleaved == 0))
    userBuffer = buffer$link1;

  else
  {
    userBuffer = (const void *)stream$link1->playback.userBuffers;
    memcpy((void *)userBuffer, buffer$link1, sizeof(void *) /*8ul*/  * (unsigned long int)stream$link1->playback.numUserChannels);
  }
  unsigned long int return_value_pthread_self$1;
  signed int return_value_pthread_equal$2;
  if(frames$link1 >= 1ul)
  {
    signed int xrun = 0;
    unsigned long int hwAvail;
    do
    {
      paUtilErr_=PaAlsaStream_WaitForFrames(stream$link1, &framesAvail, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_WaitForFrames( stream, &framesAvail, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4460\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    framesGot = framesAvail < frames$link1 ? framesAvail : frames$link1;
    do
    {
      paUtilErr_=PaAlsaStream_SetUpBuffers(stream$link1, &framesGot, &xrun);
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'PaAlsaStream_SetUpBuffers( stream, &framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4463\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    if(framesGot >= 1ul)
    {
      framesGot=PaUtil_CopyOutput(&stream$link1->bufferProcessor, &userBuffer, framesGot);
      do
      {
        paUtilErr_=PaAlsaStream_EndProcessing(stream$link1, framesGot, &xrun);
        if(!(paUtilErr_ >= 0))
        {
          PaUtil_DebugPrint("Expression 'PaAlsaStream_EndProcessing( stream, framesGot, &xrun )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4467\n");
          result = paUtilErr_;
          goto error;
        }

      }
      while((_Bool)0);
      frames$link1 = frames$link1 - framesGot;
    }

    do
    {
      err=GetStreamWriteAvailable$link1((void *)stream$link1);
      paUtilErr_ = (signed int)err;
      if(!(paUtilErr_ >= 0))
      {
        PaUtil_DebugPrint("Expression 'err = GetStreamWriteAvailable( stream )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4474\n");
        result = paUtilErr_;
        goto error;
      }

    }
    while((_Bool)0);
    framesAvail = (unsigned long int)err;
    hwAvail = stream$link1->playback.alsaBufferSize - framesAvail;
    enum _snd_pcm_state return_value_1;
    return_value_1=alsa_snd_pcm_state(stream$link1->playback.pcm);
    if((signed int)return_value_1 == SND_PCM_STATE_PREPARED)
    {
      if(hwAvail >= stream$link1->playback.framesPerPeriod)
      {
        signed int __pa_unsure_error_id;
        __pa_unsure_error_id=alsa_snd_pcm_start(stream$link1->playback.pcm);
        if(!(__pa_unsure_error_id >= 0))
        {
          return_value_pthread_self$1=pthread_self();
          return_value_pthread_equal$2=pthread_equal(return_value_pthread_self$1, paUnixMainThread);
          if(!(return_value_pthread_equal$2 == 0))
          {
            const char *return_value;
            return_value=alsa_snd_strerror(__pa_unsure_error_id);
            PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paALSA, (signed long int)__pa_unsure_error_id, return_value);
          }

          PaUtil_DebugPrint("Expression 'alsa_snd_pcm_start( stream->playback.pcm )' failed in 'src/hostapi/alsa/pa_linux_alsa.c', line: 4481\n");
          result = -9999;
        }

      }

    }

  }


end:
  ;
  stream$link1->capture.pcm = save;
  return result;

error:
  ;
  goto end;
}

// WriteStream$link2
// file src/hostapi/oss/pa_unix_oss.c line 1971
static signed int WriteStream$link2(void *s$link2, const void *buffer$link2, unsigned long int frames$link2)
{
  signed int result$link1 = 0;
  struct PaOssStream *stream$link2 = (struct PaOssStream *)s$link2;
  signed int bytesRequested;
  signed int bytesWritten;
  unsigned long int framesConverted;
  const void *userBuffer$link1;
  if(!(stream$link2->bufferProcessor.userOutputIsInterleaved == 0))
    userBuffer$link1 = buffer$link2;

  else
  {
    userBuffer$link1 = (const void *)stream$link2->playback->userBuffers;
    memcpy((void *)userBuffer$link1, buffer$link2, sizeof(void *) /*8ul*/  * (unsigned long int)stream$link2->playback->userChannelCount);
  }
  unsigned long int return_value_pthread_self$4;
  while(!(frames$link2 == 0ul))
  {
    PaUtil_SetOutputFrameCount(&stream$link2->bufferProcessor, stream$link2->playback->hostFrames);
    PaUtil_SetInterleavedOutputChannels(&stream$link2->bufferProcessor, (unsigned int)0, stream$link2->playback->buffer, (unsigned int)stream$link2->playback->hostChannelCount);
    framesConverted=PaUtil_CopyOutput(&stream$link2->bufferProcessor, &userBuffer$link1, frames$link2);
    frames$link2 = frames$link2 - framesConverted;
    unsigned int return_value_PaOssStreamComponent_FrameSize$1;
    return_value_PaOssStreamComponent_FrameSize$1=PaOssStreamComponent_FrameSize(stream$link2->playback);
    bytesRequested = (signed int)(framesConverted * (unsigned long int)return_value_PaOssStreamComponent_FrameSize$1);
    do
    {
      signed long int return_value_write$5;
      return_value_write$5=write(stream$link2->playback->fd, stream$link2->playback->buffer, (unsigned long int)bytesRequested);
      bytesWritten = (signed int)return_value_write$5;
      sysErr_ = bytesWritten;
      if(!(sysErr_ >= 0))
      {
        return_value_pthread_self$4=pthread_self();
        if(return_value_pthread_self$4 == mainThread_$link1)
        {
          signed int *return_value___errno_location$2;
          return_value___errno_location$2=__errno_location();
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(*return_value___errno_location$2);
          PaUtil_SetLastHostErrorInfo((enum PaHostApiTypeId)paOSS, (signed long int)sysErr_, return_value_strerror$3);
        }

        PaUtil_DebugPrint("Expression '(bytesWritten = write( stream->playback->fd, stream->playback->buffer, bytesRequested ))' failed in 'src/hostapi/oss/pa_unix_oss.c', line: 2000\n");
        result$link1 = -9999;
        goto error;
      }

    }
    while((_Bool)0);
    if(!(bytesRequested == bytesWritten))
      return -9999;

  }

error:
  ;
  return result$link1;
}

// Zero16
// file src/common/pa_converters.c line 1926
static void Zero16(void *destinationBuffer, signed int destinationStride, unsigned int count)
{
  unsigned short int *dest = (unsigned short int *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned short int)0;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Zero24
// file src/common/pa_converters.c line 1941
static void Zero24(void *destinationBuffer, signed int destinationStride, unsigned int count)
{
  unsigned char *dest = (unsigned char *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    dest[(signed long int)0] = (unsigned char)0;
    dest[(signed long int)1] = (unsigned char)0;
    dest[(signed long int)2] = (unsigned char)0;
    dest = dest + (signed long int)(destinationStride * 3);
  }
  while((_Bool)1);
}

// Zero32
// file src/common/pa_converters.c line 1958
static void Zero32(void *destinationBuffer, signed int destinationStride, unsigned int count)
{
  unsigned int *dest = (unsigned int *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned int)0;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// Zero8
// file src/common/pa_converters.c line 1911
static void Zero8(void *destinationBuffer, signed int destinationStride, unsigned int count)
{
  unsigned char *dest = (unsigned char *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)0;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// ZeroU8
// file src/common/pa_converters.c line 1896
static void ZeroU8(void *destinationBuffer, signed int destinationStride, unsigned int count)
{
  unsigned char *dest = (unsigned char *)destinationBuffer;
  unsigned int tmp_post$1;
  do
  {
    tmp_post$1 = count;
    count = count - 1u;
    if(tmp_post$1 == 0u)
      break;

    *dest = (unsigned char)128;
    dest = dest + (signed long int)destinationStride;
  }
  while((_Bool)1);
}

// main
// file ./test/patest_ringmix.c line 70
signed int main(void)
{
  void *stream;
  Pa_Initialize();
  Pa_OpenDefaultStream(&stream, 2, 2, (unsigned long int)0x00000001, 44100.0, (unsigned long int)64, myCallback, (void *)0);
  Pa_StartStream(stream);
  Pa_Sleep((signed long int)10000);
  Pa_StopStream(stream);
  Pa_CloseStream(stream);
  Pa_Terminate();
  return 0;
}

// myCallback
// file ./test/patest_ringmix.c line 47
static signed int myCallback(const void *inputBuffer, void *outputBuffer, unsigned long int framesPerBuffer, const struct PaStreamCallbackTimeInfo *timeInfo, unsigned long int statusFlags, void *userData)
{
  const float *in = (const float *)inputBuffer;
  float *out = (float *)outputBuffer;
  float leftInput;
  float rightInput;
  unsigned int i = (unsigned int)0;
  const float *tmp_post$1;
  const float *tmp_post$2;
  float *tmp_post$3;
  float *tmp_post$4;
  for( ; !((unsigned long int)i >= framesPerBuffer); i = i + 1u)
  {
    tmp_post$1 = in;
    in = in + 1l;
    leftInput = *tmp_post$1;
    tmp_post$2 = in;
    in = in + 1l;
    rightInput = *tmp_post$2;
    tmp_post$3 = out;
    out = out + 1l;
    *tmp_post$3 = leftInput * rightInput;
    tmp_post$4 = out;
    out = out + 1l;
    *tmp_post$4 = 0.5f * (leftInput + rightInput);
  }
  return 0;
}

