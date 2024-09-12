import asyncio
import websockets

async def handle_connection(websocket, path):
    try:
        player_name = await websocket.recv()
        print(f"Received player name: {player_name}")

        # example for next : join
        await websocket.send("NEXT: JOIN")
        print("Sent NEXT: JOIN")

        # wait for client to gather data
        await asyncio.sleep(2)

        # Send the IP address to the client
        ip_address = "192.168.1.100"
        await websocket.send(f"IP: {ip_address}")
        print(f"Sent IP address: {ip_address}")

        # Handle heartbeat messages
        async for message in websocket:
            if message == "HEARTBEAT":
                print("Received heartbeat from client.")
            else:
                print(f"Unexpected message received: {message}")

    except websockets.ConnectionClosed as e:
        print(f"Connection closed: {e}")

async def main():
    # Start the WebSocket server
    async with websockets.serve(handle_connection, "localhost", 5000):
        print("WebSocket server started on ws://localhost:5000")
        await asyncio.Future()  # Run forever

if __name__ == "__main__":
    asyncio.run(main())