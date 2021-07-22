# SprayPaint
## Wall Graffiti Simulation
________________________________
Anti-latency project in Unreal Engine
**Unreal Engine 4.25.4** (Newest Version Anti-latency SDK Works with)

*** NOTE: ***
If WallBP gets recompiled, paint material reference will have to be recopied from WallBP in hierarchy to the VRPawn paint reference.

### Non Anti-Latency Controls:

- WASD: Move Paint Can
- Space: Clear Canvas
- K: Switch Camera Used
- L: Get Spray Camera Rotation
- Colors:
  - 1: Blue
  - 2: Red
  - 3: Green
  - 4: Yellow
  - E: Random
- P: Get Paint Thickness from Heat Map (in progress)

### Project Iterations 
(with and without anti-latency)
_________________________________

#### Cartoony Spray paint Project (spary map):
- Speckled Conrete wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip is a fade-in decal
- Distance from wall origin changes paint spray size
- **(Anti-latency version available)**

#### Realistic Spray paint Project Round 1: Added Heat Map (HeatmapSpray map)
- Speckled Conrete wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip is a fade-in decal
- Distance from wall origin changes paint spray size
- Build up of paint is stored in heat map (second render texture + material)

_________________________________

#### In Progress:

- Use heat map to trigger drips
- Dynamic drips over wall texture
- Get Wall color/heat map color from UV hit (camera to RenderTarget)






