import { NitroModules } from 'react-native-nitro-modules'
import type { FastOnnx as FastOnnxSpec } from './specs/fast-onnx.nitro'

export const FastOnnx =
  NitroModules.createHybridObject<FastOnnxSpec>('FastOnnx')