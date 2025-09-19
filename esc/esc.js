/ Simple ESC simulation script for Wokwi custom part
class ESC {
  constructor(part) {
    this.part = part;
  }

  onSignalChange(value) {
    // Simulate ESC behavior (e.g., print value)
    console.log("ESC signal value:", value);
  }
}

module.exports = ESC;
