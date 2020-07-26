class cfgVehicles  // Sve ide između cfgVehicles zagrada
{
	
	// Tent
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class LargeTent;
	class LargeTentPlacing;

	// Vozila
	class CarScript;
	class Clothing;

	class HatchbackDoors_Driver;
	class HatchbackDoors_CoDriver;
	class HatchbackHood;
	class HatchbackTrunk;
	class OffroadHatchback;
	class DamageSystem;
	class DamageZones;
	class Chassis;
	class Reflector_1_1;
	class Reflector_2_1;
	class WindowFront;
	class Engine;
	class Roof;
	class Front;
	class Back;
	class Fender_1_1;
	class Fender_1_2;
	class Fender_2_1;
	class Fender_2_2;
	class FuelTank;
	class Health;
	class GlobalHealth;
	class Window;
	class Doors;
	class CarDoor;
		
	//////////////////////////////////////////////////////////////////
	// Vozila
	/////////////////////////////////////////////////////////////////
	// Offroad Hatchback - Lada Niva
	class OffroadHatchback_Camo : OffroadHatchback
	{
		hiddenSelectionsMaterials[] =
		{
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat",
			"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class DamageZones : DamageZones
			{
				class Chassis : Chassis
				{
					class Health : Health
					{
					};
				};
				class Reflector_1_1 : Reflector_1_1
				{
					class Health : Health
					{
					};
				};
				class Reflector_2_1 : Reflector_2_1
				{
					class Health : Health
					{
					};
				};
				class WindowFront : WindowFront
				{
					class Health : Health
					{
					};
				};
				class Engine : Engine
				{
					class Health : Health
					{
					};
				};
				class Roof : Roof
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Front : Front
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Back : Back
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_1 : Fender_1_1
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_1_2 : Fender_1_2
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_1 : Fender_2_1
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class Fender_2_2 : Fender_2_2
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
				class FuelTank : FuelTank
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_body_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_Driver_Camo : HatchbackDoors_Driver
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackDoors_CoDriver_Camo : HatchbackDoors_CoDriver
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_door_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
	class HatchbackHood_Camo : HatchbackHood
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Offroad\data\offroadhatchback\data\niva_hood.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
				class Health : Health
				{
					RefTexsMats[] =
					{
						"BW_Offroad\data\offroadhatchback\data\niva_hood.rvmat"
					};
					healthLevels[] =
					{

						{
							1,

							{
								"BW_Offroad\data\offroadhatchback\data\niva_hood.rvmat"
							}
						},

						{
							0.69999999,

							{
								"BW_Offroad\data\offroadhatchback\data\niva_hood.rvmat"
							}
						},

						{
							0.5,

							{
								"BW_Offroad\data\offroadhatchback\data\niva_hood_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"BW_Offroad\data\offroadhatchback\data\niva_hood_damage.rvmat"
							}
						},

						{
							0,

							{
								"BW_Offroad\data\offroadhatchback\data\niva_hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HatchbackTrunk_Camo : HatchbackTrunk
	{
		hiddenSelectionsMaterials[] =
		{
			"BW_Offroad\data\offroadhatchback\data\niva_trunk.rvmat"
		};
		class DamageSystem : DamageSystem
		{
			class GlobalHealth : GlobalHealth
			{
			};
			class DamageZones : DamageZones
			{
				class Window : Window
				{
					class Health : Health
					{
					};
				};
				class Doors : Doors
				{
					class Health : Health
					{
						RefTexsMats[] =
						{
							"BW_Offroad\data\offroadhatchback\data\niva_trunk.rvmat"
						};
						healthLevels[] =
						{

							{
								1,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_trunk.rvmat"
								}
							},

							{
								0.69999999,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_trunk.rvmat"
								}
							},

							{
								0.5,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_trunk_damage.rvmat"
								}
							},

							{
								0.30000001,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_trunk_damage.rvmat"
								}
							},

							{
								0,

								{
									"BW_Offroad\data\offroadhatchback\data\niva_trunk_destruct.rvmat"
								}
							}
						};
					};
				};
			};
		};
	};
};