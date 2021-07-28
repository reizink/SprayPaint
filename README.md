# SprayPaint
## Wall Graffiti Simulation
________________________________

Anti-latency project in Unreal Engine
- **Unreal Engine 4.25.4** (Cartoon WIP - Round2, Anti-latency 2.1.0)
- **Unreal Engine 4.26.2** (Round3, Anti-latency 3.1.0)

### *** NOTE: ***
-If WallBP gets recompiled or spray size doesn't scale by distance, Paint MID Ref will have to be recopied from WallBP in hierarchy to the VRPawn paint reference.

### Non Anti-Latency Controls:

- WASD: Move Paint Can
- Space: Clear Canvas
- K: Switch Camera Used
- L: Get Spray Size
- Colors:
  - 1: Blue
  - 2: Red
  - 3: Green
  - 4: Yellow
  - E: Random
- P: Get Paint Thickness/Stored Color from Heat Map (works in later versions)
- R: Get Camera Rotation from Wall

### Project Iterations 
(with and without anti-latency)
_________________________________

#### Cartoony Spray Paint Project (spray map):
- Speckled Conrete wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip is a fade-in decal
- Distance from wall origin changes paint spray size
- **(Anti-latency version available)**

#### Spray Paint Project Round 1: Added Heat Map (HeatmapSpray map)
- Speckled Conrete wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip is a fade-in decal
- Distance from wall origin changes paint spray size
- Build up of paint is stored in heat map (second render texture + material)

#### Spray Paint Project Round 2: (HeatmapSpray map)
- Speckled Conrete wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip particles WIP
- Build up of paint is stored in heat map (second render texture + material)

#### Realistic Spray Paint Project Round 3: UE4.26 (HeatmapSpray map)
- Cobblestone curved wall
- Colors: Blue, Red, Green, Yellow, Random
- Paint Drip particles, testing Niagara/not fully implemented
- Build up of paint is stored in heat map with size
- Working camera mimic for heat map
- Gets color from heat map for drip
- antilatency not implemented but installled

_________________________________

#### In Progress:

- Dynamic drip particles drawing to render texture
- Antilatency w/ new version
- Angled spray can






