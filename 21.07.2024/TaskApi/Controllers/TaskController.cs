using Microsoft.AspNetCore.Mvc;
using System.Collections.Generic;
using System.Linq;
using TaskApi.Models;

namespace TaskApi.Controllers
{
    [ApiController]
    [Route("api/[controller]")]
    public class TasksController : ControllerBase
    {
        private static List<TaskModel> tasks = new List<TaskModel>();
        private static int nextId = 1;

        [HttpPost("AddTask")]
        public IActionResult AddTask([FromBody] TaskModel task)
        {
            task.Id = nextId++;
            tasks.Add(task);
            return CreatedAtAction(nameof(GetTask), new { id = task.Id }, task);
        }

        [HttpGet("GetAllTasks")]
        public IActionResult GetAllTasks()
        {
            return Ok(tasks);
        }

        [HttpGet("GetTask/{id}")]
        public IActionResult GetTask(int id)
        {
            var task = tasks.FirstOrDefault(t => t.Id == id);
            if (task == null)
            {
                return NotFound();
            }
            return Ok(task);
        }

        [HttpPut("EditTask")]
        public IActionResult EditTask([FromBody] TaskModel updatedTask)
        {
            var task = tasks.FirstOrDefault(t => t.Id == updatedTask.Id);
            if (task == null)
            {
                return NotFound();
            }

            task.Title = updatedTask.Title;
            task.Description = updatedTask.Description;
            task.IsCompleted = updatedTask.IsCompleted;

            return NoContent();
        }
    }
}
