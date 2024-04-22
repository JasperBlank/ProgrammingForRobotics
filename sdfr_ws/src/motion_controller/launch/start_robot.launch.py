from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([

        # Webcam reader node
        Node(
        package="image_tools",
        executable="cam2image",
        name="get_webcam_image",
        arguments=[
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "WARN", # Only log messages of severity WARN and higher
        ],

        ),

        # Image processing node
        Node(
        package="ball_detection", 
        executable="find_ball", 
        name="image_processing",
        parameters=[
            {"debug_option": 2}, # original image with generated bounding box
        ],
        arguments=[
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "WARN", # Only log messages of severity WARN and higher
        ],
        ),

        # Image display node
        Node(
        package="image_tools",
        executable="showimage",
        name="show_received_box", 
        remappings=[
            ("/image", "/debugging_tool"), # subscribe to debbuging_tool
        ],
        arguments=[
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "WARN", # Only log messages of severity WARN and higher
        ],
        ),

        # Bounding box controller node
        Node(
        package="motion_controller", 
        executable="bounding_box_controller",
        name="calculate_robot_twist", 
        parameters=[
            {"linear_gain": 1.0}, # check later!
            {"angular_gain": 1.0}, # check later!
            {"target_width": 75}, # check later!
            {"debug_view": True}, # image with generated bounding box and target bounding box
        ],
        arguments=[ 
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "WARN", # Only log messages of severity WARN and higher
        ],
        ),

        # Image display node
        Node(
        package="image_tools",
        executable="showimage",
        name="show_target_box", 
        remappings=[
            ("/image", "/target_box"), # subscribe to target_box
        ],
        arguments=[
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "WARN", # Only log messages of severity WARN and higher
        ],
        ),

        # Differential drive controller node
        Node(
        package="motion_controller",
        executable="differential_drive_controller",
        name="calculate_motor_velocities", 
        arguments=[
            "--ros-args",
            # image_tools nodes tend to spam your terminal output
            # the next two lines limit the spam somewhat
            "--log-level",
            "INFO", # Only log messages of severity WARN and higher
        ],
        ),

    ])